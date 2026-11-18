#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int *DAT_002ce2e0;
extern float DAT_002ce2e4;
extern int DAT_002ce2e8;
extern float DAT_002ce2ec;

// USA 002CE258 <- EU 002CE234 (Ghidra, non-matching)
// GLOBAL DAT_002ce2e0 int *
// GLOBAL DAT_002ce2e4 float
// GLOBAL DAT_002ce2e8 int
// GLOBAL DAT_002ce2ec float

undefined4 func_002CE258(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined4 extraout_r1;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  
  uVar1 = *(int *)(param_1 + 0x40c) * *DAT_002ce2e0;
  pfVar4 = (float *)(param_1 + 0x3d0);
  pfVar2 = (float *)(DAT_002ce2e8 + (uVar1 >> 0x18) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) =
       *(float *)(param_1 + 0x3d4) + (*pfVar2 + pfVar2[1] * fVar5 * DAT_002ce2e4) * DAT_002ce2ec;
  iVar3 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  uVar1 = *(uint *)(param_1 + 1000);
  func_004D7EB0((float *)(iVar3 + 0x80),*(uint *)(param_1 + 0x47c),uVar1,pfVar4);
  func_00169A80(*(int **)(param_1 + 0x434),extraout_r1,uVar1,(int *)pfVar4);
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

