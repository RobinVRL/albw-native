/* Guest CPU state and memory access for recompiled 3DS ARM11 code. */
#pragma once
#include <stdint.h>
#include <string.h>

typedef union {
    double f;
    uint64_t u;
    struct { uint32_t lo, hi; };
} DReg;

typedef struct CPU {
    uint32_t r[16];          /* r13 = sp, r14 = lr; r15 is only written before svc */
    uint32_t n, z, c, v;     /* condition flags, each 0 or 1 */
    uint32_t ge;             /* GE[3:0] from ARMv6 SIMD instructions (for sel) */
    union {                  /* VFPv2: 16 doubles aliasing 32 singles */
        DReg d[16];
        float s[32];
        uint32_t su[32];
    };
    uint32_t fpscr;
    uint32_t tls;            /* guest address of this thread's TLS page (mrc p15 c13) */
    int thread_id;
} CPU;

typedef void (*GuestFn)(CPU *c);
typedef struct { uint32_t addr; GuestFn fn; } DispatchEntry;

/* Guest memory: the whole 32-bit address space is one host mapping. */
extern uint8_t *g_mem;

typedef uint32_t __attribute__((aligned(1), may_alias)) u32_ua;
typedef uint16_t __attribute__((aligned(1), may_alias)) u16_ua;
typedef uint64_t __attribute__((aligned(1), may_alias)) u64_ua;

#define GPTR(a) (g_mem + (uint32_t)(a))
#define M64(a) (*(u64_ua *)GPTR(a))
#define M32(a) (*(u32_ua *)GPTR(a))
#define M16(a) (*(u16_ua *)GPTR(a))
#define M8(a)  (*(uint8_t *)GPTR(a))

/* runtime entry points used by generated code */
void dispatch(CPU *c, uint32_t addr);
void svc(CPU *c, uint32_t num);
void unimpl(CPU *c, uint32_t addr, uint32_t word);
void thumb_call(CPU *c, uint32_t addr);
GuestFn lookup_fn(uint32_t addr);
