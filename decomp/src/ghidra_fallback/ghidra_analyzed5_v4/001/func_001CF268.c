#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_001cf388;

// USA 001CF268 <- EU 001CF268 (Ghidra, non-matching)
// GLOBAL DAT_001cf388 float

undefined4 func_001CF268(int param_1)

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
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  piVar6 = *(int **)(param_1 + 0x420);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)((int)piVar6) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x41c);
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  if (*(int **)(param_1 + 0x434) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x434),uVar4,iVar5,piVar6);
    iVar5 = 0;
    func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
    uVar4 = extraout_r1_01;
  }
  if (*(int **)(param_1 + 0x438) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x438),uVar4,iVar5,piVar6);
    func_00168E9C(*(int **)(param_1 + 0x438),*(int *)(param_1 + 0x430),(int *)0x0);
  }
  local_18 = DAT_001cf388;
  local_14 = DAT_001cf388;
  local_10 = DAT_001cf388;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 8),&local_18);
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

