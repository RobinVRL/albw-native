#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0018D524(int param_1);
extern int func_0018ECE8(int param_1,int param_2,int param_3);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_0052FE18(int param_1,undefined4 *param_2);
extern int func_0053F930(int param_1);
extern int func_0053FA18(int param_1);
extern int func_00540198(int param_1);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern undefined4 DAT_0018e9c4;
extern undefined4 DAT_0018e9c8;
extern float DAT_0018e9cc;
extern int *DAT_0018e9d0;
extern float *DAT_0018e9d4;
extern float DAT_0018e9d8;
extern float DAT_0018e9dc;
extern float DAT_0018e9e0;
extern int DAT_0018e9e4;
extern float DAT_0018e9e8;
extern float DAT_0018eaac;

// USA 0018E6CC <- EU 0018E6CC (Ghidra, non-matching)
// GLOBAL DAT_0018e9c4 undefined4
// GLOBAL DAT_0018e9c8 undefined4
// GLOBAL DAT_0018e9cc float
// GLOBAL DAT_0018e9d0 int *
// GLOBAL DAT_0018e9d4 float *
// GLOBAL DAT_0018e9d8 float
// GLOBAL DAT_0018e9dc float
// GLOBAL DAT_0018e9e0 float
// GLOBAL DAT_0018e9e4 int
// GLOBAL DAT_0018e9e8 float
// GLOBAL DAT_0018eaac float

undefined4 func_0018E6CC(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_84 (*(int *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define local_60 ((float *)(albw_frame + 0x50))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(float *)(albw_frame + 0x64))
  #define local_48 (*(float *)(albw_frame + 0x68))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x70))
  uVar13 = CONCAT44(DAT_0018e9c8,DAT_0018e9c4);
  fVar12 = DAT_0018e9cc;
  func_0052FE18(*(int *)(param_1 + 0x4fc),&local_a4);
  pfVar5 = (float *)(param_1 + 0x4cc);
  func_00115C54(pfVar5,pfVar5,&local_a4);
  pfVar6 = (float *)(param_1 + 0x4d8);
  func_00115C54(pfVar6,pfVar6,&local_a4);
  func_0018D524(param_1);
  piVar3 = DAT_0018e9d0;
  local_a4 = *DAT_0018e9d4;
  local_a0 = DAT_0018e9d4[1];
  local_9c = DAT_0018e9d4[2];
  if (*(int *)(param_1 + 0x518) < 10) {
    func_00115D88(&local_80,(float *)(param_1 + 0x50c),DAT_0018e9d8);
    local_a4 = local_80;
    local_a0 = local_7c;
    local_9c = local_78;
    func_00115C54(pfVar5,pfVar5,&local_a4);
    func_00115C54(pfVar6,pfVar6,&local_a4);
    func_0018D524(param_1);
    local_6c = local_a4;
    local_68 = fVar12;
    local_64 = fVar12;
    func_00115C54((float *)(param_1 + 0x4c0),(float *)(param_1 + 0x4c0),&local_6c);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 <= *(float *)(param_1 + 0x514)) << 0x1d;
    if (!SUB41(uVar1 >> 0x1d,0)) {
      local_9c = fVar12;
    }
    fVar9 = *(float *)(param_1 + 0x4ec);
    fVar10 = *(float *)(param_1 + 0x4f4);
    fVar11 = (float)VectorSignedToFloat(10 - *(int *)(param_1 + 0x518),(byte)(uVar1 >> 0x15) & 3);
    fVar11 = DAT_0018e9dc - DAT_0018e9dc / fVar11;
    local_a0 = fVar12;
    func_00115154(local_60,&local_4c,*(uint *)(param_1 + 1000));
    local_4c = local_4c * DAT_0018e9e0;
    uVar8 = *(undefined4 *)(param_1 + 0x4f0);
    *(float *)(param_1 + 0x4ec) =
         local_60[0] * DAT_0018e9e0 +
         (*(float *)(param_1 + 0x4ec) - local_60[0] * DAT_0018e9e0) * fVar11;
    *(float *)(param_1 + 0x4f0) = fVar12 + (*(float *)(param_1 + 0x4f0) - fVar12) * fVar11;
    local_4c = local_4c + (*(float *)(param_1 + 0x4f4) - local_4c) * fVar11;
    *(float *)(param_1 + 0x4f4) = local_4c;
    *(undefined4 *)(param_1 + 0x4f0) = uVar8;
    *(float *)(param_1 + 0x4c8) = (local_4c - fVar10) + *(float *)(param_1 + 0x4c8);
    local_a4 = local_a4 - (*(float *)(param_1 + 0x4ec) - fVar9);
    fVar9 = fVar12;
    func_00115C70(&local_7c,(float *)(param_1 + 0x4c0),pfVar5);
    if (DAT_0018e9e4 < (int)ALBW_AS_U32((local_7c * local_7c + local_74 * local_74))) {
      local_78 = fVar9;
      func_0068A3EC(&local_7c,DAT_0018e9e8);
      local_58 = *(float *)(param_1 + 0x4c0);
      uStack_54 = *(undefined4 *)(param_1 + 0x4c4);
      uStack_50 = *(undefined4 *)(param_1 + 0x4c8);
      func_00115C54((float *)(param_1 + 0x4c0),pfVar5,&local_7c);
      func_00115C70(&local_48,(float *)(param_1 + 0x4c0),&local_58);
      local_94 = local_48;
      uStack_90 = uStack_44;
      uStack_8c = uStack_40;
      func_00115C54(&local_a4,&local_a4,&local_94);
    }
    local_84 = 0;
    func_003413DC(*piVar3,&local_a4,&local_84);
    *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + 1;
  }
  iVar7 = func_0053FA18(*piVar3);
  if (iVar7 == 0) {
    iVar7 = func_00540198(*piVar3);
    if (iVar7 == 0) {
      bVar4 = func_0053F930(*piVar3);
      if (bVar4) {
        return 0;
      }
      return func_0018ECE8(param_1,0,0);
    }
    if (*(char *)(param_1 + 0x4a0) != '\x06') {
      return 0;
    }
    func_00115154(&local_a4,&local_a0,*(uint *)(param_1 + 1000));
    fVar9 = DAT_0018eaac;
    *(float *)(param_1 + 0x3e0) = fVar12;
    fVar10 = local_a0 * fVar9;
    *(float *)(param_1 + 0x3dc) = local_a4 * fVar9;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x4a0);
    if (cVar2 == '\0') goto LAB_0018ea60;
    if (cVar2 == '\x01') {
      if (*(char *)(param_1 + 0x55d) != '\0') {
        return 0;
      }
      if (1 < *(int *)(param_1 + 0x49c)) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x55d) = 1;
      return 0;
    }
    if (cVar2 != '\x06') {
      return 0;
    }
    func_00115154(&local_a4,&local_a0,*(uint *)(param_1 + 1000));
    if (*(char *)(param_1 + 0x55e) == '\0') {
      uVar13 = uVar13 >> 0x20;
    }
    fVar10 = local_a0 * ALBW_AS_F32(uVar13);
    *(float *)(param_1 + 0x3dc) = local_a4 * ALBW_AS_F32(uVar13);
    *(float *)(param_1 + 0x3e0) = fVar12;
  }
  *(float *)(param_1 + 0x3e4) = fVar10;
LAB_0018ea60:
  func_00659688((undefined4 *)(param_1 + 0x49c),1);
  *(undefined1 *)(param_1 + 0x55d) = 1;
  return 0;
}

