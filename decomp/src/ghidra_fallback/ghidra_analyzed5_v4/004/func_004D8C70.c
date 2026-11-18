#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);

// USA 004D8C70 <- EU 004D8C48 (Ghidra, non-matching)

undefined4 func_004D8C70(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  iVar2 = *(int *)(param_1 + 0x430);
  pfVar5 = (float *)(param_1 + 0x3d0);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  uVar1 = *(uint *)(param_1 + 1000);
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x20),uVar1,pfVar5);
  func_00169A80(*(int **)(param_1 + 0x438),extraout_r1,uVar1,(int *)pfVar5);
  uVar4 = 0;
  func_00168E9C(*(int **)(param_1 + 0x438),*(int *)(param_1 + 0x430),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x43c),extraout_r1_00,uVar4,(int *)pfVar5);
  func_00168E9C(*(int **)(param_1 + 0x43c),*(int *)(param_1 + 0x430),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

