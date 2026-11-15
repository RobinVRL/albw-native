/* compilefix: USA 004951F0 (EU 004951C8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [3]
 *  - the PrimitiveRenderer textured-quad call (vtable +0x1C, 00496ABC: this, mtx, tex, c0, c1,
 *    uv_src, uv_size) lost its three stack arguments: [sp] = c1 (param_3 + 9), [sp+4] = uv_src
 *    (param_4), [sp+8] = uv_size (param_4 + 8) (EU 00495258..00495280), stored by Ghidra in
 *    local_98 / local_94 / local_90 but not passed (file select crashed in prim.c, boot stop 93)
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_0068B134(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern undefined4 DAT_0049528c;
extern float DAT_00495290;
extern undefined4 DAT_00495294;

// USA 004951F0 <- EU 004951C8 (Ghidra, non-matching)
// GLOBAL DAT_0049528c undefined4
// GLOBAL DAT_00495290 float
// GLOBAL DAT_00495294 undefined4

undefined4 func_004951F0(int param_1,undefined4 param_2,float *param_3,int param_4)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float * *)(albw_frame + 0x8))
  #define local_94 (*(float * *)(albw_frame + 0xc))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define afStack_88 ((float *)(albw_frame + 0x18))
  #define afStack_58 ((float *)(albw_frame + 0x48))
  #define local_28 (*(float *)(albw_frame + 0x78))
  #define local_24 (*(float *)(albw_frame + 0x7c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x80))
  local_98 = (float *)CF_FBITS(param_3[3]);
  local_94 = (float *)CF_FBITS(param_3[4]);
  if (*(char *)(param_3 + 0xd) == '\0') {
    local_90 = DAT_0049528c;
    func_0068B134((undefined4 *)(afStack_88),(undefined4 *)(&local_98),(undefined4 *)(param_3));
  }
  else {
    local_90 = DAT_0049528c;
    local_28 = DAT_00495290;
    local_24 = DAT_00495290;
    uStack_20 = DAT_00495294;
    pfVar1 = local_98;
    local_98 = local_94;
    local_94 = pfVar1;
    func_00491D78(afStack_88,(float *)&local_98,&local_28,param_3);
  }
  func_001157FC(afStack_58,(float *)(param_1 + 0x24),afStack_88);
  local_90 = param_4 + 8;
  local_98 = param_3 + 9;
  local_94 = (float *)param_4;
  return (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))
            (*(int **)(param_1 + 0x20),afStack_58,param_2,param_3 + 5,local_98,local_94,local_90);
}

