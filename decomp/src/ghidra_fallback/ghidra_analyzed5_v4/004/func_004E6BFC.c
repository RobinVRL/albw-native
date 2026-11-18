#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_0037C5CC(int param_1);
extern int func_004C6654(int param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068C690(float *param_1);
extern float DAT_004e6e0c;
extern int *DAT_004e6e10;
extern float DAT_004e6e14;
extern float DAT_004e6e18;
extern float DAT_004e6e1c;
extern int DAT_004e6e20;
extern undefined4 DAT_004e6e24;
extern undefined4 DAT_004e6e28;
extern float DAT_004e6e2c;
extern int *DAT_004e6e30;
extern int *DAT_004e6e34;

// USA 004E6BFC <- EU 004E6BD4 (Ghidra, non-matching)
// GLOBAL DAT_004e6e0c float
// GLOBAL DAT_004e6e10 int *
// GLOBAL DAT_004e6e14 float
// GLOBAL DAT_004e6e18 float
// GLOBAL DAT_004e6e1c float
// GLOBAL DAT_004e6e20 int
// GLOBAL DAT_004e6e24 undefined4
// GLOBAL DAT_004e6e28 undefined4
// GLOBAL DAT_004e6e2c float
// GLOBAL DAT_004e6e30 int *
// GLOBAL DAT_004e6e34 int *

void func_004E6BFC(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  fVar7 = DAT_004e6e0c;
  *(float *)(param_1 + 0x3dc) = DAT_004e6e0c;
  *(float *)(param_1 + 0x3e0) = fVar7;
  *(float *)(param_1 + 0x3e4) = fVar7;
  if (*(char *)(param_1 + 0x563) == '\0') {
    pfVar5 = (float *)func_00520FC0();
  }
  else {
    pfVar5 = (float *)(param_1 + 0x3d0);
    if ((*(uint *)(param_1 + 0x508) != 0) &&
       (iVar3 = func_0052FBA0(*DAT_004e6e10 + 0x3dbbc,*(uint *)(param_1 + 0x508)), iVar3 != 0)) {
      pfVar5 = (float *)(iVar3 + 0x3d0);
    }
  }
  iVar3 = DAT_004e6e20;
  fVar6 = (*(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x540) + DAT_004e6e14) - pfVar5[1];
  if (fVar6 <= fVar7) {
    fVar6 = -fVar6;
  }
  fVar6 = (DAT_004e6e18 - fVar6) * DAT_004e6e1c;
  *(float *)(param_1 + 0x3e0) = fVar6;
  if (fVar6 < fVar7) {
    *(float *)(param_1 + 0x3e0) = fVar7;
  }
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(iVar3 + 8);
  func_00115C70(&local_34,(float *)(param_1 + 0x3d0),pfVar5);
  local_40 = local_34;
  uStack_3c = uStack_30;
  uStack_38 = uStack_2c;
  iVar3 = func_0068C690(&local_40);
  *(int *)(param_1 + 1000) = iVar3;
  uVar2 = DAT_004e6e28;
  *(undefined4 *)(param_1 + 0x554) = DAT_004e6e24;
  *(undefined4 *)(param_1 + 0x558) = uVar2;
  func_00115C70(&local_34,pfVar5,(float *)(param_1 + 0x3d0));
  local_40 = local_34;
  uStack_3c = uStack_30;
  uStack_38 = uStack_2c;
  uVar4 = func_0068C690(&local_40);
  fVar6 = DAT_004e6e2c;
  func_004D80A4(&local_58,uVar4,DAT_004e6e2c);
  local_54 = fVar7;
  func_004D80A4(&fStack_4c,*(uint *)(param_1 + 0x510),fVar6);
  bVar1 = local_44 * local_58 - fStack_4c * local_50 < fVar7;
  *(bool *)(param_1 + 0x55f) = bVar1;
  local_48 = fVar7;
  if (bVar1) {
    func_00115C70(&local_28,(float *)(param_1 + 0x3d0),pfVar5);
    local_34 = local_28;
    uStack_30 = uStack_24;
    uStack_2c = uStack_20;
    iVar3 = func_0068C690(&local_34);
    iVar3 = iVar3 + -0x40000000;
  }
  else {
    func_00115C70(&local_28,(float *)(param_1 + 0x3d0),pfVar5);
    local_34 = local_28;
    uStack_30 = uStack_24;
    uStack_2c = uStack_20;
    iVar3 = func_0068C690(&local_34);
    iVar3 = iVar3 + 0x40000000;
  }
  *(int *)(param_1 + 0x510) = iVar3;
  func_0037C5CC(param_1);
  *(undefined2 *)(param_1 + 0x42c) = 2;
  if (*(char *)(param_1 + 0x563) == '\0') {
    func_001DD484(*DAT_004e6e30,0x14,1);
    if (*DAT_004e6e34 != 0) {
      func_004C6654(*DAT_004e6e34,0x20);
    }
  }
  return;
}

