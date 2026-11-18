#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001E8A70(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_004A37EC(int *param_1,float *param_2,undefined4 *param_3,float fparam_0);
extern int func_004D8548(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4);
extern int func_004EB5E8(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_0053EDC8(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_0038ee00;
extern float DAT_0038ee04;
extern float DAT_0038ee08;
extern int *DAT_0038ee0c;
extern float DAT_0038ee10;
extern float DAT_0038ee14;
extern int *DAT_0038ee18;
extern uint DAT_0038ee1c;
extern int *DAT_0038ee20;
extern int *DAT_0038ee24;
extern uint *DAT_0038ee28;
extern undefined4 *DAT_0038ee2c;
extern undefined4 DAT_0038ee30;
extern float DAT_0038efbc;
extern int *DAT_0038efc0;

// USA 0038EA34 <- EU 0038EA10 (Ghidra, non-matching)
// GLOBAL DAT_0038ee00 int *
// GLOBAL DAT_0038ee04 float
// GLOBAL DAT_0038ee08 float
// GLOBAL DAT_0038ee0c int *
// GLOBAL DAT_0038ee10 float
// GLOBAL DAT_0038ee14 float
// GLOBAL DAT_0038ee18 int *
// GLOBAL DAT_0038ee1c uint
// GLOBAL DAT_0038ee20 int *
// GLOBAL DAT_0038ee24 int *
// GLOBAL DAT_0038ee28 uint *
// GLOBAL DAT_0038ee2c undefined4 *
// GLOBAL DAT_0038ee30 undefined4
// GLOBAL DAT_0038efbc float
// GLOBAL DAT_0038efc0 int *

undefined4 func_0038EA34(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define fStack_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define fStack_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define fStack_34 (*(float *)(albw_frame + 0x3c))
  #define fStack_30 (*(float *)(albw_frame + 0x40))
  if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 5) {
    *(undefined1 *)(*DAT_0038ee00 + 0x2c1b) = 0;
  }
  fVar12 = DAT_0038ee08;
  fVar13 = DAT_0038ee04;
  if (param_2 == 0x67) {
    *(float *)(*(int *)(param_1 + 0x50) + 0x15c) = DAT_0038ee08;
    *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar12;
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) == 3) {
      func_001E8A70(*(int *)(*DAT_0038ee0c + 0x18));
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar12;
    func_004A37EC((int *)(param_1 + 0xa8),(float *)(param_1 + 0x7c),(undefined4 *)(param_1 + 0x88),
                  fVar13);
    func_00115D70(&local_6c,(float *)(param_1 + 0x7c),DAT_0038ee10);
    local_50 = local_6c;
    local_4c = local_68;
    fStack_48 = local_64;
    func_00115C54(&local_6c,(float *)(param_1 + 0x88),&local_50);
    iVar2 = func_0068C690((float *)(param_1 + 0x7c));
    fVar9 = DAT_0038ee14;
    func_0051D2CC(*(int **)(param_1 + 0x3c),iVar2 + -0x80000000,DAT_0038ee14);
    pfVar7 = *(float **)(param_1 + 0x30);
    func_00115C70(&local_38,&local_44,pfVar7);
    local_5c = local_38;
    fStack_58 = fStack_34;
    local_54 = fStack_30;
    func_00115D70(&local_38,&local_5c,fVar9);
    local_6c = local_38;
    local_68 = fStack_34;
    local_64 = fStack_30;
    func_00115C54(pfVar7,pfVar7,&local_6c);
    fVar9 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x3c);
    iVar2 = VectorFloatToUnsigned(fVar9,3);
    fVar9 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x3c);
    iVar10 = VectorFloatToUnsigned(fVar9 - fVar13,3);
    if (iVar2 == iVar10) {
      *(undefined2 *)(param_1 + 0x76) = 1;
      *(float *)(*(int *)(param_1 + 0x28) + 0x5a8) = fVar12;
      *(undefined1 *)(param_1 + 0x71) = 1;
    }
    iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x5f4);
    *(float *)(iVar2 + 0x3b4c) = -*(float *)(iVar2 + 0x3b4c);
    *(float *)(iVar2 + 0x3b50) = -*(float *)(iVar2 + 0x3b50);
    *(float *)(iVar2 + 0x3b54) = -*(float *)(iVar2 + 0x3b54);
    *(float *)(iVar2 + 0x3b64) = -*(float *)(iVar2 + 0x3b64);
    *(float *)(iVar2 + 0x3b68) = -*(float *)(iVar2 + 0x3b68);
    *(float *)(iVar2 + 0x3b6c) = -*(float *)(iVar2 + 0x3b6c);
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar12) goto LAB_0038ec80;
  }
  else {
    if (((param_2 != 0x68 && param_2 != 0x69) && param_2 != 0x6a) ||
       (fVar13 = DAT_0038ee08, fVar12 = DAT_0038ee04, iVar2 = func_002D55E8(param_1), iVar2 != 0)) {
      return 0;
    }
    uVar3 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x44);
    uVar4 = uVar3;
    if (uVar3 < 0x10) {
      uVar4 = *(uint *)(param_1 + 0x34);
    }
    if (uVar3 < 0x10) {
      *(float *)(uVar4 + 4) = fVar13;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if ((((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
        (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) && (-1 < *(int *)(param_1 + 0xb0))) {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
    iVar2 = func_0068C690((float *)(param_1 + 0x7c));
    piVar6 = *(int **)(param_1 + 0x3c);
    *piVar6 = iVar2;
    if (*(char *)(param_1 + 0x72) == '\0') {
      iVar2 = *(int *)(param_1 + 0x4c);
      fVar11 = func_0053EE30(iVar2 + 0x5c);
      piVar6 = DAT_0038ee18;
      fVar9 = fVar12;
      if ((int)ALBW_AS_U32(fVar11) <= (int)DAT_0038ee18) {
        fVar9 = fVar13;
      }
      *(float *)(iVar2 + 0x100) = fVar9;
    }
    iVar2 = *(int *)(param_1 + 0x50);
    piVar8 = *(int **)(param_1 + 0x3c);
    uVar14 = func_00114608(DAT_0038ee1c,(uint)piVar6);
    uVar4 = (int)uVar14 + *piVar8;
    bVar1 = (byte)(uVar4 >> 0x1d);
    if (uVar4 >> 0x1d != 0) {
      bVar1 = 1;
    }
    *(byte *)(iVar2 + 0x166) = bVar1;
    piVar6 = DAT_0038ee20;
    iVar2 = func_0052FBA0(*DAT_0038ee20 + 0x3dbbc,*(uint *)(param_1 + 0x94));
    if ((iVar2 != 0) && (iVar2 = func_00588BE4(iVar2), iVar2 == *DAT_0038ee24)) {
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x538) = *(undefined4 *)(param_1 + 0x94);
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x10) {
      puVar5 = (undefined4 *)func_0052FBA0(*piVar6 + 0x3dbbc,*(uint *)(param_1 + 0x94));
      if (((*DAT_0038ee28 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0038ee28), iVar2 != 0)) {
        *DAT_0038ee2c = DAT_0038ee30;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar2 = (**(code **)*puVar5)(puVar5,DAT_0038ee2c), iVar2 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        local_6c = fVar13;
        local_68 = fVar13;
        local_64 = fVar13;
        func_00520F54((int)puVar5,&local_6c,*(undefined4 *)(param_1 + 0x30));
        func_00115C54(*(float **)(param_1 + 0x30),*(float **)(param_1 + 0x30),&local_6c);
        func_00115C54((float *)(param_1 + 0xc0),(float *)(param_1 + 0xc0),&local_6c);
      }
    }
    fVar11 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x44),
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar11 * DAT_0038efbc;
    if (0x3f800000 < (int)ALBW_AS_U32((fVar11 * DAT_0038efbc))) {
      fVar9 = fVar12;
    }
    local_54 = fVar13;
    local_50 = fVar13;
    local_4c = fVar13;
    func_004D8548(&local_6c,&local_54,(float *)(param_1 + 0xc0),fVar9,fVar13,fVar13,fVar12,fVar13);
    pfVar7 = *(float **)(param_1 + 0x30);
    func_00115C70(&local_44,&local_6c,(float *)(param_1 + 0xb4));
    local_60 = local_44;
    local_5c = local_40;
    fStack_58 = local_3c;
    func_00115C54(pfVar7,pfVar7,&local_60);
    *(float *)(param_1 + 0xb4) = local_6c;
    *(float *)(param_1 + 0xb8) = local_68;
    *(float *)(param_1 + 0xbc) = local_64;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if ((((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
        (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) && (0x1e < *(int *)(param_1 + 0xb0)))
    {
      func_004EB5E8(*DAT_0038efc0);
      *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    }
    if ((fVar13 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) &&
       (0x19 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
      func_002D55D0(param_1,1);
    }
    iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar2 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar13) {
LAB_0038ec80:
      uVar4 = 0;
      goto LAB_0038ec84;
    }
  }
  uVar4 = 1;
LAB_0038ec84:
  return func_002D55D0(param_1,uVar4);
}

