#include "ghidra_types.h"

extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_0058A1F4(int param_1);
extern float DAT_002ad054;
extern undefined4 DAT_002ad058;
extern int DAT_002ad05c;
extern float DAT_002ad060;

// USA 002ACF44 <- EU 002ACF20 (Ghidra, non-matching)
// GLOBAL DAT_002ad054 float
// GLOBAL DAT_002ad058 undefined4
// GLOBAL DAT_002ad05c int
// GLOBAL DAT_002ad060 float

/* WARNING: Removing unreachable block (ram,0x002ad018) */

void func_002ACF44(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float in_s0;
  float fparam_0;
  undefined4 uVar4;
  
  func_002AE780(param_1);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  uVar2 = func_0058A1F4(*(int *)(param_1 + 0x34));
  fparam_0 = DAT_002ad060;
  uVar4 = DAT_002ad058;
  fVar1 = DAT_002ad054;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0x3c;
    *(float *)(param_1 + 0x30) = fparam_0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(DAT_002ad05c + param_1);
    *(uint *)(param_1 + 0x2c) = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar4;
    }
    else {
      in_s0 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x30) = fVar1 / in_s0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    fparam_0 = in_s0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x504) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = uVar4;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 2;
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x800;
  func_002ADFE4(param_1,2,0x1f,0,0);
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffff7ff;
  func_004FB2F0(*(int *)(param_1 + 0x34),fparam_0);
  iVar3 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar3 + 0x740) = 0;
  *(undefined4 *)(iVar3 + 0x744) = uVar4;
  *(undefined4 *)(iVar3 + 0x73c) = 0;
  return;
}

