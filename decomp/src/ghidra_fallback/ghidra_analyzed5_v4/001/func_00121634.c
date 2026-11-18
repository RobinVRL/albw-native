#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001215C0(int param_1);
extern int func_0013031C(int param_1);
extern int func_001E8C8C(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
extern int func_00351CB0(int param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00498514(int param_1,float fparam_0);
extern int func_004D84E8(float *param_1,float fparam_0);
extern int func_00520B48(int param_1);
extern int func_00554E8C(int param_1,undefined4 *param_2);
extern float DAT_00121988;
extern float DAT_0012198c;
extern int *DAT_00121990;
extern float DAT_00121994;
extern float DAT_00121998;
extern float DAT_0012199c;
extern float DAT_00121c1c;
extern int *DAT_00121c20;

// USA 00121634 <- EU 00121634 (Ghidra, non-matching)
// GLOBAL DAT_00121988 float
// GLOBAL DAT_0012198c float
// GLOBAL DAT_00121990 int *
// GLOBAL DAT_00121994 float
// GLOBAL DAT_00121998 float
// GLOBAL DAT_0012199c float
// GLOBAL DAT_00121c1c float
// GLOBAL DAT_00121c20 int *

void func_00121634(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 ((float *)(albw_frame + 0x40))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x58))
  uVar18 = *(undefined4 *)(param_1 + 0xdc);
  uVar15 = *(undefined4 *)(param_1 + 0xd4);
  uVar16 = CONCAT44(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd8));
  uVar17 = *(undefined8 *)(param_1 + 0xcc);
  func_00115C70(local_50,(float *)(param_1 + 0xd4),(float *)(param_1 + 200));
  func_001E8C8C(*(int *)(param_1 + 0x1c8),param_1 + 200,(undefined4 *)(param_1 + 0x1cc),param_2);
  func_00115C70(&local_5c,(float *)(param_1 + 0xd4),(float *)(param_1 + 200));
  fVar7 = DAT_00121988;
  uVar6 = in_fpscr & 0xfffffff | (uint)(local_5c == DAT_00121988) << 0x1e;
  bVar5 = false;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(local_54 == DAT_00121988) << 0x1e;
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  if (bVar5) {
    *(float *)(param_1 + 200) = *(float *)(param_1 + 0xd4) - local_50[0];
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xdc) - local_48;
  }
  else {
    local_58 = DAT_00121988;
    iVar2 = func_004D84E8(&local_5c,DAT_0012198c);
    if (iVar2 != 0) {
      *(float *)(param_1 + 200) = *(float *)(param_1 + 0xd4) - local_5c;
      *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xdc) - local_54;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x188);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = uVar18;
        *(undefined4 *)(param_1 + 0xd4) = uVar15;
        *(int *)(param_1 + 0xd8) = (int)uVar16;
      }
    }
    else {
      *(int *)(param_1 + 200) = (int)((ulonglong)uVar16 >> 0x20);
      *(int *)(param_1 + 0xcc) = (int)uVar17;
      *(int *)(param_1 + 0xd0) = (int)((ulonglong)uVar17 >> 0x20);
    }
  }
  if ((*(char *)(param_1 + 0x1ac) != '\0') && (iVar2 = func_00520B48(*DAT_00121990), iVar2 == 0)) {
    if (*(int *)(param_1 + 0x10c) < 0) {
      *(undefined4 *)(param_1 + 0x10c) = 0xf;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0xf;
    }
    *(undefined1 *)(param_1 + 0x1ac) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10c);
  if (iVar2 < 0) {
    func_001215C0(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x108) == 0) {
      iVar2 = *(int *)(param_1 + 0x110) - iVar2;
      fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x110) + 1,(byte)(uVar6 >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(uVar6 >> 0x15) & 3);
      fVar8 = fVar8 * (DAT_00121994 / fVar10);
      fVar11 = fVar8 * fVar8 - fVar8;
      fVar9 = fVar11 * fVar8;
      fVar8 = fVar8 * fVar8 - fVar9 * DAT_0012199c;
      fVar11 = (DAT_00121998 - fVar8 * DAT_00121998) + fVar8 * fVar7 + (fVar9 - fVar11) * fVar7 +
               fVar9 * fVar7;
      fVar8 = (float)VectorSignedToFloat(iVar2 + 1,(byte)(uVar6 >> 0x15) & 3);
      fVar8 = fVar8 * (DAT_00121994 / fVar10);
      fVar9 = fVar8 * fVar8 - fVar8;
      fVar10 = fVar9 * fVar8;
      fVar8 = fVar8 * fVar8 - fVar10 * DAT_0012199c;
      fVar8 = (DAT_00121998 - fVar8 * DAT_00121998) + fVar8 * fVar7 + (fVar10 - fVar9) * fVar7 +
              fVar10 * fVar7;
      if (fVar8 < fVar11) {
        local_8c = *(float *)(param_1 + 200);
        local_88 = *(float *)(param_1 + 0xcc);
        local_84 = *(float *)(param_1 + 0xd0);
        pfVar4 = (float *)(param_1 + 0x1b0);
        fVar11 = (fVar11 - fVar8) / fVar11;
        func_00115C70(&local_68,&local_8c,pfVar4);
        local_74 = local_68;
        uStack_70 = uStack_64;
        uStack_6c = uStack_60;
        func_00115D70(&local_68,&local_74,fVar11);
        local_80 = local_68;
        uStack_7c = uStack_64;
        uStack_78 = uStack_60;
        func_00115C54(pfVar4,pfVar4,&local_80);
        local_8c = *(float *)(param_1 + 0xd4);
        local_88 = *(float *)(param_1 + 0xd8);
        local_84 = *(float *)(param_1 + 0xdc);
        pfVar4 = (float *)(param_1 + 0x1bc);
        func_00115C70(&local_40,&local_8c,pfVar4);
        local_74 = local_40;
        uStack_70 = uStack_3c;
        uStack_6c = uStack_38;
        func_00115D70(&local_68,&local_74,fVar11);
        local_80 = local_68;
        uStack_7c = uStack_64;
        uStack_78 = uStack_60;
        func_00115C54(pfVar4,pfVar4,&local_80);
        fVar9 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1bc);
        fVar8 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1c0);
        fVar10 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1c4);
        *(float *)(param_1 + 0xe4) = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
        *(float *)(param_1 + 0xe8) =
             *(float *)(param_1 + 0xe8) +
             (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xe8)) * fVar11;
        *(float *)(param_1 + 0x198) =
             *(float *)(param_1 + 0x198) +
             (*(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x198)) * fVar11;
        *(float *)(param_1 + 0x19c) =
             *(float *)(param_1 + 0x19c) +
             (*(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x19c)) * fVar11;
      }
    }
    else if (*(int *)(param_1 + 0x108) == 1) {
      fVar8 = DAT_00121994;
      if (*(int *)(param_1 + 0x110) != 0) {
        fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(uVar6 >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x110),(byte)(uVar6 >> 0x15) & 3);
        fVar8 = DAT_00121994 - fVar8 / fVar9;
      }
      fVar12 = *(float *)(param_1 + 0xf8) +
               (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xf8)) * fVar8;
      fVar9 = *(float *)(param_1 + 0xfc) +
              (*(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xfc)) * fVar8;
      fVar13 = *(float *)(param_1 + 0x100) +
               (*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0x100)) * fVar8;
      *(float *)(param_1 + 0x1bc) = fVar12;
      *(float *)(param_1 + 0x1c0) = fVar9;
      *(float *)(param_1 + 0x1c4) = fVar13;
      fVar11 = *(float *)(param_1 + 0xec) +
               (*(float *)(param_1 + 200) - *(float *)(param_1 + 0xec)) * fVar8;
      fVar14 = *(float *)(param_1 + 0xf0) +
               (*(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xf0)) * fVar8;
      fVar10 = *(float *)(param_1 + 0xf4) +
               (*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xf4)) * fVar8;
      *(float *)(param_1 + 0x1b0) = fVar11;
      fVar11 = fVar11 - fVar12;
      *(float *)(param_1 + 0x1b4) = fVar14;
      fVar14 = fVar14 - fVar9;
      *(float *)(param_1 + 0x1b8) = fVar10;
      fVar10 = fVar10 - fVar13;
      *(float *)(param_1 + 0xe4) = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar10 * fVar10);
      *(float *)(param_1 + 0xe8) =
           *(float *)(param_1 + 0x104) +
           (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0x104)) * fVar8;
      *(float *)(param_1 + 0x198) =
           *(float *)(param_1 + 0x18c) +
           (*(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x18c)) * fVar8;
      *(float *)(param_1 + 0x19c) =
           *(float *)(param_1 + 400) +
           (*(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 400)) * fVar8;
    }
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
  }
  func_00115C70(&local_90,(float *)(param_1 + 0x1b0),(float *)(param_1 + 0x1bc));
  iVar2 = func_004904CC(local_90,local_88);
  *(int *)(param_1 + 0x1a8) = iVar2;
  iVar2 = func_004904CC(local_8c,SQRT(local_90 * local_90 + local_88 * local_88));
  *(int *)(param_1 + 0x1a4) = iVar2;
  func_00351CB0(*(int *)(param_1 + 0x184));
  if (*(char *)(*(int *)(param_1 + 0x184) + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x1c4);
  }
  else {
    func_00554E8C(*(int *)(param_1 + 0x184),&local_90);
    if (local_90 != fVar7) {
      func_00115154(&local_84,&local_80,*(uint *)(param_1 + 0x1a8));
      local_88 = -(local_90 * local_84);
      local_90 = local_90 * local_80;
    }
    func_00115C54((float *)(param_1 + 0x16c),(float *)(param_1 + 0x1b0),&local_90);
    func_00115C54((float *)(param_1 + 0x178),(float *)(param_1 + 0x1bc),&local_90);
  }
  fVar7 = DAT_00121c1c;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x180);
  fVar7 = *(float *)(param_1 + 0xe8) * fVar7;
  if (*(float *)(param_1 + 0xac) != fVar7) {
    func_00498514(param_1 + 0x10,fVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x114) + 0x10))(param_1 + 0x114,param_1 + 0x118);
  puVar3 = (undefined4 *)func_0013031C(*DAT_00121c20);
  *puVar3 = *(undefined4 *)(param_1 + 0x198);
  puVar3[1] = *(undefined4 *)(param_1 + 0x19c);
  *(undefined1 *)(puVar3 + 2) = 0;
  return;
}

