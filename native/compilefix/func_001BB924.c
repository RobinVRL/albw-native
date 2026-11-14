/* compilefix: asm-verified rewrite taken from native/route/alt/func_001BB924.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 001BB924 (EU 001BB924): parse the "ICN" array of a map/course BYAML node into an array
 * of 0x38-byte icon/marker records (allocated with the array ctor 001BAA38 into out[1], count in
 * out[0]): per element "POS" (3 floats, +0..+8), "SCR" (2 floats, +0xC/+0x10), "ARG" (8 ints:
 * type -> flag bit table at +0x14, +0x1A, +0x28, +0x2C, +0x30, +0x31, +0x32, +0x34; +0x24 = the
 * 4th argument != 0), "MSG" (a heap copy of the string as a SafeString-like {vt 006F6AD8, buf,
 * size} object at +0x20), index at +0x1C.
 * Route: course/map data loading (reached from the course BYAML loader 001BAD4C).
 * Bug: the converted Ghidra source did not compile (switch on a `uint *` local): tripwire stub.
 * Verified instruction by instruction against EU 001BB924..001BBF1C: one 0.0f / 0 preset of the
 * shared out slot (sp+4) per group (not per call), `ldrne/strne` only-if-found stores, the
 * 23-entry ARG jump table (0..12, 20..22, default 0x40000000), byte/half store widths, the
 * bounded strlen (0x40000 -> 0) done three times around the assureTermination virtual (vtable
 * slot 8 of the {006F5988, str} temporary), alloc 0010CEE0(len+1, NULL heap, 4) + memset
 * 001164A8, the size<=0 branch, the copy clipped to size-1.  4th argument read from the ARM
 * stack-argument home (push {r0-r3}).  Confidence: high. */
#include "../route/route.h"

extern uint32_t data_006F7088[], data_006F6AD8[];
int *func_003C7A70(int *it);
uint32_t func_00560EF8(uint32_t *self, uint32_t *out, const char *name);
int func_0056128C(int *it);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
int func_00100118(int p, void *ctor, int size, int n);
int func_001BAA38(uint32_t *p);
int func_005610A8(int *it, int *out, int idx);
int func_00561184(int it, uint32_t *out, int idx);
int func_00560FA0(int it, uint32_t *out, int idx);
int func_00561114(int *it, int *out, const char *name);
void *func_0010BAB4(uint32_t size);
void *func_001164A8(void *dst, int32_t c, uint32_t n);
void *func_0010E3C4(void *dst, const void *src, uint32_t n);

static int32_t bounded_len(const char *s)
{
    int32_t n = 0;
    for (;;) {
        if (s[n] == 0)
            return n > 0x40000 ? 0 : n;
        n++;
        if (n > 0x40000)
            return 0;
    }
}

static uint32_t arg_type(uint32_t v)
{
    switch (v) {
    case 0: return 0x20000001;
    case 1: return 0x20000002;
    case 2: return 0x20000004;
    case 3: return 0x20000008;
    case 4: return 0x10;
    case 5: return 0x20;
    case 6: return 0x40;
    case 7: return 0x80;
    case 8: return 0x100;
    case 9: return 0x10000200;
    case 10: return 0x10000400;
    case 11: return 0x20000800;
    case 12: return 0x20001000;
    case 20: return 0x100000;
    case 21: return 0x200000;
    case 22: return 0x400000;
    default: return 0x40000000;
    }
}

