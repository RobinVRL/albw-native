/* USA 004989EC <- EU 004989C4: sead PrimitiveRenderer helper (called from 004970E8): builds a
 * constant 4-vertex quad table once (function-local static at data_0074F8B8, 36 floats =
 * 4 rows of 9, guarded by data_0070BD28) and copies it out:
 *     if (vtx)  memcpy(vtx, quad_vertices, 0x90);
 *     if (idx)  memcpy(idx, data_0069C786, 0xC);      (6 u16 indices, rodata)
 *
 * What was wrong: Ghidra typed it as returning undefined8 built from `extraout_r1` (r1 left by
 * the guard helper 00100174 = __cxa_guard_acquire). The function returns nothing (it ends in a
 * tail call to memcpy 0010E3C4 whose result no caller uses). Rewritten as void.
 *
 * Verified against EU 004989C4-00498AD0: guard `ldr [guard]; tst #1` + __cxa_guard_acquire,
 * release replaced by `mov r0, r0` in this build. Constants s0=0, s1=1, s2=-0.5, s3=0.5;
 * `vstmia r0,{s2,s3}` -> [0..1], `vstmia r0+0xC,{s0,s1}` -> [3..4]; each vstr transcribed.
 * Confidence: high. */
#include "robust.h"

int func_00100174(uint32_t *guard); /* __cxa_guard_acquire (native/runtime/cxxabi.c) */

extern uint32_t data_0070BD28;      /* guard word */
extern float data_0074F8B8[36];     /* static quad vertex table */
extern const uint8_t data_0069C786[0xC];

void func_004989EC(void *vtx, void *idx) {
    if ((data_0070BD28 & 1) == 0 && func_00100174(&data_0070BD28) != 0) {
        static const float v[36] = {
            -0.5f,  0.5f, 0.0f,   0.0f, 1.0f,   0.0f, 0.0f, 0.0f, 0.0f,
             0.5f,  0.5f, 0.0f,   1.0f, 1.0f,   0.0f, 0.0f, 0.0f, 0.0f,
            -0.5f, -0.5f, 0.0f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f, 0.0f,
             0.5f, -0.5f, 0.0f,   1.0f, 0.0f,   1.0f, 0.0f, 0.0f, 0.0f,
        };
        memcpy(data_0074F8B8, v, sizeof v);
    }
    if (vtx)
        memcpy(vtx, data_0074F8B8, 0x90);
    if (idx)
        memcpy(idx, data_0069C786, 0xC);
}
