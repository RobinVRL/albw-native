#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00238d90;
extern float DAT_00238d94;
extern float DAT_00238d98;
extern float DAT_00238d9c;
extern float DAT_00238da0;
extern float DAT_00238da4;
extern int DAT_00238da8;
extern int DAT_00238dac;
extern int DAT_00238db0;
extern float DAT_00238db4;
extern float DAT_00238db8;
extern float DAT_00238dbc;
extern float DAT_00238dc0;
extern float DAT_00238dc4;
extern undefined4 DAT_00238dc8;
extern float DAT_00238dcc;
extern float DAT_00238dd0;

// USA 002389D0 <- EU 002389D0 (Ghidra, non-matching)
// GLOBAL DAT_00238d90 int *
// GLOBAL DAT_00238d94 float
// GLOBAL DAT_00238d98 float
// GLOBAL DAT_00238d9c float
// GLOBAL DAT_00238da0 float
// GLOBAL DAT_00238da4 float
// GLOBAL DAT_00238da8 int
// GLOBAL DAT_00238dac int
// GLOBAL DAT_00238db0 int
// GLOBAL DAT_00238db4 float
// GLOBAL DAT_00238db8 float
// GLOBAL DAT_00238dbc float
// GLOBAL DAT_00238dc0 float
// GLOBAL DAT_00238dc4 float
// GLOBAL DAT_00238dc8 undefined4
// GLOBAL DAT_00238dcc float
// GLOBAL DAT_00238dd0 float

void func_002389D0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  piVar1 = DAT_00238d90;
  if (0 < *(int *)(param_1 + 0x84)) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    return;
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *DAT_00238d90;
    *(int *)(param_1 + 0x58) = *piVar1 + *(int *)(param_1 + 0x58);
  }
  else {
    *(int *)(param_1 + 0x5c) = *DAT_00238d90 + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *piVar1 + *(int *)(param_1 + 0x58);
  }
  iVar2 = func_0068C690((float *)(param_1 + 0x34));
  fVar10 = DAT_00238da4;
  fVar8 = DAT_00238da0;
  fVar9 = DAT_00238d98;
  bVar6 = 0x7ffffffe < iVar2 + 0x3fffffffU;
  fVar7 = *(float *)(param_1 + 0x2c) + DAT_00238d94;
  *(float *)(param_1 + 0x2c) = fVar7;
  if ((uint)ALBW_AS_U32(fVar9) <= (uint)ALBW_AS_U32(fVar7)) {
    fVar7 = DAT_00238d9c;
  }
  *(float *)(param_1 + 0x2c) = fVar7;
  iVar2 = DAT_00238da8;
  fVar8 = *(float *)(param_1 + 0x14) - fVar8;
  if (*(float *)(param_1 + 0x20) < fVar8) {
    *(float *)(param_1 + 0x20) = fVar8;
    if (*(int *)(param_1 + 0x40) == iVar2) {
      uVar3 = *(int *)(param_1 + 0x58) + 0x3fffffff;
      if (bVar6) {
        if (uVar3 < 0x7fffffff) goto LAB_00238b18;
LAB_00238b28:
        iVar2 = DAT_00238dac + *(int *)(param_1 + 0x60);
      }
      else {
        if (uVar3 < 0x7fffffff) goto LAB_00238b28;
LAB_00238b18:
        iVar2 = *(int *)(param_1 + 0x60) - DAT_00238dac;
      }
      *(int *)(param_1 + 0x60) = iVar2;
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * fVar10;
  }
  uVar3 = *(int *)(param_1 + 0x58) + 0x3fffffff;
  if (bVar6) {
    uVar4 = *(uint *)(param_1 + 0x54);
    if (uVar3 < 0x7fffffff) goto joined_r0x00238b5c;
joined_r0x00238b74:
    if (uVar4 < 0xc0000001) goto LAB_00238b88;
    iVar2 = uVar4 - *(int *)(param_1 + 0x60);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x54);
    if (uVar3 < 0x7fffffff) goto joined_r0x00238b74;
joined_r0x00238b5c:
    if (0x3fffffff < uVar4) goto LAB_00238b88;
    iVar2 = *(int *)(param_1 + 0x60) + uVar4;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_00238b88:
  func_0051D27C((int *)(param_1 + 0x60),0,0);
  func_0051D27C((int *)(param_1 + 0x58),*(int *)(param_1 + 0x50),DAT_00238db0);
  fVar9 = -*(float *)(param_1 + 0x44) * DAT_00238dc0;
  if (fVar9 <= DAT_00238db4) {
    fVar9 = -fVar9;
  }
  fVar8 = DAT_00238db8;
  if ((DAT_00238db8 <= fVar9) && (fVar8 = fVar9, DAT_00238dbc < fVar9)) {
    fVar8 = DAT_00238dbc;
  }
  fVar7 = DAT_00238db4;
  func_00688C34((float *)(param_1 + 0x44),DAT_00238db4,fVar8);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x44);
  func_00115C54((float *)(param_1 + 0x1c),(float *)(param_1 + 0x1c),(float *)(param_1 + 0x28));
  *(float *)(*(int *)(param_1 + 0xc) + 0x134) = fVar7;
  iVar2 = *(int *)(param_1 + 0xc);
  pfVar5 = (float *)(iVar2 + 0x80);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC(pfVar5,*(uint *)(param_1 + 0x58),(float *)(param_1 + 0x1c));
  local_50 = DAT_00238dc4;
  fStack_3c = DAT_00238dc4;
  fStack_28 = DAT_00238dc4;
  fVar9 = DAT_00238dc4;
  local_4c = fVar7;
  local_48 = fVar7;
  local_44 = fVar7;
  local_40 = fVar7;
  local_38 = fVar7;
  local_34 = fVar10;
  local_30 = fVar7;
  local_2c = fVar7;
  local_24 = fVar7;
  func_001157FC(pfVar5,pfVar5,&local_50);
  func_00491E80(&local_50,*(uint *)(param_1 + 0x54),0,0);
  func_001157FC(pfVar5,pfVar5,&local_50);
  func_00491E80(&local_50,0,0,*(uint *)(param_1 + 0x5c));
  func_001157FC(pfVar5,pfVar5,&local_50);
  local_34 = ALBW_AS_F32(DAT_00238dc8);
  local_50 = fVar9;
  local_4c = fVar7;
  local_48 = fVar7;
  local_44 = fVar7;
  local_40 = fVar7;
  fStack_3c = fVar9;
  local_38 = fVar7;
  local_30 = fVar7;
  local_2c = fVar7;
  fStack_28 = fVar9;
  local_24 = fVar7;
  func_001157FC(pfVar5,pfVar5,&local_50);
  func_004CEAF0(*(int *)(param_1 + 0xc));
  fVar8 = DAT_00238dd0;
  fVar9 = DAT_00238dcc;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x158) = *(undefined4 *)(param_1 + 0x4c);
  func_00688C34((float *)(param_1 + 0x48),fVar8,fVar9);
  iVar2 = func_00688C34((float *)(param_1 + 0x4c),fVar7,*(float *)(param_1 + 0x48));
  if (iVar2 != 0) {
    func_004CF478(*(int *)(param_1 + 0xc),0);
    *(undefined1 *)param_1 = 8;
  }
  return;
}

