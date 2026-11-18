#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 0017BFB0 <- EU 0017BFB0 (Ghidra, non-matching)

undefined4 func_0017BFB0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_00169A80(*(int **)(param_1 + 0x7b4),param_2,param_3,param_4);
  piVar5 = (int *)(param_1 + 0x7b0);
  func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7b0),(int *)0x0);
  local_28 = *(float *)(param_1 + 0x3d0);
  local_24 = *(int *)(param_1 + 0x3d4);
  local_20 = *(int *)(param_1 + 0x3d8);
  iVar1 = *piVar5;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_28);
  iVar1 = *piVar5;
  uVar2 = **(undefined4 **)(*(int *)(param_1 + 0x2d0) + 0x14);
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  func_004CEAF0(*piVar5);
  piVar3 = *(int **)(param_1 + 0x40c);
  piVar3[1] = (int)ALBW_AS_U32(local_28);
  piVar3[2] = local_24;
  piVar3[3] = local_20;
  func_004356B4(piVar3);
  iVar1 = *(int *)(param_1 + 0x7b8);
  uVar2 = *(undefined4 *)(param_1 + 0x3d4);
  uVar4 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  func_004356B4(*(int **)(param_1 + 0x7b8));
  iVar1 = *(int *)(*(int *)(*piVar5 + 0x24) + 0x14);
  local_1c = *(float *)(iVar1 + 0xc);
  local_18 = *(undefined4 *)(iVar1 + 0x1c);
  local_14 = *(undefined4 *)(iVar1 + 0x2c);
  return func_001512B4(*(int *)(param_1 + 0x7bc),&local_1c);
}