void func_001BB924(uint32_t param_1, uint32_t *out, int *node, int param_4)
{
    int root[2], elem[2], pos[2], scr[2], arg[2];
    uint32_t slot;
    func_003C7A70(root);
    if (!func_00560EF8((uint32_t *)node, (uint32_t *)root, "ICN"))
        return;
    int32_t n = func_0056128C(root);
    if (n <= 0)
        return;
    void *mem = func_0010CEE0((uint32_t)n * 0x38, 0, 4);
    if (mem)
        mem = GPTR_TO(void, func_00100118((int)GPTR_OF(mem), (void *)func_001BAA38, 0x38, n));
    if (mem) {
        out[1] = GPTR_OF(mem);
        out[0] = (uint32_t)n;
    }
    for (int32_t i = 0; i < n; i++) {
        char *e = GPTR_TO(char, out[1]) + i * 0x38;
        func_003C7A70(elem);
        if (!func_005610A8(root, elem, i))
            return;
        func_003C7A70(pos);
        if (func_00560EF8((uint32_t *)elem, (uint32_t *)pos, "POS")) {
            slot = 0; /* 0.0f */
            if (func_00561184((int)GPTR_OF(pos), &slot, 0)) RF(e, 0, uint32_t) = slot;
            if (func_00561184((int)GPTR_OF(pos), &slot, 1)) RF(e, 4, uint32_t) = slot;
            if (func_00561184((int)GPTR_OF(pos), &slot, 2)) RF(e, 8, uint32_t) = slot;
        }
        func_003C7A70(scr);
        if (func_00560EF8((uint32_t *)elem, (uint32_t *)scr, "SCR")) {
            slot = 0;
            if (func_00561184((int)GPTR_OF(scr), &slot, 0)) RF(e, 0xC, uint32_t) = slot;
            if (func_00561184((int)GPTR_OF(scr), &slot, 1)) RF(e, 0x10, uint32_t) = slot;
        }
        func_003C7A70(arg);
        if (func_00560EF8((uint32_t *)elem, (uint32_t *)arg, "ARG")) {
            int a = (int)GPTR_OF(arg);
            slot = 0;
            if (func_00560FA0(a, &slot, 0)) RF(e, 0x14, uint32_t) = arg_type(slot);
            if (func_00560FA0(a, &slot, 1)) RF(e, 0x1A, uint16_t) = (uint16_t)slot;
            if (func_00560FA0(a, &slot, 2)) RF(e, 0x28, uint32_t) = slot;
            if (func_00560FA0(a, &slot, 3)) RF(e, 0x2C, uint16_t) = (uint16_t)slot;
            if (func_00560FA0(a, &slot, 4)) RF(e, 0x30, uint8_t) = (uint8_t)slot;
            if (func_00560FA0(a, &slot, 5)) RF(e, 0x31, uint8_t) = (uint8_t)slot;
            if (func_00560FA0(a, &slot, 6)) RF(e, 0x32, uint16_t) = (uint16_t)slot;
            if (func_00560FA0(a, &slot, 7)) RF(e, 0x34, uint16_t) = (uint16_t)slot;
            RF(e, 0x24, uint8_t) = param_4 != 0 ? 1 : 0;
        }
        uint32_t msg = 0;
        if (func_00561114(elem, (int *)&msg, "MSG")) {
            char *obj = func_0010BAB4(0xC);
            if (obj) {
                route_safestr tmp = { GPTR_OF(data_006F5988), msg };
                char *t = (char *)&tmp;
                RVFN(void (*)(char *), t, 8)(t);
                int32_t len = bounded_len(GPTR_TO(char, tmp.str));
                char *buf = func_0010CEE0((uint32_t)len + 1, 0, 4);
                if (buf)
                    buf = func_001164A8(buf, 0, (uint32_t)len + 1);
                RVFN(void (*)(char *), t, 8)(t);
                int32_t size = bounded_len(GPTR_TO(char, tmp.str)) + 1;
                RSETP(obj, 4, buf);
                RF(obj, 8, int32_t) = size;
                RF(obj, 0, uint32_t) = GPTR_OF(data_006F7088);
                if (size > 0) {
                    buf[size - 1] = 0;
                } else {
                    RF(obj, 4, uint32_t) = 0;
                    RF(obj, 8, uint32_t) = 0;
                }
                RF(obj, 0, uint32_t) = GPTR_OF(data_006F6AD8);
                char *dst = RP(obj, 4);
                RVFN(void (*)(char *), t, 8)(t);
                int32_t m = bounded_len(GPTR_TO(char, tmp.str));
                if (RF(obj, 8, int32_t) <= m)
                    m = RF(obj, 8, int32_t) - 1;
                RVFN(void (*)(char *), t, 8)(t);
                func_0010E3C4(dst, GPTR_TO(char, tmp.str), (uint32_t)m);
                dst[m] = 0;
            }
            RSETP(e, 0x20, obj);
        }
        RF(e, 0x1C, int32_t) = i;
    }
}
