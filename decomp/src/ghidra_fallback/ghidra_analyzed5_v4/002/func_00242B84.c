#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00242844(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);

// USA 00242B84 <- EU 00242B84 (Ghidra, non-matching)

undefined4 func_00242B84(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = *(int **)(param_1 + 0x450);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x458) + *(char *)(param_1 + 0x440) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x458) + *(char *)(param_1 + 0x440) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)((int)piVar6) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x44c);
  iVar2 = *(int *)(param_1 + 0x43c) + 1;
  *(int *)(param_1 + 0x43c) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  if (*(int **)(param_1 + 0x410) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x410),uVar4,iVar5,piVar6);
    iVar5 = 0;
    func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
    uVar4 = extraout_r1_01;
  }
  if (*(int **)(param_1 + 0x414) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x414),uVar4,iVar5,piVar6);
    iVar5 = 0;
    func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x40c),(int *)0x0);
    uVar4 = extraout_r1_02;
  }
  if (*(int **)(param_1 + 0x418) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x418),uVar4,iVar5,piVar6);
    func_00168E9C(*(int **)(param_1 + 0x418),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  if (*(int *)(param_1 + 0x428) != 0) {
    return func_00242844(param_1);
  }
  return 0;
}

