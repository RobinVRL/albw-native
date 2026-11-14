/* compilefix: USA 0037EB40 (EU 0037EB1C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_local_50'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _local_XX (Ghidra's 4-byte view of the stack slot local_XX) -> *(undefined4 *)&local_XX (same frame offset) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 *DAT_0037ec34;
extern float DAT_0037ec38;
extern undefined4 DAT_0037ec3c;
extern undefined4 DAT_0037ec40;
extern int *DAT_0037ec44;

// USA 0037EB40 <- EU 0037EB1C (Ghidra, non-matching)
// GLOBAL DAT_0037ec34 undefined4 *
// GLOBAL DAT_0037ec38 float
// GLOBAL DAT_0037ec3c undefined4
// GLOBAL DAT_0037ec40 undefined4
// GLOBAL DAT_0037ec44 int *

bool func_0037EB40(int param_1)

{
  int iVar1;
  undefined4 unaff_r5;
  float fVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 * *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined2 *)(albw_frame + 0x10))
  #define uStack_4e (*(ushort *)(albw_frame + 0x12))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float * *)(albw_frame + 0x1c))
  #define local_40 (*(float * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define fStack_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  local_34 = *(float *)(param_1 + 0xa90);
  local_30 = *(float *)(param_1 + 0xa94);
  uStack_2c = *(undefined4 *)(param_1 + 0xa98);
  local_1c = *DAT_0037ec34;
  uStack_18 = DAT_0037ec34[1];
  local_14 = DAT_0037ec34[2];
  fVar2 = DAT_0037ec38;
  func_004D80A4(&fStack_28,*(uint *)(param_1 + 1000),DAT_0037ec38);
  local_24 = ALBW_AS_F32(DAT_0037ec3c);
  uVar3 = DAT_0037ec3c;
  func_00115C54(&fStack_28,&fStack_28,&local_34);
  local_30 = *(float *)(param_1 + 0x3d4) + fVar2;
  local_24 = *(float *)(param_1 + 0x3d4) + fVar2;
  local_5c = 0;
  local_58 = 0;
  uStack_48 = 0;
  local_40 = &local_34;
  local_44 = &fStack_28;
  local_38 = 0;
  local_37 = 1;
  local_54 = *(undefined4 *)(param_1 + 0x2cc);
  (*(undefined4 *)&local_50) = CONCAT22((ushort)((uint)unaff_r5 >> 0x10) | (ushort)((uint)DAT_0037ec40 >> 0x10),
                       *(undefined2 *)(param_1 + 0x54));
  local_4c = 0x78;
  local_60 = &local_1c;
  local_3c = uVar3;
  iVar1 = func_004A8030(*DAT_0037ec44,(int *)&local_60,0xf);
  return iVar1 != 0;
}

