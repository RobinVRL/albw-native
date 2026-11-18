#include "ghidra_types.h"

extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern void func_0015D0E0(int param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float func_0054F764(undefined4 *param_1,uint param_2,uint *param_3);
extern undefined4 func_0054FC98(float *param_1,float *param_2,undefined1 *param_3,float fparam_0);
extern float DAT_0015c8f4;
extern float DAT_0015c8f8;
extern undefined4 DAT_0015c8fc;
extern undefined4 DAT_0015c900;

// USA 0015C774 <- EU 0015C778 (Ghidra, non-matching)
// GLOBAL DAT_0015c8f4 float
// GLOBAL DAT_0015c8f8 float
// GLOBAL DAT_0015c8fc undefined4
// GLOBAL DAT_0015c900 undefined4

void func_0015C774(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fparam_0;
  
  fparam_0 = DAT_0015c8f4;
  pfVar2 = (float *)(param_1 + 0x9b4);
  if (*(char *)(param_1 + 0x8c0) == '\x1a') {
    *(undefined1 *)(param_1 + 0x908) = 0;
    func_0054F764(pfVar2,0x80000000,(uint *)(param_1 + 0x904));
    iVar5 = 0xe;
    func_004FC07C(param_1,0xe,0xffffffff,0);
    iVar4 = *(int *)(param_1 + 0x960);
  }
  else {
    if (*(short *)(param_1 + 0x508) < 1) {
      *(undefined1 *)(param_1 + 0x908) = 0;
      func_0054F764(pfVar2,0x80000000,(uint *)(param_1 + 0x904));
    }
    else {
      func_0054FC98(pfVar2,(float *)(param_1 + 0x3d0),(undefined1 *)(param_1 + 0x908),
                            DAT_0015c8f8);
      *(float *)(param_1 + 0x904) = fVar3;
    }
    if (0 < *(short *)(param_1 + 0x508)) {
      func_0015AD54(param_1,3,0xffffffff,fparam_0);
      uVar1 = DAT_0015c8fc;
      *(undefined4 *)(param_1 + 0x8e4) = 0x19;
      *(undefined4 *)(param_1 + 0x8e8) = uVar1;
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      uVar1 = DAT_0015c900;
      *(undefined4 *)(param_1 + 0x8fc) = 7;
      *(undefined4 *)(param_1 + 0x900) = uVar1;
      goto LAB_0015c87c;
    }
    iVar5 = 1;
    func_004FC07C(param_1,1,0xffffffff,0);
    iVar4 = *(int *)(param_1 + 0x960);
  }
  if (iVar4 != 0) {
    func_002228D0(iVar4,iVar5,0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(float *)(param_1 + 0x8e8) = fparam_0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  *(float *)(param_1 + 0x900) = fparam_0;
LAB_0015c87c:
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined1 *)(param_1 + 0x9ae) = 0;
  func_0015D0E0(param_1);
  *(float *)(param_1 + 0xfbc) = fparam_0;
  *(float *)(param_1 + 0xfc0) = fparam_0;
  *(float *)(param_1 + 0xfc4) = fparam_0;
  *(undefined4 *)(param_1 + 0xf94) = 0;
  return;
}

