/* HLE of 3DS services over IPC (SendSyncRequest).
 * Command buffer: TLS + 0x80. Header = (id << 16) | (normal_words << 6) | translate_words.
 * Implemented: srv:, the parts of gsp::Gpu needed for vblank + framebuffers.
 * Everything else answers success with zeroed outputs and is logged once. */
#include <stdlib.h>
#include <string.h>
#include "runtime.h"

FbInfo g_fb_top, g_fb_bottom;
void kernel_signal_event(uint32_t h);

typedef struct { char svc[16]; uint32_t cmd; } Seen;
static Seen seen[2048];
static int nseen;

static void log_once(const char *svc, uint32_t cmd) {
    for (int i = 0; i < nseen; i++)
        if (seen[i].cmd == cmd && !strcmp(seen[i].svc, svc)) return;
    if (nseen < 2048) { snprintf(seen[nseen].svc, 16, "%s", svc); seen[nseen++].cmd = cmd; }
    LOG("ipc: %-10s cmd %08x (stub: success)", svc, cmd);
}

static void reply(uint32_t *cmd, uint32_t id, int normal, int translate) {
    cmd[0] = (id << 16) | ((uint32_t)normal << 6) | (uint32_t)translate;
    cmd[1] = 0;
}

/* ------------------------------------------------------------ gsp */
static struct {
    uint32_t event;      /* interrupt event handle from RegisterInterruptRelayQueue */
    uint32_t shmem;      /* guest address of the GSP shared memory (once mapped) */
    uint32_t shmem_handle;
} gsp;

uint32_t gsp_shmem_handle(void) { return gsp.shmem_handle; }
void gsp_set_shmem_addr(uint32_t h, uint32_t addr) { if (h == gsp.shmem_handle) gsp.shmem = addr; }

static void gsp_push_irq(uint8_t irq) {
    uint32_t q = gsp.shmem;  /* thread index 0 */
    uint8_t start = M8(q), count = M8(q + 1);
    if (count >= 0x34) return;
    M8(q + 0xC + (start + count) % 0x34) = irq;
    M8(q + 1) = count + 1;
}

static void fb_read(uint32_t info, FbInfo *fb, int w) {
    uint8_t idx = M8(info) & 1;
    if (!M8(info + 1)) return;            /* no update */
    uint32_t e = info + 4 + 0x1C * idx;
    uint32_t active = M32(e);
    fb->addr = active ? M32(e + 8) : M32(e + 4);
    fb->stride = M32(e + 12);
    fb->format = M32(e + 16);
    fb->w = 240; fb->h = w;              /* 3DS screens are stored rotated */
    M8(info + 1) = 0;
}

void gsp_vblank(void) {
    if (!gsp.shmem || !gsp.event) return;
    gsp_push_irq(2);  /* PDC0 (top) */
    gsp_push_irq(3);  /* PDC1 (bottom) */
    fb_read(gsp.shmem + 0x200, &g_fb_top, 400);
    fb_read(gsp.shmem + 0x240, &g_fb_bottom, 320);
    kernel_signal_event(gsp.event);
}

/* ------------------------------------------------------------ dispatch */
void ipc_request(CPU *c, uint32_t handle) {
    uint32_t *cmd = (uint32_t *)GPTR(c->tls + 0x80);
    uint32_t hdr = cmd[0], id = hdr >> 16;
    const char *svc = handle_name(handle);
    if (g_trace_svc) LOG("[t%d] ipc %s %08x", c->thread_id, svc, hdr);
    c->r[0] = 0;

    if (!strcmp(svc, "srv:") || !strcmp(svc, "srv:pm")) {
        switch (id) {
        case 0x0001: reply(cmd, id, 1, 0); return;                  /* RegisterClient */
        case 0x0002: reply(cmd, id, 1, 2); cmd[2] = 0x20; cmd[3] = handle_new_session("srvnotif"); return;
        case 0x0005: {                                              /* GetServiceHandle(name[8], len, flags) */
            char name[9] = {0};
            memcpy(name, &cmd[1], 8);
            reply(cmd, id, 1, 2);
            cmd[2] = 0;
            cmd[3] = handle_new_session(name);
            LOG("srv: GetServiceHandle(\"%s\") -> %08x", name, cmd[3]);
            return;
        }
        }
    }
    if (!strncmp(svc, "gsp::Gpu", 8)) {
        switch (id) {
        case 0x0013: {  /* RegisterInterruptRelayQueue(flags, event) */
            extern uint32_t kernel_new_memblock(uint32_t size);
            gsp.event = cmd[3];
            gsp.shmem_handle = kernel_new_memblock(0x1000);
            reply(cmd, id, 2, 2);
            cmd[1] = 0x2A07;    /* success: first registration */
            cmd[2] = 0;         /* thread index */
            cmd[3] = 0;
            cmd[4] = gsp.shmem_handle;
            LOG("gsp: interrupt queue registered, event %08x", gsp.event);
            return;
        }
        case 0x0016: reply(cmd, id, 1, 0); return;  /* AcquireRight */
        }
    }
    log_once(svc, hdr);
    reply(cmd, id, 1, 0);
    memset(&cmd[2], 0, 14 * 4);
}
