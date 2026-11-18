#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002B7508(int param_1,undefined2 param_2,int param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004905E0(float fparam_0);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int *DAT_003bfac8;
extern float DAT_003bfacc;
extern undefined DAT_003bfad0;
extern int DAT_003bfae4;
extern int *DAT_003bfae8;
extern char s_MSE_PL_Shield_UP_003bfad3[];
extern undefined4 _DAT_003bfad0;

// USA 003BF8F0 <- EU 003BF8CC (Ghidra, non-matching)
// GLOBAL DAT_003bfac8 int *
// GLOBAL DAT_003bfacc float
// GLOBAL DAT_003bfad0 undefined
// GLOBAL DAT_003bfae4 int
// GLOBAL DAT_003bfae8 int *
// GLOBAL s_MSE_PL_Shield_UP_003bfad3 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003BF8F0(int *param_1)

{
  int iVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  func_00115C70(local_18,*(float **)(*DAT_003bfac8 + 0x1c),(float *)(param_1[0x12] + 0x3d0));
  if (local_10 == DAT_003bfacc && local_18[0] == DAT_003bfacc) {
    iVar1 = 0;
    uVar2 = extraout_r1;
  }
  else if (local_10 < DAT_003bfacc) {
    if (local_18[0] < DAT_003bfacc) {
      if (local_18[0] < local_10) {
        iVar1 = func_004905E0(local_10 / local_18[0]);
        iVar1 = -0x40000000 - iVar1;
        uVar2 = extraout_r1_07;
      }
      else {
        iVar1 = func_004905E0(local_18[0] / local_10);
        iVar1 = iVar1 + -0x80000000;
        uVar2 = extraout_r1_06;
      }
    }
    else {
      local_10 = -local_10;
      if (local_10 < local_18[0]) {
        iVar1 = func_004905E0(local_10 / local_18[0]);
        iVar1 = iVar1 + 0x40000000;
        uVar2 = extraout_r1_05;
      }
      else {
        iVar1 = func_004905E0(local_18[0] / local_10);
        iVar1 = -0x80000000 - iVar1;
        uVar2 = extraout_r1_04;
      }
    }
  }
  else if (local_18[0] < DAT_003bfacc) {
    local_18[0] = -local_18[0];
    if (local_10 < local_18[0]) {
      iVar1 = func_004905E0(local_10 / local_18[0]);
      iVar1 = iVar1 + -0x40000000;
      uVar2 = extraout_r1_03;
    }
    else {
      iVar1 = func_004905E0(local_18[0] / local_10);
      iVar1 = -iVar1;
      uVar2 = extraout_r1_02;
    }
  }
  else if (local_10 < local_18[0]) {
    iVar1 = func_004905E0(local_10 / local_18[0]);
    iVar1 = 0x40000000 - iVar1;
    uVar2 = extraout_r1_01;
  }
  else {
    iVar1 = func_004905E0(local_18[0] / local_10);
    uVar2 = extraout_r1_00;
  }
  uVar4 = func_00114608(_DAT_003bfad0,uVar2);
  *(uint *)(param_1[0x12] + 0xa20) = (int)uVar4 + iVar1 & 0xe0000000;
  func_003A3568(param_1[0x12] + 0xbc8,0);
  func_002B7508(param_1[0x12],0x1e,0);
  func_003842C0(param_1[0x12] + 0x8c0,0x13,10,1);
  local_1c = s_MSE_PL_Shield_UP_003bfad3 + 1;
  local_20 = DAT_003bfae4;
  func_004EABB8(*DAT_003bfae8,&local_20,(undefined4 *)0x0);
  if (*(int *)(param_1[0x12] + 0xa00) < 0x40000001) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  (**(code **)(*param_1 + 0x138))(param_1,uVar3,1);
  return (**(code **)(*param_1 + 300))(param_1);
}

