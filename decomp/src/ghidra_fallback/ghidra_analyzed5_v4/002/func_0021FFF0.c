#include "ghidra_types.h"

extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FAFDC(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam002200a0;
extern float DAT_00220094;
extern float DAT_00220098;
extern undefined4 DAT_0022009c;

// USA 0021FFF0 <- EU 0021FFF0 (Ghidra, non-matching)
// GLOBAL DAT_00220094 float
// GLOBAL DAT_00220098 float
// GLOBAL DAT_0022009c undefined4
// GLOBAL UNK_002200a0 float

void func_0021FFF0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  func_004FAFDC(param_1,DAT_00220094);
  fVar1 = DAT_00220098;
  *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(param_1 + 0x3d8);
  *(float *)(param_1 + 0xa60) = *(float *)(param_1 + 0xa60) + fVar1;
  *(undefined1 *)(param_1 + 0x9dc) = 2;
  *(undefined4 **)(param_1 + 0x910) = (undefined4 *)(param_1 + 0xa5c);
  func_0036C058(param_1 + 0x8e8,0x19,0x19,0);
  uVar2 = DAT_0022009c;
  *(undefined4 *)(param_1 + 0xa6c) = 0x32;
  *(undefined4 *)(param_1 + 0xa70) = uVar2;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  func_004FABDC(param_1,0,0,0);
  func_004FB4E0(param_1,fRam002200a0);
  *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 0xa10);
  return;
}

