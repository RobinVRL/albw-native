#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_00547B48(int param_1,int param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00665CC4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033974c;
extern undefined4 *DAT_00339750;
extern undefined4 DAT_00339754;
extern undefined4 DAT_00339758;
extern undefined4 DAT_0033975c;
extern uint DAT_0033976c;
extern float DAT_00339770;
extern undefined4 DAT_00339774;
extern uint DAT_00339778;
extern undefined *DAT_0033977c;
extern char s_Sunlight_00339760[];
extern char s_cState_Breaking_00339ae8[];
extern char s_cState_Broken_00339af8[];
extern char s_cState_Wait_00339780[];

// USA 00339324 <- EU 00339300 (Ghidra, non-matching)
// GLOBAL DAT_0033974c int
// GLOBAL DAT_00339750 undefined4 *
// GLOBAL DAT_00339754 undefined4
// GLOBAL DAT_00339758 undefined4
// GLOBAL DAT_0033975c undefined4
// GLOBAL DAT_0033976c uint
// GLOBAL DAT_00339770 float
// GLOBAL DAT_00339774 undefined4
// GLOBAL DAT_00339778 uint
// GLOBAL DAT_0033977c undefined *
// GLOBAL s_Sunlight_00339760 string
// GLOBAL s_cState_Breaking_00339ae8 string
// GLOBAL s_cState_Broken_00339af8 string
// GLOBAL s_cState_Wait_00339780 string

/* WARNING: Variable defined which should be unmapped: objStack_98 */

