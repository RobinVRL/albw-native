/* compilefix: USA 001A6E30 (EU 001A6E30), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_local_48'
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
extern float DAT_001a6f04;
extern undefined4 DAT_001a6f08;
extern undefined4 DAT_001a6f0c;
extern int *DAT_001a6f10;

// USA 001A6E30 <- EU 001A6E30 (Ghidra, non-matching)
// GLOBAL DAT_001a6f04 float
// GLOBAL DAT_001a6f08 undefined4
// GLOBAL DAT_001a6f0c undefined4
// GLOBAL DAT_001a6f10 int *

int func_001A6E30(int param_1)

{
  int iVar1;
  undefined4 unaff_r5;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((int *)(albw_frame + 0x8))
  #define local_48 (*(undefined2 *)(albw_frame + 0x18))
  #define uStack_46 (*(ushort *)(albw_frame + 0x1a))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(float * *)(albw_frame + 0x24))
  #define local_38 (*(float * *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x30))
  #define local_2f (*(undefined1 *)(albw_frame + 0x31))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define fStack_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  local_2c = *(float *)(param_1 + 0x3d0);
  uStack_28 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d8);
  func_004D80A4(&fStack_20,*(uint *)(param_1 + 1000),DAT_001a6f04);
  local_1c = DAT_001a6f08;
  uVar2 = DAT_001a6f08;
  func_00115C54(&fStack_20,&fStack_20,&local_2c);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = &local_2c;
  local_3c = &fStack_20;
  local_2f = 1;
  local_58[3] = *(undefined4 *)(param_1 + 0x2cc);
  (*(undefined4 *)&local_48) = CONCAT22((ushort)((uint)unaff_r5 >> 0x10) | (ushort)((uint)DAT_001a6f0c >> 0x10),
                       *(undefined2 *)(param_1 + 0x54));
  local_44 = 0x78;
  local_34 = uVar2;
  iVar1 = func_004A8030(*DAT_001a6f10,local_58,0xf);
  return iVar1;
}

