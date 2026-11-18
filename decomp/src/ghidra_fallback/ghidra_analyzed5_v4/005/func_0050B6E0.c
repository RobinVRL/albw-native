#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 0050B6E0 <- EU 0050B6BC (Ghidra, function missing from the decomp table)

undefined4 func_0050B6E0(int param_1)

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
  
  piVar6 = (int *)(*(char *)(param_1 + 0x418) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x430) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x428)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x424);
  iVar2 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  if (*(int **)(param_1 + 0x410) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x410),uVar4,iVar5,piVar6);
    return func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  return 0;
}

