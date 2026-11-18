#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011529C(float *param_1,float *param_2);
extern int func_001153A0(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_0042E990(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4);
extern int func_0042EFB0(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 *param_5);
extern int func_00431F44(int param_1,int param_2,byte *param_3);
extern int func_0068B200(float *param_1,float *param_2);
extern undefined4 DAT_0043488c;
extern float DAT_00434890;
extern undefined4 *DAT_00434894;
extern int *DAT_00434898;
extern float DAT_0043489c;
extern int DAT_004348a0;
extern int DAT_004348a4;
extern undefined4 *DAT_004348a8;
extern char *DAT_004348ac;
extern float DAT_004349c8;

// USA 00434558 <- EU 00434538 (Ghidra, non-matching)
// GLOBAL DAT_0043488c undefined4
// GLOBAL DAT_00434890 float
// GLOBAL DAT_00434894 undefined4 *
// GLOBAL DAT_00434898 int *
// GLOBAL DAT_0043489c float
// GLOBAL DAT_004348a0 int
// GLOBAL DAT_004348a4 int
// GLOBAL DAT_004348a8 undefined4 *
// GLOBAL DAT_004348ac char *
// GLOBAL DAT_004349c8 float

int func_00434558(int param_1,int param_2,byte *param_3)

{
  ushort uVar1;
  int *piVar2;
  char *pcVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(int *)(albw_frame + 0x8))
  #define local_a4 (*(int *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(int *)(albw_frame + 0x14))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x20))
  #define iStack_8c (*(int *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define auStack_80 ((undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(int *)(albw_frame + 0x44))
  #define local_64 (*(float * *)(albw_frame + 0x4c))
  #define pfStack_60 (*(float * *)(albw_frame + 0x50))
  #define local_58 (*(char *)(albw_frame + 0x58))
  #define local_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x68))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(float *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define local_34 (*(float *)(albw_frame + 0x7c))
  #define local_30 (*(float *)(albw_frame + 0x80))
  #define local_2c (*(float *)(albw_frame + 0x84))
  fVar9 = DAT_00434890;
  uVar12 = DAT_0043488c;
  if ((*(byte *)(param_1 + 0x54c) & 8) != 0) {
    if ((*(byte *)(param_1 + 0x54c) & 2) == 0) {
      *(float *)(param_1 + 0x4b8) = DAT_00434890;
      *(float *)(param_1 + 0x4b4) = fVar9;
      func_001151CC((undefined4 *)(param_1 + 0x4e0),(undefined4 *)(param_1 + 0x4bc));
    }
    else {
      fVar8 = *(float *)(param_1 + 0x4b0);
      fVar10 = *(float *)(param_1 + 0x4a8);
      fVar11 = *(float *)(param_1 + 0x4ac);
      if (fVar11 <= fVar10) {
        if (fVar11 < fVar8) {
          fVar8 = fVar11;
        }
      }
      else if (fVar10 < fVar8) {
        fVar8 = fVar10;
      }
      *(float *)(param_1 + 0x4b8) = fVar8;
      *(float *)(param_1 + 0x4b4) = fVar9 / fVar8;
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4a8);
      *(undefined4 *)(param_1 + 0x4e4) = uVar12;
      *(undefined4 *)(param_1 + 0x4e8) = uVar12;
      *(undefined4 *)(param_1 + 0x4ec) = uVar12;
      *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4ac);
      *(undefined4 *)(param_1 + 0x4f4) = uVar12;
      *(undefined4 *)(param_1 + 0x4f8) = uVar12;
      *(undefined4 *)(param_1 + 0x4fc) = uVar12;
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
    iVar5 = func_00431F44(param_1,param_2,param_3);
    return iVar5;
  }
  func_00110D44(auStack_80,param_3,0x2a);
  local_50 = *DAT_00434894;
  uStack_4c = DAT_00434894[1];
  uStack_48 = DAT_00434894[2];
  if ((param_3[0x28] != 0) && (*(char *)(param_1 + 0x4a0) == '\0')) {
    pfVar4 = *(float **)(param_3 + 0x1c);
    fVar8 = *(float *)(param_1 + 0x49c) * *(float *)(param_1 + 0x49c);
    fVar9 = *pfVar4 - *(float *)(param_1 + 0x490);
    fVar10 = pfVar4[1] - *(float *)(param_1 + 0x494);
    fVar11 = pfVar4[2] - *(float *)(param_1 + 0x498);
    if ((fVar8 < fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) ||
       (pfVar4 = *(float **)(param_3 + 0x20), fVar9 = *pfVar4 - *(float *)(param_1 + 0x490),
       fVar11 = pfVar4[1] - *(float *)(param_1 + 0x494),
       fVar10 = pfVar4[2] - *(float *)(param_1 + 0x498),
       fVar8 < fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10)) {
      local_58 = '\0';
    }
  }
  local_54 = uVar12;
  func_00115C70(&local_ac,*(float **)(param_3 + 0x20),(float *)(param_1 + 4));
  func_00115CE4(&local_ac,(float *)(param_1 + 0x504),&local_ac);
  func_00115C70(&local_a0,*(float **)(param_3 + 0x1c),(float *)(param_1 + 4));
  func_00115CE4(&local_a0,(float *)(param_1 + 0x504),&local_a0);
  fVar9 = DAT_0043489c;
  piVar2 = DAT_00434898;
  pfStack_60 = &local_ac;
  local_64 = &local_a0;
  DAT_00434898[6] = (int)ALBW_AS_U32(local_ac);
  piVar2[7] = local_a8;
  piVar2[8] = local_a4;
  piVar2[9] = (int)ALBW_AS_U32(local_a0);
  piVar2[10] = local_9c;
  piVar2[0xb] = local_98;
  *(undefined1 *)((int)piVar2 + 0x6d) = 0;
  *(undefined1 *)(piVar2 + 0x1b) = 0;
  *(undefined1 *)((int)piVar2 + 0x6f) = 0;
  piVar2[0x18] = (int)ALBW_AS_U32(fVar9);
  *piVar2 = (int)auStack_80;
  piVar2[0xd] = param_1 + 0x4a4;
  piVar2[0xc] = param_2;
  func_00115C70((float *)(piVar2 + 0x12),local_64,pfStack_60);
  if (param_1 + 0x4a4 == 0) {
    piVar2[0xe] = *(int *)(DAT_004348a0 + 4);
  }
  else {
    piVar2[0xe] = (int)ALBW_AS_U32((*(float *)(DAT_004348a0 + 4) * *(float *)(param_1 + 0x4b4)));
  }
  local_90 = DAT_004348a8;
  local_88 = *(undefined4 *)(DAT_004348a4 + 0x10);
  uStack_84 = *(undefined4 *)(DAT_004348a4 + 0x14);
  iStack_8c = param_1;
  if (local_58 == '\0') {
    if ((ALBW_AS_F32(piVar2[6]) - ALBW_AS_F32(piVar2[9])) * (ALBW_AS_F32(piVar2[6]) - ALBW_AS_F32(piVar2[9])) +
        (ALBW_AS_F32(piVar2[7]) - ALBW_AS_F32(piVar2[10])) * (ALBW_AS_F32(piVar2[7]) - ALBW_AS_F32(piVar2[10])) +
        (ALBW_AS_F32(piVar2[8]) - ALBW_AS_F32(piVar2[0xb])) * (ALBW_AS_F32(piVar2[8]) - ALBW_AS_F32(piVar2[0xb])) <=
        *(float *)(*(int *)(param_1 + 0x58) + 0xe8)) {
      func_0042E990(param_1,(float *)(piVar2 + 6),local_6c,&local_90);
    }
    else {
      local_34 = DAT_004349c8;
      local_30 = DAT_004349c8;
      local_2c = DAT_004349c8;
      local_40 = fVar9;
      local_3c = fVar9;
      local_38 = fVar9;
      func_0068B200(&local_40,(float *)(piVar2 + 6));
      func_0068B200(&local_40,(float *)(piVar2 + 9));
      func_0042EFB0(param_1,&local_40,&local_34,local_6c,&local_90);
    }
  }
  else {
    piVar2[0x1a] = local_6c;
    pcVar3 = DAT_004348ac;
    puVar7 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
    uVar1 = *puVar7;
    while (uVar1 != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar7 * 0x10;
      *(int *)(param_1 + 0x70) = iVar5;
      uVar6 = (uint)*(ushort *)(iVar5 + 0xe);
      if ((piVar2[0x1a] & 1 << (uVar6 & 0x1f)) != 0) {
        uVar6 = (uVar6 & 0xb000) >> 0xc;
        if (*pcVar3 == '\0') {
          if (uVar6 != 8) goto LAB_004348b8;
        }
        else if (uVar6 != 9) {
LAB_004348b8:
          (*(code *)*local_90)(&local_90,param_1);
        }
      }
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7;
    }
  }
  return (int)*(char *)((int)piVar2 + 0x6d);
}

