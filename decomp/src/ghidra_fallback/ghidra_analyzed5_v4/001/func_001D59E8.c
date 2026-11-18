#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001D4BB8(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int *DAT_001d5b00;

// USA 001D59E8 <- EU 001D59E8 (Ghidra, non-matching)
// GLOBAL DAT_001d5b00 int *

void func_001D59E8(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  float *pfVar4;
  int *piVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar5 = *(int **)(param_1 + 0x428);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)((int)piVar5 + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)((int)piVar5) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar2;
  if (*(int *)(param_1 + 0x424) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x424),1,fparam_0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x3e0);
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x488));
  pfVar4 = (float *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3e0) = uVar6;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar4);
  uVar6 = extraout_r1;
  if (*(char *)(param_1 + 0x4c5) == '\0') {
    func_00169A80(*(int **)(param_1 + 0x410),extraout_r1,pfVar4,piVar5);
    pfVar4 = (float *)0x0;
    func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
    uVar6 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x4bc),uVar6,pfVar4,piVar5);
  func_00168E9C(*(int **)(param_1 + 0x4bc),*(int *)(param_1 + 0x4b8),(int *)0x0);
  func_001D4BB8(param_1,(int)*(char *)(param_1 + 0x4c5));
  *(ushort *)(*DAT_001d5b00 + 0x33e) = *(ushort *)(*DAT_001d5b00 + 0x33e) | 4;
  return;
}

