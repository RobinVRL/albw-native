#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 0013C6D4 <- EU 0013C6D4 (Ghidra, non-matching)

undefined4 func_0013C6D4(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  float *pfVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  piVar5 = *(int **)(param_1 + 0x42c);
  pfVar4 = &local_20;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)((int)piVar5 + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x418) + 1;
  *(int *)(param_1 + 0x418) = iVar2;
  if (*(int *)(param_1 + 0x428) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x428),1,fparam_0);
  }
  local_20 = *(float *)(param_1 + 0x3d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
  iVar2 = *(int *)(param_1 + 0x410);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&local_20);
  func_004CEAF0(*(int *)(param_1 + 0x410));
  func_00169A80(*(int **)(param_1 + 0x414),extraout_r1,pfVar4,piVar5);
  return func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x410),(int *)0x0);
}

