#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001511F0(int *param_1);
extern int func_001512E8(int *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 004E51AC <- EU 004E5184 (Ghidra, non-matching)

undefined4 func_004E51AC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  func_00169A80(*(int **)(param_1 + 0x47c),param_2,param_3,param_4);
  piVar3 = (int *)(param_1 + 0x478);
  uVar2 = 0;
  func_00168E9C(*(int **)(param_1 + 0x47c),*(int *)(param_1 + 0x478),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x480),extraout_r1,uVar2,param_4);
  func_00168E9C(*(int **)(param_1 + 0x480),*piVar3,(int *)0x0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  local_20 = *(float *)(param_1 + 0x4e0);
  local_1c = *(undefined4 *)(param_1 + 0x4e4);
  local_18 = *(undefined4 *)(param_1 + 0x4e8);
  func_00115D70(&local_20,&local_20,**(float **)(*(int *)(param_1 + 0x2d0) + 0x14));
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = local_20;
  *(undefined4 *)(iVar1 + 0x78) = local_1c;
  *(undefined4 *)(iVar1 + 0x7c) = local_18;
  func_004CEAF0(*piVar3);
  func_001512E8(*(int **)(param_1 + 0x4cc));
  return func_001511F0(*(int **)(param_1 + 0x4cc));
}

