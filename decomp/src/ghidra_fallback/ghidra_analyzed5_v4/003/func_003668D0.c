#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001492CC(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_002D3B94(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5AB0(int param_1);
extern int func_004905E0(float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_004EB578(int param_1);
extern int func_004EB5E8(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern float func_0053EE30(int param_1);
extern int func_0053EE40(int param_1,float fparam_0);
extern int func_0054CEC0(int param_1);
extern float DAT_00366bf8;
extern float DAT_00366bfc;
extern int *DAT_00366c00;
extern float DAT_00366c04;
extern float DAT_00366c08;
extern uint DAT_00366c0c;
extern float DAT_00366c10;
extern float DAT_00366c14;
extern float DAT_00366c18;
extern uint DAT_00366c1c;
extern float DAT_00366c20;
extern float DAT_00366c24;
extern int DAT_00366f88;
extern float DAT_00366f8c;
extern float DAT_00366f90;
extern uint DAT_00366f94;
extern undefined DAT_00366f98;
extern char s_SE_PL_TornadeRod_FLY_WIND_00366f6c[];
extern char s__Land_00366f9b[];
extern char s_cf_00366f9b[];
extern undefined4 _DAT_00366f98;

// USA 003668D0 <- EU 003668AC (Ghidra, non-matching)
// GLOBAL DAT_00366bf8 float
// GLOBAL DAT_00366bfc float
// GLOBAL DAT_00366c00 int *
// GLOBAL DAT_00366c04 float
// GLOBAL DAT_00366c08 float
// GLOBAL DAT_00366c0c uint
// GLOBAL DAT_00366c10 float
// GLOBAL DAT_00366c14 float
// GLOBAL DAT_00366c18 float
// GLOBAL DAT_00366c1c uint
// GLOBAL DAT_00366c20 float
// GLOBAL DAT_00366c24 float
// GLOBAL DAT_00366f88 int
// GLOBAL DAT_00366f8c float
// GLOBAL DAT_00366f90 float
// GLOBAL DAT_00366f94 uint
// GLOBAL DAT_00366f98 undefined
// GLOBAL s_cf_00366f9b string
// GLOBAL s_SE_PL_TornadeRod_FLY_WIND_00366f6c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003668D0(int param_1,undefined4 param_2)

{
  byte bVar1;
  float fparam_0;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  fVar10 = DAT_00366c08;
  fparam_0 = DAT_00366c04;
  piVar4 = DAT_00366c00;
  fVar9 = DAT_00366bfc;
  fVar8 = DAT_00366bf8;
  *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52d) = 1;
  switch(param_2) {
  case 0x3a:
    iVar2 = func_002D55E8(param_1);
    if (iVar2 == 0) {
      piVar4 = *(int **)(param_1 + 0x3c);
      iVar2 = *piVar4;
      uVar11 = func_00114608(DAT_00366c0c,extraout_r1);
      func_0051D2CC(piVar4,(int)uVar11 + iVar2 & 0xe0000000,DAT_00366c10);
      func_002D56A8(param_1,fVar8);
      iVar2 = func_0054CEC0(*(int *)(param_1 + 0x48));
      if ((iVar2 != 0) && (3 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
        return func_002D55D0(param_1,0x3b);
      }
    }
    break;
  case 0x3b:
    iVar2 = func_002D55E8(param_1);
    if (iVar2 == 0) {
      iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_00366c14);
      if (iVar2 != 0) {
        func_001492CC((undefined4 *)(param_1 + 0x130),**(undefined4 **)(param_1 + 0x3c),
                      (uint)(2 < *(uint *)(*(int *)(param_1 + 0x28) + 0x45c)));
        func_002D3B94(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
      }
      *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar10;
      *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar9;
      if (*(char *)(*(int *)(param_1 + 0x50) + 0x165) != '\0') {
        *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar10;
        func_002D55D0(param_1,0x3e);
        return func_004EB578(*piVar4);
      }
      iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_00366c18);
      if (iVar2 != 0) {
        return func_002D55D0(param_1,0x3c);
      }
    }
    break;
  case 0x3c:
    uVar3 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x44);
    if (uVar3 < 5) {
      iVar2 = *(int *)(param_1 + 0x34);
      fVar9 = *(float *)(iVar2 + 4) + fVar9;
LAB_00366aac:
      *(float *)(iVar2 + 4) = fVar9;
    }
    else if (uVar3 < 0x3d) {
      iVar2 = *(int *)(param_1 + 0x34);
      fVar9 = *(float *)(iVar2 + 4) + fparam_0;
      goto LAB_00366aac;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
         (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) ||
        (DAT_00366c1c < *(uint *)(*(int *)(param_1 + 0x34) + 4))) &&
       (10 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
      *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar8;
      return func_002D55D0(param_1,0x3e);
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) =
         (DAT_00366c24 *
         ((*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(param_1 + 0x14c)) - fVar10)) /
         DAT_00366c20 + fVar8;
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar10;
    if (*(char *)(*(int *)(param_1 + 0x50) + 0x165) != '\0') {
      *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar10;
      func_002D55D0(param_1,0x3e);
      return func_004EB578(*piVar4);
    }
    break;
  case 0x3d:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fparam_0);
    iVar2 = *(int *)(param_1 + 0x50);
    if (*(char *)(iVar2 + 0x528) == '\0') {
      fVar9 = *(float *)(*(int *)(param_1 + 0x34) + 4);
      if (fVar10 < fVar9) {
        fVar9 = fVar10;
      }
      *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar9;
      bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
      bVar6 = (bVar1 & 1) == 0;
      bVar7 = (bVar1 & 8) == 0;
      bVar5 = bVar6 && bVar7;
      if (bVar6 && bVar7) {
        bVar5 = *(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0';
      }
      if ((!bVar5) || ((uint)ALBW_AS_U32(DAT_00366f8c) < (uint)ALBW_AS_U32(fVar9))) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x44);
        bVar6 = 9 < uVar3;
        bVar5 = uVar3 == 10;
        if (10 < uVar3) {
          bVar6 = 0x13 < *(uint *)(param_1 + 0x150);
          bVar5 = *(uint *)(param_1 + 0x150) == 0x14;
        }
        if (bVar6 && !bVar5) {
          *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar8;
          return func_002D55D0(param_1,7);
        }
      }
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar10;
      return 0;
    }
    fVar9 = *(float *)(iVar2 + 0x518);
    fVar8 = *(float *)(iVar2 + 0x510);
    if (fVar9 == fVar10 && fVar8 == fVar10) {
      iVar2 = 0;
    }
    else if (fVar9 < fVar10) {
      if (fVar8 < fVar10) {
        if (fVar8 < fVar9) {
          iVar2 = func_004905E0(fVar9 / fVar8);
          iVar2 = -0x40000000 - iVar2;
        }
        else {
          iVar2 = func_004905E0(fVar8 / fVar9);
          iVar2 = iVar2 + -0x80000000;
        }
      }
      else {
        fVar9 = -fVar9;
        if (fVar9 < fVar8) {
          iVar2 = func_004905E0(fVar9 / fVar8);
          iVar2 = iVar2 + 0x40000000;
        }
        else {
          iVar2 = func_004905E0(fVar8 / fVar9);
          iVar2 = -0x80000000 - iVar2;
        }
      }
    }
    else if (fVar8 < fVar10) {
      fVar8 = -fVar8;
      if (fVar9 < fVar8) {
        iVar2 = func_004905E0(fVar9 / fVar8);
        iVar2 = iVar2 + -0x40000000;
      }
      else {
        iVar2 = func_004905E0(fVar8 / fVar9);
        iVar2 = -iVar2;
      }
    }
    else if (fVar9 < fVar8) {
      iVar2 = func_004905E0(fVar9 / fVar8);
      iVar2 = 0x40000000 - iVar2;
    }
    else {
      iVar2 = func_004905E0(fVar8 / fVar9);
    }
    local_30 = DAT_00366f88;
    *(int *)(param_1 + 0x58) = iVar2;
    local_2c = s_SE_PL_TornadeRod_FLY_WIND_00366f6c;
    func_004E9BEC(*piVar4,&local_30,0);
    *(undefined4 *)(param_1 + 0x150) = 0;
    uVar3 = (uint)*(byte *)(param_1 + 0x13d);
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = *(uint *)(param_1 + 0x34);
    }
    if (bVar5) {
      *(float *)(uVar3 + 4) = fVar10;
    }
    break;
  case 0x3e:
    iVar2 = func_002D55E8(param_1);
    if (iVar2 == 0) {
      if (*(float *)(*(int *)(param_1 + 0x30) + 4) <= *(float *)(param_1 + 0x14c) - DAT_00366f90) {
        *(undefined1 *)(param_1 + 0x13c) = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x618);
        uVar3 = *(uint *)(iVar2 + 0x30);
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        *(uint *)(iVar2 + 0x30) = uVar3;
      }
      func_002D5AB0(param_1);
      if (DAT_00366f94 < *(uint *)(*(int *)(param_1 + 0x34) + 4)) {
        *(undefined1 *)(param_1 + 0x13f) = 1;
      }
      bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
      if (((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
         (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
        if ((*(float *)(*(int *)(param_1 + 0x30) + 4) == *(float *)(param_1 + 0x154)) &&
           (10 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
          func_002D55D0(param_1,(uint)(fVar10 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
          *(undefined1 *)(param_1 + 0x13e) = 1;
          func_004EB5E8(*piVar4);
          iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x344);
          if (iVar2 != 0) {
            func_004A1B9C(&local_30,iVar2,(uint *)(s__Land_00366f9b + 1));
          }
        }
        else {
          *(undefined1 *)(*(int *)(param_1 + 0x4c) + 200) = 1;
        }
      }
      else {
        fVar8 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
        if ((int)ALBW_AS_U32(fVar8) < _DAT_00366f98) {
          if (*(char *)(param_1 + 0x13e) == '\0') {
            func_004EB5E8(*piVar4);
            iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x344);
            if (iVar2 != 0) {
              func_004A1B9C(&local_30,iVar2,(uint *)(s__Land_00366f9b + 1));
            }
          }
        }
        else {
          func_002D55D0(param_1,(uint)(fVar10 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
        }
        *(undefined1 *)(param_1 + 0x13e) = 1;
      }
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
      return 0;
    }
  }
  return 0;
}

