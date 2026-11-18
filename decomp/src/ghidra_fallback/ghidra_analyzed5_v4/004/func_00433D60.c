#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011529C(float *param_1,float *param_2);
extern int func_001153A0(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0042E4CC(int param_1,undefined4 param_2,undefined4 *param_3);
extern int func_0042E990(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4);
extern int func_0042EFB0(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 *param_5);
extern float DAT_00434100;
extern undefined4 DAT_00434104;
extern int DAT_00434108;
extern undefined4 DAT_0043410c;
extern int DAT_00434110;
extern undefined4 *DAT_00434114;
extern undefined4 *DAT_00434118;
extern char *DAT_0043411c;
extern float *DAT_00434208;

// USA 00433D60 <- EU 00433D40 (Ghidra, non-matching)
// GLOBAL DAT_00434100 float
// GLOBAL DAT_00434104 undefined4
// GLOBAL DAT_00434108 int
// GLOBAL DAT_0043410c undefined4
// GLOBAL DAT_00434110 int
// GLOBAL DAT_00434114 undefined4 *
// GLOBAL DAT_00434118 undefined4 *
// GLOBAL DAT_0043411c char *
// GLOBAL DAT_00434208 float *

int func_00433D60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(float * *)(albw_frame + 0x24))
  #define local_b8 (*(float * *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ac (*(float *)(albw_frame + 0x34))
  #define fStack_a8 (*(float *)(albw_frame + 0x38))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(float *)(albw_frame + 0x44))
  #define local_98 (*(undefined4 *)(albw_frame + 0x48))
  #define local_94 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x50))
  #define fStack_8c (*(float *)(albw_frame + 0x54))
  #define fStack_88 (*(float *)(albw_frame + 0x58))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 ((float *)(albw_frame + 0x70))
  #define afStack_64 ((float *)(albw_frame + 0x7c))
  #define local_58 (*(float *)(albw_frame + 0x88))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x90))
  #define local_4c (*(float *)(albw_frame + 0x94))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x98))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define afStack_40 ((float *)(albw_frame + 0xa0))
  #define afStack_34 ((float *)(albw_frame + 0xac))
  fVar10 = DAT_00434100;
  if ((*(byte *)(param_1 + 0x54c) & 8) != 0) {
    if ((*(byte *)(param_1 + 0x54c) & 2) == 0) {
      *(float *)(param_1 + 0x4b8) = DAT_00434100;
      *(float *)(param_1 + 0x4b4) = fVar10;
      func_001151CC((undefined4 *)(param_1 + 0x4e0),(undefined4 *)(param_1 + 0x4bc));
    }
    else {
      fVar9 = *(float *)(param_1 + 0x4b0);
      fVar11 = *(float *)(param_1 + 0x4a8);
      fVar12 = *(float *)(param_1 + 0x4ac);
      if (fVar12 <= fVar11) {
        if (fVar12 < fVar9) {
          fVar9 = fVar12;
        }
      }
      else if (fVar11 < fVar9) {
        fVar9 = fVar11;
      }
      *(float *)(param_1 + 0x4b8) = fVar9;
      uVar2 = DAT_00434104;
      *(float *)(param_1 + 0x4b4) = fVar10 / fVar9;
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4a8);
      *(undefined4 *)(param_1 + 0x4e4) = uVar2;
      *(undefined4 *)(param_1 + 0x4e8) = uVar2;
      *(undefined4 *)(param_1 + 0x4ec) = uVar2;
      *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4ac);
      *(undefined4 *)(param_1 + 0x4f4) = uVar2;
      *(undefined4 *)(param_1 + 0x4f8) = uVar2;
      *(undefined4 *)(param_1 + 0x4fc) = uVar2;
      *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x4b0);
      if ((*(byte *)(param_1 + 0x54c) & 4) != 0) {
        func_0011549C((float *)(param_1 + 0x4e0),(float *)(param_1 + 0x4bc),
                      (float *)(param_1 + 0x4e0));
      }
    }
    if ((*(byte *)(param_1 + 0x54c) & 6) != 0) {
      func_0011529C((float *)(param_1 + 0x504),(float *)(param_1 + 0x4e0));
      func_001153A0((float *)(param_1 + 0x528),(float *)(param_1 + 0x4e0));
    }
    *(byte *)(param_1 + 0x54c) = *(byte *)(param_1 + 0x54c) & 0xf7;
  }
  if ((*(byte *)(param_1 + 0x54c) & 6) == 0) {
    iVar4 = func_0042E4CC(param_1,param_2,param_3);
    return iVar4;
  }
  local_d8 = *param_3;
  uStack_d4 = param_3[1];
  uStack_d0 = param_3[2];
  uStack_cc = param_3[3];
  uStack_c8 = param_3[4];
  local_c4 = param_3[5];
  uStack_c0 = param_3[6];
  local_bc = (float *)param_3[7];
  local_b8 = (float *)param_3[8];
  local_b4 = param_3[9];
  local_b0 = param_3[10];
  local_ac = ALBW_AS_F32(param_3[0xb]);
  fStack_a8 = ALBW_AS_F32(param_3[0xc]);
  uStack_a4 = param_3[0xd];
  uStack_a0 = param_3[0xe];
  if (((*(char *)(param_3 + 10) != '\0') && (*(char *)(param_1 + 0x4a0) == '\0')) &&
     (func_00115C54((float *)&local_80,(float *)param_3[7],(float *)(param_3 + 0xc)),
     fVar10 = *(float *)(param_1 + 0x490) - ALBW_AS_F32(local_80),
     fVar12 = *(float *)(param_1 + 0x494) - local_7c, fVar9 = *(float *)(param_1 + 0x498) - local_78
     , fVar11 = *(float *)(param_1 + 0x49c) - ALBW_AS_F32(param_3[0xb]),
     fVar11 * fVar11 < fVar10 * fVar10 + fVar12 * fVar12 + fVar9 * fVar9)) {
    local_b0 = local_b0 & 0xffffff00;
  }
  pfVar8 = (float *)(param_1 + 0x504);
  func_00115CE4(&fStack_a8,pfVar8,(float *)(param_3 + 0xc));
  local_ac = ALBW_AS_F32(param_3[0xb]) * *(float *)(param_1 + 0x4b4);
  func_00115C70(local_70,(float *)param_3[8],(float *)(param_1 + 4));
  func_00115CE4(local_70,pfVar8,local_70);
  func_00115C54(local_70,local_70,&fStack_a8);
  func_00115C70(&local_9c,(float *)param_3[7],(float *)(param_1 + 4));
  func_00115CE4(&local_9c,pfVar8,&local_9c);
  func_00115C54(&local_9c,&local_9c,&fStack_a8);
  func_00115C70((float *)&local_80,(float *)(param_1 + 4),(float *)(param_1 + 0x10));
  local_90 = local_80;
  fStack_8c = local_7c;
  fStack_88 = local_78;
  func_00115CE4(afStack_64,pfVar8,(float *)&local_90);
  func_00115C54(local_70,local_70,afStack_64);
  uVar2 = DAT_0043410c;
  iVar4 = DAT_00434108;
  local_bc = &local_9c;
  local_b8 = local_70;
  *(float *)(DAT_00434108 + 8) = local_9c;
  iVar5 = DAT_00434110;
  *(undefined4 *)(iVar4 + 0xc) = local_98;
  *(float *)(iVar4 + 0x14) = local_ac;
  *(undefined4 *)(iVar4 + 0x10) = local_94;
  *(undefined1 *)(iVar4 + 0x6d) = 0;
  *(undefined1 *)(iVar4 + 0x6c) = 0;
  *(undefined1 *)(iVar4 + 0x6f) = 0;
  *(undefined4 *)(iVar4 + 0x60) = uVar2;
  *(int *)(iVar4 + 0x34) = param_1 + 0x4a4;
  *(undefined4 **)(iVar4 + 4) = &local_d8;
  *(undefined4 *)(iVar4 + 0x30) = param_2;
  if (param_1 + 0x4a4 == 0) {
    *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar5 + 4);
  }
  else {
    *(float *)(iVar4 + 0x38) = *(float *)(iVar5 + 4) * *(float *)(param_1 + 0x4b4);
  }
  func_00115C70((float *)(iVar4 + 0x48),local_bc,local_b8);
  *(undefined4 *)(iVar4 + 100) = local_b4;
  fVar10 = *local_b8;
  fVar9 = local_b8[1];
  *(float *)(iVar4 + 0x5c) = local_b8[2];
  *(float *)(iVar4 + 0x54) = fVar10;
  *(float *)(iVar4 + 0x58) = fVar9;
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_80 = DAT_00434118;
  if ((*(undefined1 *)((char *)&local_b0 + 1)) == '\0') {
    local_78 = ALBW_AS_F32(DAT_00434114[2]);
    uStack_74 = DAT_00434114[3];
  }
  else {
    local_78 = ALBW_AS_F32(*DAT_00434114);
    uStack_74 = DAT_00434114[1];
  }
  local_7c = ALBW_AS_F32(param_1);
  if ((char)local_b0 == '\0') {
    if (*(float *)(iVar4 + 0x14) <= *(float *)(*(int *)(param_1 + 0x5c) + 0x38)) {
      func_0042E990(param_1,(float *)(iVar4 + 8),local_c4,&local_80);
    }
    else {
      func_00115D70(&local_58,DAT_00434208,*(float *)(iVar4 + 0x14));
      local_4c = local_58;
      uStack_48 = uStack_54;
      uStack_44 = uStack_50;
      func_00115C54(afStack_34,(float *)(iVar4 + 8),&local_4c);
      func_00115C70(afStack_40,(float *)(iVar4 + 8),&local_4c);
      func_0042EFB0(param_1,afStack_40,afStack_34,local_c4,&local_80);
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x68) = local_c4;
    pcVar3 = DAT_0043411c;
    puVar7 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
    uVar1 = *puVar7;
    while (uVar1 != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar7 * 0x10;
      *(int *)(param_1 + 0x70) = iVar5;
      uVar6 = (uint)*(ushort *)(iVar5 + 0xe);
      if ((*(uint *)(iVar4 + 0x68) & 1 << (uVar6 & 0x1f)) != 0) {
        uVar6 = (uVar6 & 0xb000) >> 0xc;
        if (*pcVar3 == '\0') {
          if (uVar6 != 8) goto LAB_00434128;
        }
        else if (uVar6 != 9) {
LAB_00434128:
          (*(code *)*local_80)(&local_80,param_1);
        }
      }
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7;
    }
  }
  return (int)*(char *)(iVar4 + 0x6d);
}

