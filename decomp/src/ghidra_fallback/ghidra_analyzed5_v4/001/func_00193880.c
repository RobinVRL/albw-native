#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);

// USA 00193880 <- EU 00193880 (Ghidra, non-matching)

undefined4 func_00193880(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  undefined8 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)(*(char *)(param_1 + 0x424) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x43c) + (int)piVar5);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x434) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x434)) + ((int)uVar1 >> 1));
  iVar4 = *(int *)(param_1 + 0x430);
  iVar2 = *(int *)(param_1 + 0x420) + 1;
  *(int *)(param_1 + 0x420) = iVar2;
  uVar7 = extraout_r1;
  if (iVar4 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar4,1,fparam_0);
    uVar7 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x444),uVar7,iVar4,piVar5);
  func_00168E9C(*(int **)(param_1 + 0x444),*(int *)(param_1 + 0x458),(int *)0x0);
  iVar2 = *(int *)(param_1 + 0x458);
  if (iVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x3d0);
    uVar7 = *(undefined4 *)(param_1 + 0x3d8);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar2 + 0x80),0,*(uint *)(param_1 + 1000),0);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(int *)(iVar2 + 0x8c) = (int)uVar6;
    *(int *)(iVar2 + 0x9c) = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)(iVar2 + 0xac) = uVar7;
    return func_004CEAF0(iVar2);
  }
  return 0;
}

