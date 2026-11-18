#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004484E0(int param_1);
extern int func_00448A94(int param_1);
extern int func_00449B1C(int param_1);
extern int func_00449C40(int param_1);
extern int func_00449FD0(int param_1,int *param_2);
extern int func_0044A798(int param_1);
extern int func_0044AEC8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0044AFE8(int param_1);
extern int func_0044D0EC(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0046A1D4(int param_1,int param_2);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_0051B0B4(int param_1);
extern int func_00522958(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058D8C8(int param_1);
extern int func_0058DE90(int param_1);
extern int func_0058E1A8(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0044bb00;
extern int DAT_0044bb1c;
extern int *DAT_0044bb20;
extern uint *DAT_0044bb24;
extern undefined4 *DAT_0044bb28;
extern undefined4 DAT_0044bb2c;
extern float DAT_0044bb30;
extern undefined4 DAT_0044bb34;
extern int *DAT_0044bb38;
extern char s_SE_S_MAP_KINSTA_ON_AREA_0044bb04[];

// USA 0044B758 <- EU 0044B730 (Ghidra, non-matching)
// GLOBAL DAT_0044bb00 int *
// GLOBAL DAT_0044bb1c int
// GLOBAL DAT_0044bb20 int *
// GLOBAL DAT_0044bb24 uint *
// GLOBAL DAT_0044bb28 undefined4 *
// GLOBAL DAT_0044bb2c undefined4
// GLOBAL DAT_0044bb30 float
// GLOBAL DAT_0044bb34 undefined4
// GLOBAL DAT_0044bb38 int *
// GLOBAL s_SE_S_MAP_KINSTA_ON_AREA_0044bb04 string

undefined4 func_0044B758(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint *puVar5;
  uint uVar6;
  undefined4 extraout_r1_01;
  undefined4 uVar7;
  code *in_r2;
  uint uVar8;
  undefined4 uVar9;
  int in_r3;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  func_00449FD0(param_1,(int *)0x1);
  if (*(int *)(param_1 + 0x280) != 0) {
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + -1;
  }
  iVar2 = func_0044A798(param_1);
  piVar1 = DAT_0044bb00;
  if (iVar2 != 0) {
    return 0;
  }
  if ((*(char *)(*(int *)(param_1 + 0x20c) + 0x5f) != '\0') ||
     (*(char *)(*(int *)(param_1 + 0x20c) + 0x5d) == '\0')) {
    *(undefined1 *)(param_1 + 0x291) = 0;
    return func_0066CC58((undefined4 *)(param_1 + 0x158),3);
  }
  uVar3 = *(uint *)(param_1 + 0x210);
  bVar12 = *(char *)(uVar3 + 0x5f) == '\0';
  if (bVar12) {
    uVar3 = (uint)*(byte *)(uVar3 + 0x5d);
  }
  if (!bVar12 || uVar3 != 0) {
    if ((*(char *)(param_1 + 0x293) != '\0') ||
       ((iVar2 = func_0058DE90(*DAT_0044bb00), iVar2 != 0 &&
        (iVar2 = func_0051B0B4(*piVar1), iVar2 != 0)))) {
      func_0066CC58((undefined4 *)(param_1 + 0x158),4);
    }
    if (*(char *)(*(int *)(param_1 + 0x210) + 0x5f) == '\0') {
      return 0;
    }
    local_1c = s_SE_S_MAP_KINSTA_ON_AREA_0044bb04;
    local_20 = DAT_0044bb1c;
    return func_00533078(*(undefined4 *)(param_1 + 0x210),&local_20,0);
  }
  piVar10 = *(int **)(*DAT_0044bb20 + 0x44);
  if (((*DAT_0044bb24 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0044bb24), iVar2 != 0)) {
    *DAT_0044bb28 = DAT_0044bb2c;
  }
  if (piVar10 != (int *)0x0) {
    in_r2 = *(code **)(*piVar10 + 8);
    iVar2 = (*in_r2)(piVar10,DAT_0044bb28);
    if (iVar2 != 0) goto LAB_0044b8a4;
  }
  piVar10 = (int *)0x0;
LAB_0044b8a4:
  if ((piVar10 != (int *)0x0) && ((char)piVar10[0x1f] == '\x03')) {
    func_00449C40(param_1);
    if (*(float *)(param_1 + 0x260) <= DAT_0044bb30) {
      *(undefined4 *)(param_1 + 0x260) = DAT_0044bb34;
    }
    return func_0044AEC8(param_1,extraout_r1,in_r2,in_r3);
  }
  if (*(char *)(param_1 + 0x284) != '\0') {
    return func_0066CC58((undefined4 *)(param_1 + 0x158),9);
  }
  func_00448A94(param_1);
  func_004484E0(param_1);
  func_00449B1C(param_1);
  func_0044AEC8(param_1,extraout_r1_00,in_r2,in_r3);
  uVar11 = (uint)*(char *)(param_1 + 0x292);
  uVar3 = 0;
  do {
    puVar5 = (uint *)(param_1 + 0x188);
    if (uVar3 < 4) {
      puVar5 = puVar5 + uVar3;
    }
    uVar3 = uVar3 + 1;
    uVar6 = *puVar5;
    uVar8 = (uint)*(byte *)(uVar6 + 0xd);
    if (uVar8 == 1) {
      uVar6 = (uint)*(byte *)(uVar6 + 0xe);
    }
    if (uVar8 == 1 && uVar6 == 1) {
      uVar11 = 1;
    }
  } while ((int)uVar3 < 4);
  iVar2 = func_0058D8C8(*piVar1);
  if (iVar2 == 0) {
    uVar11 = 1;
  }
  iVar2 = func_0058DE90(*piVar1);
  if (((iVar2 != 0) && (iVar2 = func_0051B0B4(*piVar1), iVar2 != 0)) &&
     ((*(ushort *)(*(int *)(param_1 + 0x230) + 0x16) & 8) != 0)) {
    if (*(char *)(param_1 + 0x208) != '\0') {
      func_0044D0EC(*piVar1,extraout_r1_01,uVar8,in_r3);
      func_0044AFE8(param_1);
    }
    uVar11 = 1;
  }
  iVar2 = func_0058E1A8(*piVar1);
  if (iVar2 != 0) {
    uVar11 = 1;
  }
  func_004727B8(*(int *)(param_1 + 0x20c),uVar11 ^ 1);
  func_0047E8C4(*(int *)(param_1 + 0x210),uVar11 ^ 1,(int)*(char *)(param_1 + 0x293));
  func_0046A1D4(*(int *)(param_1 + 0x214),uVar11 ^ 1);
  uVar4 = *(ushort *)(*(int *)(param_1 + 0x230) + 0x16);
  if (*(char *)(param_1 + 0x292) == '\0') {
    uVar4 = uVar4 | 0x40;
  }
  else {
    uVar4 = uVar4 & 0xffbf;
  }
  *(ushort *)(*(int *)(param_1 + 0x230) + 0x16) = uVar4;
  if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x10) != 0) {
    fVar14 = *(float *)(param_1 + 0x26c) - *(float *)(param_1 + 0x274);
    fVar13 = *(float *)(param_1 + 0x270) - *(float *)(param_1 + 0x278);
    fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13);
    fVar14 = SQRT(*(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x264) +
                  *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x268));
    bVar12 = SBORROW4((int)ALBW_AS_U32(fVar14),0x40000000);
    iVar2 = (int)ALBW_AS_U32(fVar14) + -0x40000000;
    if ((int)ALBW_AS_U32(fVar14) < 0x40000000) {
      bVar12 = SBORROW4((int)ALBW_AS_U32(fVar13),0x41000000);
      iVar2 = (int)ALBW_AS_U32(fVar13) + -0x41000000;
    }
    uVar3 = (uint)(iVar2 < 0 != bVar12);
    if ((*(uint *)(param_1 + 0x280) & uVar11 - 1) == 0) {
      if (uVar3 != 0) {
        *(undefined4 *)(param_1 + 0x280) = 0x14;
      }
    }
    else if ((uVar3 & ~uVar11) != 0) {
      func_0066CC58((undefined4 *)(param_1 + 0x158),3);
    }
  }
  piVar1 = DAT_0044bb38;
  iVar2 = func_00522958(*DAT_0044bb38);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x27c) = 0;
  }
  uVar7 = *(undefined4 *)(*piVar1 + 0x10);
  uVar9 = *(undefined4 *)(*piVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x26c) = uVar7;
  *(undefined4 *)(param_1 + 0x270) = uVar9;
  return 0;
}

