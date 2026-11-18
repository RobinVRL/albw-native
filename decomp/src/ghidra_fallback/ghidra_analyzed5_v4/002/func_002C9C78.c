#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0052FE18(int param_1,undefined4 *param_2);
extern float DAT_002c9d04;

// USA 002C9C78 <- EU 002C9C54 (Ghidra, non-matching)
// GLOBAL DAT_002c9d04 float

undefined4 func_002C9C78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  int *in_r3;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_18 ((undefined4 *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  func_0052FE18(param_1,auStack_18);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x4b4) + 0xc);
  *(float *)(*(int *)(*(int *)(param_1 + 0x4b4) + 0x14) + 0x10) = local_10 * DAT_002c9d04;
  func_00169A80(*(int **)(param_1 + 0x4b4),uVar2,in_r2,in_r3);
  piVar3 = (int *)(param_1 + 0x4b0);
  func_00168E9C(*(int **)(param_1 + 0x4b4),*(int *)(param_1 + 0x4b0),(int *)0x0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar1 + 0x80),0,*(uint *)(param_1 + 1000),0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  return func_004CEAF0(*piVar3);
}

