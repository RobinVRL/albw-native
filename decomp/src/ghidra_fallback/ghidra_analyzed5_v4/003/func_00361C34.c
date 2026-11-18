#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0052E860(int param_1);
extern int func_0052EEA4(int param_1);
extern int func_0053ECB4(int param_1);
extern int func_0053ECF8(int param_1);
extern int func_0054012C(int param_1);
extern float DAT_00361f60;
extern float DAT_00361f64;
extern float DAT_00361f68;
extern float DAT_00361f6c;
extern float DAT_00361f70;
extern float DAT_00361f74;
extern undefined4 DAT_00361f78;
extern float DAT_00361f7c;

// USA 00361C34 <- EU 00361C10 (Ghidra, non-matching)
// GLOBAL DAT_00361f60 float
// GLOBAL DAT_00361f64 float
// GLOBAL DAT_00361f68 float
// GLOBAL DAT_00361f6c float
// GLOBAL DAT_00361f70 float
// GLOBAL DAT_00361f74 float
// GLOBAL DAT_00361f78 undefined4
// GLOBAL DAT_00361f7c float

void func_00361C34(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define fStack_4c (*(float *)(albw_frame + 0x24))
  #define fStack_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define fStack_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(float *)(albw_frame + 0x40))
  pfVar3 = *(float **)(param_1 + 0x14);
  bVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x5b0) != 0x3f800000;
  local_50 = *pfVar3;
  fStack_4c = pfVar3[1];
  fStack_48 = pfVar3[2];
  iVar1 = func_0053ECB4(*(int *)(*(int *)(param_1 + 0x10) + 0x600));
  local_44 = *(float *)(iVar1 + 0xc);
  local_40 = *(undefined4 *)(iVar1 + 0x1c);
  local_3c = *(undefined4 *)(iVar1 + 0x2c);
  fVar8 = DAT_00361f60;
  func_00115D70(&local_38,&local_50,DAT_00361f60);
  uVar9 = CONCAT44(DAT_00361f64,fVar8);
  local_68 = local_38;
  local_64 = fStack_34;
  local_60 = local_30;
  func_00115D70(&local_38,&local_44,DAT_00361f64);
  local_5c = local_38;
  local_58 = fStack_34;
  local_54 = local_30;
  func_00115C54(&local_38,&local_68,&local_5c);
  fVar10 = *(float *)(*(int *)(param_1 + 0x14) + 4) + DAT_00361f68;
  fVar8 = DAT_00361f68;
  fVar7 = func_0052E860(*(undefined4 *)(param_1 + 0x10));
  *(float *)(param_1 + 0x74) = fVar7 * fVar8;
  *(float *)(param_1 + 0x20) = local_38;
  *(float *)(param_1 + 0x24) = fVar10;
  *(float *)(param_1 + 0x28) = local_30;
  if (*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0x614) + 0x42) == 0x42) {
    iVar1 = func_0053ECF8(*(int *)(*(int *)(param_1 + 0x10) + 0x600));
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar5 = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 0x28) = uVar5;
  }
  if (*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0x614) + 0x42) == 0x46) {
    local_68 = ALBW_AS_F32(((ulonglong)uVar9 >> 0x20));
    local_64 = fVar8;
    local_60 = local_68;
    func_00115C54(&local_5c,*(float **)(param_1 + 0x14),&local_68);
    *(float *)(param_1 + 0x20) = local_5c;
    *(float *)(param_1 + 0x24) = local_58;
    *(float *)(param_1 + 0x28) = local_54;
  }
  iVar1 = func_0053ECB4(*(int *)(*(int *)(param_1 + 0x10) + 0x600));
  local_68 = *(float *)(iVar1 + 0xc);
  local_64 = *(float *)(iVar1 + 0x1c);
  local_60 = *(float *)(iVar1 + 0x2c);
  local_5c = ALBW_AS_F32(((ulonglong)uVar9 >> 0x20));
  local_58 = fVar8;
  local_54 = local_5c;
  func_00115C54(&local_68,&local_68,&local_5c);
  fVar8 = DAT_00361f6c;
  *(float *)(param_1 + 0x7c) = local_68;
  *(float *)(param_1 + 0x80) = local_64;
  *(float *)(param_1 + 0x84) = local_60;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  fVar7 = ALBW_AS_F32(puVar2[1]);
  uVar4 = puVar2[2];
  *(undefined4 *)(param_1 + 0xd8) = *puVar2;
  *(float *)(param_1 + 0xdc) = fVar7 + fVar8;
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  func_004D8054((float *)(param_1 + 0xd8),**(uint **)(param_1 + 0x18),fVar8);
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  fVar8 = ALBW_AS_F32(puVar2[1]);
  uVar4 = puVar2[2];
  *(undefined4 *)(param_1 + 0x134) = *puVar2;
  *(float *)(param_1 + 0x138) = fVar8 + ALBW_AS_F32(uVar9);
  *(undefined4 *)(param_1 + 0x13c) = uVar4;
  iVar1 = func_0053ECF8(*(int *)(*(int *)(param_1 + 0x10) + 0x600));
  local_68 = *(float *)(iVar1 + 0xc);
  local_64 = *(float *)(iVar1 + 0x1c);
  local_60 = *(float *)(iVar1 + 0x2c);
  func_004D8054(&local_68,**(uint **)(param_1 + 0x18),DAT_00361f70);
  fVar8 = DAT_00361f74;
  local_64 = *(float *)(*(int *)(param_1 + 0x14) + 4) + DAT_00361f74;
  *(float *)(param_1 + 400) = local_68;
  *(float *)(param_1 + 0x194) = local_64;
  *(float *)(param_1 + 0x198) = local_60;
  func_0052EEA4(*(int *)(param_1 + 0x10));
  uVar4 = DAT_00361f78;
  *(undefined4 *)(param_1 + 0x1e8) = DAT_00361f78;
  *(int *)(param_1 + 0x1e4) = (int)uVar9;
  *(int *)(param_1 + 0x1ec) = (int)uVar9;
  if (bVar6) {
    fVar7 = *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x604) + 0x54);
    if (fVar7 <= ALBW_AS_F32(((ulonglong)uVar9 >> 0x20))) {
      fVar7 = -fVar7;
    }
    func_004D80A4(&local_68,**(uint **)(param_1 + 0x18),fVar7 * DAT_00361f7c);
    local_64 = ALBW_AS_F32(((ulonglong)uVar9 >> 0x20));
    func_00115C54(&local_5c,*(float **)(param_1 + 0x14),&local_68);
    *(float *)(param_1 + 0x1fc) = local_5c;
    *(float *)(param_1 + 0x200) = local_58;
    *(float *)(param_1 + 0x204) = local_54;
    *(float *)(param_1 + 0x200) = local_58 + fVar8;
    *(int *)(param_1 + 0x250) = (int)uVar9;
    *(undefined4 *)(param_1 + 0x254) = uVar4;
    *(int *)(param_1 + 600) = (int)uVar9;
  }
  func_004356B4((int *)(param_1 + 0x1c));
  func_004356B4((int *)(param_1 + 0x78));
  func_004356B4((int *)(param_1 + 0xd4));
  func_004356B4((int *)(param_1 + 0x130));
  func_004356B4((int *)(param_1 + 0x18c));
  func_004356B4((int *)(param_1 + 0x1f8));
  uVar4 = func_0054012C(*(int *)(*(int *)(param_1 + 0x10) + 0x614));
  *(char *)(param_1 + 0x2c5) = (char)uVar4;
  *(bool *)(param_1 + 0x329) = bVar6;
  return;
}

