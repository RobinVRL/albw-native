#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 00197510 <- EU 00197510 (Ghidra, non-matching)

undefined4 func_00197510(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = (int *)(*(char *)(param_1 + 0x47c) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x494) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x494) + *(char *)(param_1 + 0x47c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x48c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x48c)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x488);
  iVar2 = *(int *)(param_1 + 0x478) + 1;
  *(int *)(param_1 + 0x478) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  if (*(int **)(param_1 + 0x4a0) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x4a0),uVar4,iVar5,piVar6);
    iVar5 = 0;
    func_00168E9C(*(int **)(param_1 + 0x4a0),*(int *)(param_1 + 0x49c),(int *)0x0);
    uVar4 = extraout_r1_01;
  }
  if (*(int **)(param_1 + 0x4a4) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x4a4),uVar4,iVar5,piVar6);
    func_00168E9C(*(int **)(param_1 + 0x4a4),*(int *)(param_1 + 0x49c),(int *)0x0);
  }
  iVar2 = *(int *)(param_1 + 0x49c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x49c));
  return func_001512B4(*(int *)(param_1 + 0x4a8),(float *)(param_1 + 0x3d0));
}

