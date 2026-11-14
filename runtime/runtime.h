/* Shared runtime state (HLE kernel, memory, threads). */
#pragma once
#include <pthread.h>
#include <stdio.h>
#include "cpu.h"

/* guest memory layout (from the exheader) */
#define TEXT_ADDR   0x00100000u
#define RO_ADDR     0x00693000u
#define DATA_ADDR   0x006FF000u
#define HEAP_ADDR   0x08000000u
#define STACK_TOP   0x10000000u
#define LINEAR_ADDR 0x14000000u
#define VRAM_ADDR   0x1F000000u
#define CONFIG_MEM  0x1FF80000u
#define SHARED_PAGE 0x1FF81000u
#define TLS_BASE    0x1FF82000u   /* 0x200 bytes per thread */

typedef struct {
    uint32_t text_size, ro_size, data_size, bss_size, stack_size;
} Layout;

int mem_init(const char *code_path, const Layout *l);

/* big lock: held while guest code runs */
extern pthread_mutex_t g_big;
void guest_unlock(void);
void guest_lock(void);

extern int g_trace_svc;   /* log every svc / IPC request */
extern volatile int g_quit;

/* kernel objects */
void kernel_init(void);
void kernel_vblank(void);                 /* called by the frontend at 60 Hz */
int  thread_start_main(uint32_t entry);   /* runs the guest main thread on a host thread */

/* frontend <- GSP: current framebuffers (guest addresses, 0 = none) */
typedef struct { uint32_t addr; uint32_t format; uint32_t stride; int w, h; } FbInfo;
extern FbInfo g_fb_top, g_fb_bottom;

/* IPC */
void ipc_request(CPU *c, uint32_t handle);
const char *handle_name(uint32_t h);
uint32_t handle_new_session(const char *service);

#define LOG(...) do { fprintf(stderr, __VA_ARGS__); fputc('\n', stderr); } while (0)