int func_00339324(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_98 ((uint *)(albw_frame + 0x8))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x60))
  #define local_3c (*(uint *)(albw_frame + 0x64))
  #define local_38 (*(uint *)(albw_frame + 0x68))
  #define local_34 (*(char * *)(albw_frame + 0x6c))
  piVar6 = func_00150E40(param_1,param_2);
  iVar8 = DAT_0033974c;
  *piVar6 = DAT_0033974c;
  piVar6[200] = iVar8 + 0x54;
  puVar7 = func_0010A794(piVar6 + 0x103);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar9 = puVar7 + -0x103;
  puVar7[10] = 0;
  iVar8 = func_0054D964((int)puVar9,0);
  puVar7[0xb] = iVar8;
  iVar8 = func_0054D964((int)puVar9,1);
  puVar2 = DAT_00339750;
  puVar7[0xc] = iVar8;
  uVar14 = puVar2[1];
  puVar7[0xf] = *puVar2;
  puVar7[0x10] = uVar14;
  uVar14 = DAT_00339754;
  puVar7[0xd] = DAT_00339754;
  puVar7[0xe] = puVar9;
  uVar15 = puVar2[2];
  uVar21 = puVar2[3];
  puVar7[0x11] = uVar14;
  puVar7[0x12] = puVar7 + -0x103;
  puVar7[0x13] = uVar15;
  puVar7[0x14] = uVar21;
  iVar8 = func_004EE484(puVar7 + 0x15);
  iVar17 = iVar8 + -0x460;
  *(undefined4 *)(iVar8 + 100) = 0;
  uVar14 = DAT_00339758;
  *(undefined4 *)(iVar8 + 0x68) = 0;
  *(undefined4 *)(iVar8 + 0x6c) = uVar14;
  *(undefined1 *)(iVar8 + 0x70) = 0;
  objStack_98[1] = 0;
  objStack_98[0] = 1;
  objStack_98[2] = 0;
  uVar15 = func_0014E428(iVar17,1,0,0,1,0,0);
  *(undefined4 *)(iVar8 + -0x30) = uVar15;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar9,1,DAT_0033975c,1);
  }
  *(undefined4 **)(iVar8 + -0x2c) = puVar7;
  uVar19 = DAT_0033976c;
  local_34 = s_Sunlight_00339760;
  local_38 = DAT_0033976c;
  func_00169608(*(uint **)(iVar8 + -0x2c),0,(int *)&local_38,
                *(int *)(*(int *)(iVar8 + -400) + 0x1c8));
  func_00133870(*(int *)(iVar8 + -0x2c),0,*(int *)(iVar8 + -0x30));
  uVar16 = 0;
  func_0016A02C(*(int *)(iVar8 + -0x2c),-1,(int *)0xffffffff,0);
  objStack_98[2] = (uint)&local_8c;
  objStack_98[1] = 3;
  local_44 = 10;
  local_40 = 0;
  local_8c = 0;
  objStack_98[0] = 1;
  local_80 = DAT_00339774;
  local_78 = uVar16 | 0xff;
  local_88 = DAT_00339770;
  uStack_84 = uVar14;
  local_7c = uVar14;
  fparam_0 = DAT_00339770;
  func_0016898C(*(int *)(iVar8 + -0x2c),objStack_98);
  func_004D80A4((float *)objStack_98,*(uint *)(iVar8 + -0x78),fparam_0);
  objStack_98[1] = (uint)ALBW_AS_U32(fparam_0);
  fVar23 = func_0054DE3C(iVar17,0,1);
  objStack_98[1] = (uint)ALBW_AS_U32((fVar23 + ALBW_AS_F32(objStack_98[1])));
  func_00115C54((float *)objStack_98,(float *)objStack_98,(float *)(iVar8 + -0x90));
  iVar10 = *(int *)(iVar8 + -0x28);
  *(uint *)(iVar10 + 4) = objStack_98[0];
  *(uint *)(iVar10 + 8) = objStack_98[1];
  *(uint *)(iVar10 + 0xc) = objStack_98[2];
  func_004356B4(*(int **)(iVar8 + -0x28));
  uVar16 = *(uint *)(iVar8 + -0x78);
  fVar23 = func_0054DE3C(iVar17,1,2);
  func_004D80A4((float *)objStack_98,uVar16,fVar23);
  objStack_98[1] = (uint)ALBW_AS_U32(fparam_0);
  func_00115C54((float *)objStack_98,(float *)objStack_98,(float *)(iVar8 + -0x90));
  iVar10 = *(int *)(iVar8 + -0x24);
  *(uint *)(iVar10 + 4) = objStack_98[0];
  *(uint *)(iVar10 + 8) = objStack_98[1];
  *(uint *)(iVar10 + 0xc) = objStack_98[2];
  func_004356B4(*(int **)(iVar8 + -0x24));
  for (iVar10 = 0; piVar6 = *(int **)(*(int *)(iVar8 + -0x30) + 0x20), iVar10 < piVar6[1];
      iVar10 = iVar10 + 1) {
    puVar12 = (ushort *)(*piVar6 + iVar10 * 0x154);
    if (puVar12 != (ushort *)0x0) {
      *puVar12 = *puVar12 | 0x400;
    }
  }
  local_3c = *(uint *)(iVar8 + -0x194);
  objStack_98[1] = iVar8 - 0x10;
  objStack_98[0] = (uint)*(short *)(iVar8 + -0x40c);
  objStack_98[2] = DAT_00339778;
  uVar16 = objStack_98[2];
  (*(undefined2 *)((char *)&objStack_98[2] + 0)) = (undefined2)DAT_00339778;
  uVar3 = (undefined2)objStack_98[2];
  objStack_98[2] = uVar16;
  func_0014EB8C(iVar8,*(undefined4 *)(iVar8 + -0x24),*(undefined2 **)(iVar8 + -0xc0),&local_3c,
                *(short *)(iVar8 + -0x40c),objStack_98[1],uVar3);
  *(undefined1 *)(iVar8 + -0x4e) = 3;
  puVar9 = (undefined4 *)(iVar8 + -0x54);
  *(int *)(iVar8 + -0x40) = iVar17;
  iVar10 = func_0010BA78(0x30);
  *(int *)(iVar8 + -0x3c) = iVar10;
  *(uint *)(iVar8 + -0x38) = iVar10 + (uint)*(byte *)(iVar8 + -0x4e) * 8;
  iVar13 = 3;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar14 = puVar2[0x13];
    iVar13 = iVar13 + -1;
    puVar7[2] = puVar2[0x12];
    puVar7[3] = uVar14;
    uVar14 = puVar2[0x13];
    puVar7[4] = puVar2[0x12];
    puVar7[5] = uVar14;
    puVar7 = puVar7 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)(iVar8 + -0x4e);
  uVar16 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar16 << 3);
  *(undefined4 **)(iVar8 + -0x34) = puVar7;
  if (uVar16 != 0) {
    puVar11 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar2[9];
      *puVar7 = puVar2[8];
      puVar7[1] = uVar14;
      puVar11 = puVar7;
    }
    for (iVar10 = (int)uVar16 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar14 = puVar2[9];
      puVar11[2] = puVar2[8];
      puVar11[3] = uVar14;
      uVar14 = puVar2[9];
      puVar11[4] = puVar2[8];
      puVar11[5] = uVar14;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar10 = func_00100118((int)(puVar7 + 2),DAT_0033977c,0x24,3);
  }
  if (iVar10 != 0) {
    *(int *)(iVar8 + -0x48) = iVar10;
    *(undefined4 *)(iVar8 + -0x4c) = 3;
  }
  *(undefined4 **)(iVar8 + -0x10c) = puVar9;
  *(undefined2 *)(iVar8 + -0x106) = 3;
  objStack_98[1] = (uint)s_cState_Wait_00339780;
  objStack_98[0] = uVar19;
  iVar10 = *(int *)(iVar8 + -0x48);
  puVar20 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar19 + 8))(objStack_98);
  uVar16 = 0;
  do {
    if (*(char *)(objStack_98[1] + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_003397b8;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_003397b8:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar16) {
    uVar16 = iVar10 - 1;
  }
  (**(code **)(objStack_98[0] + 8))(objStack_98);
  func_0010E3C4(puVar20,(uint *)objStack_98[1],uVar16);
  *(undefined1 *)((int)puVar20 + uVar16) = 0;
  puVar7 = *(undefined4 **)(iVar8 + -0x3c);
  uVar22 = puVar2[6];
  uVar15 = puVar2[4];
  uVar21 = puVar2[8];
  uVar18 = puVar2[7];
  uVar14 = puVar2[9];
  puVar7[1] = puVar2[5];
  *puVar7 = uVar15;
  puVar7 = *(undefined4 **)(iVar8 + -0x38);
  puVar7[1] = uVar18;
  *puVar7 = uVar22;
  puVar7 = *(undefined4 **)(iVar8 + -0x34);
  puVar7[1] = uVar14;
  *puVar7 = uVar21;
  objStack_98[1] = (uint)s_cState_Breaking_00339ae8;
  objStack_98[0] = uVar19;
  if (*(uint *)(iVar8 + -0x4c) < 2) {
    iVar10 = *(int *)(iVar8 + -0x48);
  }
  else {
    iVar10 = *(int *)(iVar8 + -0x48) + 0x24;
  }
  puVar20 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar19 + 8))(objStack_98);
  uVar16 = 0;
  do {
    if (*(char *)(objStack_98[1] + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00339890;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00339890:
  if (*(int *)(iVar10 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(objStack_98[0] + 8))(objStack_98);
  func_0010E3C4(puVar20,(uint *)objStack_98[1],uVar16);
  *(undefined1 *)((int)puVar20 + uVar16) = 0;
  iVar10 = *(int *)(iVar8 + -0x3c);
  uVar15 = puVar2[0xb];
  uVar21 = puVar2[0xc];
  uVar14 = puVar2[8];
  uVar18 = puVar2[9];
  uVar22 = puVar2[0xd];
  *(undefined4 *)(iVar10 + 8) = puVar2[10];
  *(undefined4 *)(iVar10 + 0xc) = uVar15;
  iVar10 = *(int *)(iVar8 + -0x38);
  *(undefined4 *)(iVar10 + 8) = uVar21;
  *(undefined4 *)(iVar10 + 0xc) = uVar22;
  iVar10 = *(int *)(iVar8 + -0x34);
  *(undefined4 *)(iVar10 + 8) = uVar14;
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  objStack_98[1] = (uint)s_cState_Broken_00339af8;
  objStack_98[0] = uVar19;
  if (*(uint *)(iVar8 + -0x4c) < 3) {
    iVar10 = *(int *)(iVar8 + -0x48);
  }
  else {
    iVar10 = *(int *)(iVar8 + -0x48) + 0x48;
  }
  puVar20 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar19 + 8))(objStack_98);
  uVar19 = 0;
  do {
    if (*(char *)(objStack_98[1] + uVar19) == '\0') {
      if ((int)uVar19 < 0x40001) goto LAB_00339968;
      break;
    }
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 0x40001);
  uVar19 = 0;
LAB_00339968:
  if (*(int *)(iVar10 + 8) <= (int)uVar19) {
    uVar19 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(objStack_98[0] + 8))(objStack_98);
  func_0010E3C4(puVar20,(uint *)objStack_98[1],uVar19);
  *(undefined1 *)((int)puVar20 + uVar19) = 0;
  iVar10 = *(int *)(iVar8 + -0x3c);
  uVar14 = puVar2[0xf];
  uVar15 = puVar2[0x10];
  uVar21 = puVar2[0x11];
  uVar18 = puVar2[9];
  uVar22 = puVar2[8];
  *(undefined4 *)(iVar10 + 0x10) = puVar2[0xe];
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar10 = *(int *)(iVar8 + -0x38);
  *(undefined4 *)(iVar10 + 0x10) = uVar15;
  *(undefined4 *)(iVar10 + 0x14) = uVar21;
  iVar10 = *(int *)(iVar8 + -0x34);
  *(undefined4 *)(iVar10 + 0x10) = uVar22;
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  if ((*(short *)(iVar8 + -0x434) != 0) || (bVar4 = func_00588BF0(iVar17,0), bVar4)) {
    func_00665CC4(puVar9,2);
  }
  else {
    func_00665CC4(puVar9,0);
  }
  iVar10 = *(int *)(iVar8 + -0x30);
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  uVar19 = *(uint *)(iVar8 + -0x78);
  piVar6 = (int *)0x0;
  func_00491E80((float *)(iVar10 + 0x80),0,uVar19,0);
  iVar10 = *(int *)(iVar8 + -0x30);
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar10 + 0x8c) = *(undefined4 *)(iVar8 + -0x90);
  *(undefined4 *)(iVar10 + 0x9c) = *(undefined4 *)(iVar8 + -0x8c);
  uVar14 = *(undefined4 *)(iVar8 + -0x88);
  *(undefined4 *)(iVar10 + 0xac) = uVar14;
  func_00169A80(*(int **)(iVar8 + -0x2c),uVar14,uVar19,piVar6);
  func_00168E9C(*(int **)(iVar8 + -0x2c),*(int *)(iVar8 + -0x30),(int *)0x0);
  func_004CEAF0(*(int *)(iVar8 + -0x30));
  if ((*(short *)(iVar8 + -0x428) == 0) ||
     (((*(short *)(iVar8 + -0x428) != *(short *)(iVar8 + -0x42a) ||
       (*(char *)(iVar8 + -0x42b) != *(char *)(iVar8 + -0x42c))) &&
      (bVar4 = func_00547B48(iVar8 + -0x45c,1), !bVar4)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(iVar8 + 0x70) = uVar5;
  return iVar17;
}

