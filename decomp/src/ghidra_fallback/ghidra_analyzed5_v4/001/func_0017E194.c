#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 0017E194 <- EU 0017E194 (Ghidra, non-matching)

undefined4 func_0017E194(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x970);
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_004C00F4(param_1,uVar4,iVar5,piVar6);
  return func_004BC8D8(param_1);
}

