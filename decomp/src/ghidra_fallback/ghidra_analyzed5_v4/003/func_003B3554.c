#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004905E0(float fparam_0);
extern undefined4 DAT_003b36dc;
extern int *DAT_003b36e0;
extern float DAT_003b36e4;
extern uint DAT_003b36e8;

// USA 003B3554 <- EU 003B3530 (Ghidra, non-matching)
// GLOBAL DAT_003b36dc undefined4
// GLOBAL DAT_003b36e0 int *
// GLOBAL DAT_003b36e4 float
// GLOBAL DAT_003b36e8 uint

void func_003B3554(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  uint uVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x67,10,1);
  uVar1 = DAT_003b36dc;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x8dc) + 0x14) + 0x10) = DAT_003b36dc;
  *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x8e0) + 0x14) + 0x10) = uVar1;
  func_00115C70(local_18,*(float **)(*DAT_003b36e0 + 0x1c),
                (float *)(*(int *)(param_1 + 0x48) + 0x3d0));
  if (local_10 == DAT_003b36e4 && local_18[0] == DAT_003b36e4) {
    iVar2 = 0;
    uVar3 = extraout_r1;
  }
  else if (local_10 < DAT_003b36e4) {
    if (local_18[0] < DAT_003b36e4) {
      if (local_18[0] < local_10) {
        iVar2 = func_004905E0(local_10 / local_18[0]);
        iVar2 = -0x40000000 - iVar2;
        uVar3 = extraout_r1_07;
      }
      else {
        iVar2 = func_004905E0(local_18[0] / local_10);
        iVar2 = iVar2 + -0x80000000;
        uVar3 = extraout_r1_06;
      }
    }
    else {
      local_10 = -local_10;
      if (local_10 < local_18[0]) {
        iVar2 = func_004905E0(local_10 / local_18[0]);
        iVar2 = iVar2 + 0x40000000;
        uVar3 = extraout_r1_05;
      }
      else {
        iVar2 = func_004905E0(local_18[0] / local_10);
        iVar2 = -0x80000000 - iVar2;
        uVar3 = extraout_r1_04;
      }
    }
  }
  else if (local_18[0] < DAT_003b36e4) {
    local_18[0] = -local_18[0];
    if (local_10 < local_18[0]) {
      iVar2 = func_004905E0(local_10 / local_18[0]);
      iVar2 = iVar2 + -0x40000000;
      uVar3 = extraout_r1_03;
    }
    else {
      iVar2 = func_004905E0(local_18[0] / local_10);
      iVar2 = -iVar2;
      uVar3 = extraout_r1_02;
    }
  }
  else if (local_10 < local_18[0]) {
    iVar2 = func_004905E0(local_10 / local_18[0]);
    iVar2 = 0x40000000 - iVar2;
    uVar3 = extraout_r1_01;
  }
  else {
    iVar2 = func_004905E0(local_18[0] / local_10);
    uVar3 = extraout_r1_00;
  }
  uVar4 = func_00114608(DAT_003b36e8,uVar3);
  *(uint *)(*(int *)(param_1 + 0x48) + 0xa20) = (int)uVar4 + iVar2 & 0xe0000000;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  return;
}

