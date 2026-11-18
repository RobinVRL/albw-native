#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001511F0(int *param_1);
extern int func_001512E8(int *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 004E5128 <- EU 004E5100 (Ghidra, non-matching)

undefined4 func_004E5128(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  piVar6 = (int *)(*(char *)(param_1 + 0x488) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4a0) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x4a0) + *(char *)(param_1 + 0x488) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x498) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x498)) + ((int)uVar1 >> 1));
  iVar4 = *(int *)(param_1 + 0x494);
  iVar2 = *(int *)(param_1 + 0x484) + 1;
  *(int *)(param_1 + 0x484) = iVar2;
  uVar5 = extraout_r1;
  if (iVar4 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar4,1,fparam_0);
    uVar5 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x47c),uVar5,iVar4,piVar6);
  piVar7 = (int *)(param_1 + 0x478);
  uVar5 = 0;
  func_00168E9C(*(int **)(param_1 + 0x47c),*(int *)(param_1 + 0x478),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x480),extraout_r1_01,uVar5,piVar6);
  func_00168E9C(*(int **)(param_1 + 0x480),*piVar7,(int *)0x0);
  iVar2 = *piVar7;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  fStack_20 = *(float *)(param_1 + 0x4e0);
  uStack_1c = *(undefined4 *)(param_1 + 0x4e4);
  uStack_18 = *(undefined4 *)(param_1 + 0x4e8);
  func_00115D70(&fStack_20,&fStack_20,**(float **)(*(int *)(param_1 + 0x2d0) + 0x14));
  iVar2 = *piVar7;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x74) = fStack_20;
  *(undefined4 *)(iVar2 + 0x78) = uStack_1c;
  *(undefined4 *)(iVar2 + 0x7c) = uStack_18;
  func_004CEAF0(*piVar7);
  func_001512E8(*(int **)(param_1 + 0x4cc));
  return func_001511F0(*(int **)(param_1 + 0x4cc));
}

