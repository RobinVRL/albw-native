#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern undefined4 DAT_00283dfc;

// USA 00283D34 <- EU 00283D5C (Ghidra, non-matching)
// GLOBAL DAT_00283dfc undefined4

undefined4 func_00283D34(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  
  piVar5 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar5);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar4 = *(int *)(param_1 + 0x970);
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (iVar4 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar4,1,fparam_0);
  }
  if (*(char *)(param_1 + 0x9f1) == '\x01') {
    *(undefined4 *)(param_1 + 0x8b4) = DAT_00283dfc;
  }
  func_004BC8D8(param_1);
  if (*(int **)(param_1 + 0x7b4) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x7b4),extraout_r1,iVar4,piVar5);
    return func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7a0),(int *)0x0);
  }
  return 0;
}

