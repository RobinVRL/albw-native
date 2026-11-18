// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float func_00115194(uint param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556BD4(int param_1);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern int *DAT_004e662c;
extern float DAT_004e6630;
extern float DAT_004e6634;
extern uint DAT_004e6638;
extern int *DAT_004e663c;
extern float DAT_004e6640;
extern int *DAT_004e6644;
extern float DAT_004e6648;

// USA 004E6420 <- EU 004E63F8 (Ghidra, non-matching)
// GLOBAL DAT_004e662c int *
// GLOBAL DAT_004e6630 float
// GLOBAL DAT_004e6634 float
// GLOBAL DAT_004e6638 uint
// GLOBAL DAT_004e663c int *
// GLOBAL DAT_004e6640 float
// GLOBAL DAT_004e6644 int *
// GLOBAL DAT_004e6648 float

void func_004E6420(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x563) == '\0') {
    pfVar2 = (float *)func_00520FC0();
  }
  else {
    pfVar2 = (float *)(param_1 + 0x3d0);
    if ((*(uint *)(param_1 + 0x508) != 0) &&
       (iVar1 = func_0052FBA0(*DAT_004e662c + 0x3dbbc,*(uint *)(param_1 + 0x508)), iVar1 != 0)) {
      pfVar2 = (float *)(iVar1 + 0x3d0);
    }
  }
  func_004D80A4(&local_40,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x554));
  fVar4 = DAT_004e6634;
  fVar3 = DAT_004e6630;
  local_3c = DAT_004e6630;
  *(float *)(param_1 + 0x3d0) = local_40 + *pfVar2;
  *(float *)(param_1 + 0x3d8) = local_38 + pfVar2[2];
  *(float *)(param_1 + 0x540) = pfVar2[1] - *(float *)(param_1 + 0x3d4);
  if (*(char *)(param_1 + 0x563) == '\0') {
    iVar1 = func_00556BD4(*DAT_004e663c);
    func_00115154(&local_34,&local_30,0xc0000000 - iVar1);
    if (local_34 == fVar3) {
      *(float *)(param_1 + 0x544) = fVar3;
    }
    else {
      *(float *)(param_1 + 0x544) =
           (((*(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x540) + fVar4) - pfVar2[1]) *
           local_30) / local_34;
    }
  }
  else {
    fVar3 = func_00115194(DAT_004e6638);
    *(float *)(param_1 + 0x544) =
         (pfVar2[1] - (*(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x540) + fVar4)) / fVar3;
  }
  if (*(char *)(param_1 + 0x55f) == '\0') {
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 0x514) + *(int *)(param_1 + 1000);
    func_00115C70(&local_28,(float *)(param_1 + 0x3d0),pfVar2);
    local_34 = local_28;
    local_30 = fStack_24;
    uStack_2c = uStack_20;
    iVar1 = func_0068C690(&local_34);
    iVar1 = iVar1 + 0x40000000;
  }
  else {
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x514);
    func_00115C70(&local_28,(float *)(param_1 + 0x3d0),pfVar2);
    local_34 = local_28;
    local_30 = fStack_24;
    uStack_2c = uStack_20;
    iVar1 = func_0068C690(&local_34);
    iVar1 = iVar1 + -0x40000000;
  }
  *(int *)(param_1 + 0x510) = iVar1;
  func_00688C34((float *)(param_1 + 0x554),DAT_004e6640,*(float *)(param_1 + 0x558));
  func_0051D27C((int *)(param_1 + 0x514),DAT_004e6644[1],*DAT_004e6644);
  if (pfVar2[1] + DAT_004e6648 < *(float *)(param_1 + 0x3d4)) {
    *(float *)(param_1 + 0x3d4) = pfVar2[1] + DAT_004e6648;
  }
  if (0x23 < *(int *)(param_1 + 0x4e4)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

