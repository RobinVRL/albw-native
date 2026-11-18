#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0031A208(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006652A4(undefined4 *param_1,undefined1 param_2);

// USA 0031A878 <- EU 0031A854 (Ghidra, non-matching)

undefined4 func_0031A878(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fparam_0;
  
  if (((*(short *)(param_1 + 0x38) != 0) && (bVar1 = func_00588BF0(param_1,1), bVar1)) &&
     (*(char *)(param_1 + 0x424) == '\0')) {
    func_006652A4((undefined4 *)(param_1 + 0x420),5);
  }
  piVar7 = *(int **)(param_1 + 0x434);
  piVar4 = (int *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)((int)piVar7 + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar5 = *(int *)(param_1 + 0x430);
  iVar3 = *(int *)(param_1 + 0x420) + 1;
  *(int *)(param_1 + 0x420) = iVar3;
  uVar6 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar6 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x444),uVar6,iVar5,piVar7);
  func_00168E9C(*(int **)(param_1 + 0x444),*(int *)(param_1 + 0x454),(int *)0x0);
  func_0031A208(param_1);
  iVar3 = *(int *)(param_1 + 0x790);
  uVar6 = *(undefined4 *)(param_1 + 0x3d4);
  uVar8 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = uVar6;
  *(undefined4 *)(iVar3 + 0xc) = uVar8;
  return func_004356B4(*(int **)(param_1 + 0x790));
}

