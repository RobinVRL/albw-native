/* USA 00498700 <- EU 004986D8: sead PrimitiveRenderer helper (called from 004970E8): builds
 * a constant vertex table once (function-local static at data_0074F948, 72 floats,
 * 12 rows of 6, guarded by data_0070BD2C) and copies it out:
 *     if (vtx)  memcpy(vtx, cube_vertices, 0x120);
 *     if (idx)  memcpy(idx, data_0069C792, 0x48);      (36 u16 indices, rodata)
 *
 * What was wrong: Ghidra typed it as returning undefined8 built from `extraout_r1` (r1 left by
 * the guard helper 00100174 = __cxa_guard_acquire). The function returns nothing (void: the
 * last instruction is a tail call to memcpy 0010E3C4, whose r0 no caller uses); the stores were
 * otherwise right. Rewritten from the disassembly as a void function.
 *
 * Verified against EU 004986D8-00498880: guard test `ldr [guard]; tst #1`, then
 * __cxa_guard_acquire (00100174); the guard release call is replaced by `mov r0, r0` in this
 * build (00100174 already sets the guard word). Every vstr was transcribed in order:
 * s0=0, s1=-0.5, s2=0.5, s3=1, s4=1/3 (0x3EAAAAAB), s5=2/3 (0x3F2AAAAB); `vstmia r1,{s1,s2}`
 * at +0x24/+0x48/+0x70/+0x94 store (-0.5, 0.5).
 * Confidence: high. */
#include "robust.h"

int func_00100174(uint32_t *guard); /* __cxa_guard_acquire (native/runtime/cxxabi.c) */

extern uint32_t data_0070BD2C;      /* guard word */
extern float data_0074F948[72];     /* static cube vertex table */
extern const uint8_t data_0069C792[0x48];

void func_00498700(void *vtx, void *idx) {
    if ((data_0070BD2C & 1) == 0 && func_00100174(&data_0070BD2C) != 0) {
        static const uint32_t bits[72] = {
            /* 0x000 */ 0xBF000000, 0xBF000000, 0xBF000000, 0x00000000, 0x00000000, 0x3EAAAAAB,
            /* 0x018 */ 0x00000000, 0x00000000, 0x00000000, 0xBF000000, 0x3F000000, 0xBF000000,
            /* 0x030 */ 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
            /* 0x048 */ 0xBF000000, 0x3F000000, 0x3F000000, 0x3F800000, 0x3F800000, 0x3EAAAAAB,
            /* 0x060 */ 0x00000000, 0x00000000, 0x00000000, 0xBF000000, 0xBF000000, 0x3F000000,
            /* 0x078 */ 0x3F800000, 0x00000000, 0x3F2AAAAB, 0x00000000, 0x00000000, 0x00000000,
            /* 0x090 */ 0x3F000000, 0xBF000000, 0x3F000000, 0x00000000, 0x00000000, 0x3F800000,
            /* 0x0A8 */ 0x00000000, 0x00000000, 0x00000000, 0x3F000000, 0x3F000000, 0x3F000000,
            /* 0x0C0 */ 0x00000000, 0x3F800000, 0x3F2AAAAB, 0x00000000, 0x00000000, 0x00000000,
            /* 0x0D8 */ 0x3F000000, 0x3F000000, 0xBF000000, 0x3F800000, 0x3F800000, 0x3EAAAAAB,
            /* 0x0F0 */ 0x00000000, 0x00000000, 0x00000000, 0x3F000000, 0xBF000000, 0xBF000000,
            /* 0x108 */ 0x3F800000, 0x00000000, 0x3F2AAAAB, 0x00000000, 0x00000000, 0x00000000,
        };
        memcpy(data_0074F948, bits, sizeof bits);
    }
    if (vtx)
        memcpy(vtx, data_0074F948, 0x120);
    if (idx)
        memcpy(idx, data_0069C792, 0x48);
}
