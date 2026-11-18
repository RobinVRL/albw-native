#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00552C88(int param_1);
extern int func_00687EA0(undefined4 *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_002f5674;
extern float DAT_002f5678;
extern float DAT_002f567c;
extern float DAT_002f5680;
extern float DAT_002f5684;
extern float DAT_002f5688;
extern float DAT_002f568c;
extern float DAT_002f5690;
extern int DAT_002f5694;
extern int DAT_002f5698;
extern float DAT_002f569c;
extern float DAT_002f56a0;
extern float DAT_002f56a4;
extern float DAT_002f56a8;
extern int DAT_002f56ac;
extern float DAT_002f56b0;
extern float DAT_002f56b4;
extern undefined4 DAT_002f5834;
extern float DAT_002f5838;

// USA 002F5304 <- EU 002F52E0 (Ghidra, non-matching)
// GLOBAL DAT_002f5674 int *
// GLOBAL DAT_002f5678 float
// GLOBAL DAT_002f567c float
// GLOBAL DAT_002f5680 float
// GLOBAL DAT_002f5684 float
// GLOBAL DAT_002f5688 float
// GLOBAL DAT_002f568c float
// GLOBAL DAT_002f5690 float
// GLOBAL DAT_002f5694 int
// GLOBAL DAT_002f5698 int
// GLOBAL DAT_002f569c float
// GLOBAL DAT_002f56a0 float
// GLOBAL DAT_002f56a4 float
// GLOBAL DAT_002f56a8 float
// GLOBAL DAT_002f56ac int
// GLOBAL DAT_002f56b0 float
// GLOBAL DAT_002f56b4 float
// GLOBAL DAT_002f5834 undefined4
// GLOBAL DAT_002f5838 float

void func_002F5304(int param_1,int param_2,float *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint extraout_r1;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fparam_4;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define fStack_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(int * *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define fStack_5c (*(float *)(albw_frame + 0x34))
  #define fStack_58 (*(float *)(albw_frame + 0x38))
  #define afStack_54 ((float *)(albw_frame + 0x3c))
  if (param_2 == 0 || param_3 == (float *)0x0) {
    return;
  }
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_002f5674 + 0x3dbbc,*(uint *)(param_1 + 0xca8));
  puVar3 = func_00687EA0(puVar3);
  local_80 = (int *)(param_1 + 0xc2c);
  pfVar11 = (float *)(param_1 + 0xc4c);
  if ((puVar3 == (undefined4 *)0x0) || (*(char *)(param_1 + 0x8cc) != '\x1d')) {
    fVar9 = DAT_002f5678;
    func_00115C70(&local_7c,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
    iVar4 = func_0068C690(&local_7c);
    switch(*(undefined4 *)(param_1 + 0xc28)) {
    case 0:
    case 1:
    case 2:
    case 3:
      *(undefined4 *)(param_1 + 0xc28) = 4;
      uVar2 = DAT_002f5834;
      *(undefined4 *)(param_1 + 0xc44) = 0x3c;
      *(undefined4 *)(param_1 + 0xc48) = uVar2;
      *(undefined4 *)(param_1 + 0xc40) = 0;
      break;
    case 4:
      if (*(uint *)(param_1 + 0xc40) < *(uint *)(param_1 + 0xc44)) {
        iVar7 = *(uint *)(param_1 + 0xc40) + 1;
        iVar5 = *(uint *)(param_1 + 0xc44) - iVar7;
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        *(int *)(param_1 + 0xc40) = iVar7;
        local_70 = *(float *)(param_1 + 0x3d0);
        local_6c = *(undefined4 *)(param_1 + 0x3d4);
        uStack_68 = *(undefined4 *)(param_1 + 0x3d8);
        fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar9 / fVar10;
        func_00115C70(&local_60,&local_70,pfVar11);
        local_7c = local_60;
        local_78 = fStack_5c;
        local_74 = fStack_58;
        func_00115D70(&local_64,&local_7c,fVar10);
        local_8c = local_64;
        local_88 = local_60;
        fStack_84 = fStack_5c;
        func_00115C54(pfVar11,pfVar11,&local_8c);
        iVar5 = *(int *)(param_1 + 0xc44) - *(int *)(param_1 + 0xc40);
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = *(float *)(param_1 + 0xc38);
        *(float *)(param_1 + 0xc38) = fVar10 + (DAT_002f5838 - fVar10) * (fVar9 / fVar12);
        func_0051D39C(local_80,iVar4 + -0x80000000,
                      *(int *)(param_1 + 0xc44) - *(int *)(param_1 + 0xc40));
      }
      else {
        *pfVar11 = *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0xc50) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0xc54) = *(undefined4 *)(param_1 + 0x3d8);
      }
    }
    fVar9 = *(float *)(param_1 + 0xc50);
    fVar10 = *(float *)(param_1 + 0xc54);
    *param_3 = *(float *)(param_1 + 0xc4c);
    param_3[1] = fVar9;
    param_3[2] = fVar10;
    func_00115C54(param_3,param_3,(float *)(param_1 + 0xc58));
    func_00115C70(afStack_54,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
    func_0068C690(afStack_54);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc2c);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc38);
    return;
  }
  local_78 = ALBW_AS_F32(puVar3[0xf4]);
  local_74 = ALBW_AS_F32(puVar3[0xf5]);
  local_70 = ALBW_AS_F32(puVar3[0xf6]);
  fVar10 = DAT_002f5678;
  fVar12 = func_00552C88(puVar3);
  func_00115C70(&local_64,(float *)(param_1 + 0xe30),&local_78);
  local_88 = ALBW_AS_F32(func_0068C690(&local_64));
  func_00115C70(&fStack_58,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
  iVar5 = func_0068C690(&fStack_58);
  pfVar6 = (float *)func_00520FC0();
  func_00115C70(afStack_54,pfVar6,(float *)(param_1 + 0xe30));
  iVar7 = func_0068C690(afStack_54);
  iVar4 = DAT_002f5698;
  fVar9 = DAT_002f568c;
  uVar8 = iVar7 + 0x80000000;
  fVar13 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(ALBW_AS_U32(local_88),(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_002f5684 <= fVar12) << 0x1d;
  fVar13 = fVar13 * DAT_002f567c;
  if ((int)uVar8 < 0) {
    fVar13 = fVar13 - DAT_002f5680;
  }
  if ((int)ALBW_AS_U32(local_88) < 0) {
    fVar14 = fVar14 * DAT_002f567c - DAT_002f5680;
  }
  else {
    fVar14 = fVar14 * DAT_002f567c;
  }
  fVar12 = (float)VectorUnsignedToFloat(iVar5 + -0x80000000,(byte)(uVar1 >> 0x15) & 3);
  if (iVar5 + -0x80000000 < 0) {
    fVar12 = fVar12 * DAT_002f567c - DAT_002f5680;
  }
  else {
    fVar12 = fVar12 * DAT_002f567c;
  }
  if (SUB41(uVar1 >> 0x1d,0)) {
    if (fVar13 < fVar14) {
      fVar14 = fVar14 - DAT_002f5680;
    }
    if (fVar13 < fVar12) {
      fVar12 = fVar12 - DAT_002f5680;
    }
  }
  else {
    if (fVar14 < fVar13) {
      fVar14 = fVar14 + DAT_002f5680;
    }
    if (fVar12 < fVar13) {
      fVar12 = fVar12 + DAT_002f5680;
    }
  }
  iVar5 = *(int *)(param_1 + 0xc28);
  fVar15 = (fVar14 - fVar13) / (fVar12 - fVar13);
  if (iVar5 == 0) {
    *(uint *)(param_1 + 0xc30) = uVar8;
    *(uint *)(param_1 + 0xc2c) = uVar8;
    *(undefined4 *)(param_1 + 0xc38) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(param_2 + 0xc);
    *(int *)(param_1 + 0xc28) = 1;
    goto LAB_002f5618;
  }
  if (iVar5 == 1) {
    fVar12 = (fVar10 * (fVar15 - DAT_002f5684)) / DAT_002f5690 + DAT_002f5684;
    fVar9 = DAT_002f5684;
    fVar10 = DAT_002f568c;
    uVar16 = func_00114608((uint)ALBW_AS_U32(((fVar13 + (fVar14 - fVar13) * fVar12) * DAT_002f5688)),uVar8);
    *(int *)(param_1 + 0xc30) = (int)uVar16;
    fVar9 = func_003E19E8(*(float *)(param_1 + 0xc3c),fVar9,fVar10,fVar9,fVar12);
    iVar4 = DAT_002f5694;
    *(float *)(param_1 + 0xc38) = fVar9;
    if ((int)ALBW_AS_U32(fVar15) <= iVar4) goto LAB_002f5618;
    iVar4 = *(int *)(param_1 + 0xc28) + 1;
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        fparam_4 = (fVar10 * (fVar15 - DAT_002f569c)) / DAT_002f56a0 + DAT_002f5684;
        fVar13 = DAT_002f568c;
        fVar9 = DAT_002f5688;
        fVar15 = DAT_002f5684;
        fVar10 = func_003E19E8(DAT_002f5684,DAT_002f5684,fVar10,DAT_002f56a4,fparam_4);
        uVar16 = func_00114608((uint)ALBW_AS_U32(((fVar14 + (fVar12 - fVar14) * fVar10) * fVar9)),extraout_r1);
        fVar9 = DAT_002f56a8;
        *(int *)(param_1 + 0xc30) = (int)uVar16;
        fVar9 = func_003E19E8(fVar13,fVar15,fVar9,fVar15,fparam_4);
        *(float *)(param_1 + 0xc38) = fVar9;
      }
      goto LAB_002f5618;
    }
    *(float *)(param_1 + 0xc30) = local_88;
    *(float *)(param_1 + 0xc38) = fVar9;
    if ((int)ALBW_AS_U32(fVar15) <= iVar4) goto LAB_002f5618;
    iVar4 = 3;
  }
  *(int *)(param_1 + 0xc28) = iVar4;
LAB_002f5618:
  func_0051D2F4(local_80,*(int *)(param_1 + 0xc30),0,DAT_002f56ac,DAT_002f56b0);
  fVar9 = DAT_002f56b4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc2c);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc38);
  fVar10 = *(float *)(param_1 + 0xe34);
  fVar12 = *(float *)(param_1 + 0xe38);
  *param_3 = *(float *)(param_1 + 0xe30);
  param_3[1] = fVar10;
  param_3[2] = fVar12;
  param_3[1] = local_74;
  func_004D8054(param_3,*(uint *)(param_1 + 0xc2c),fVar9);
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  *pfVar11 = *param_3;
  *(float *)(param_1 + 0xc50) = fVar9;
  *(float *)(param_1 + 0xc54) = fVar10;
  return;
}

