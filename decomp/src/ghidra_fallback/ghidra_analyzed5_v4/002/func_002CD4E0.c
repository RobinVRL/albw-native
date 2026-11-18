#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC7BC(int param_1);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_00676BF4(int param_1,float *param_2,undefined4 param_3);
extern int func_00676F18(int param_1,float *param_2,undefined4 *param_3);
extern float fRam002cd768;
extern float fRam002cd76c;
extern float fRam002cd770;
extern float DAT_004cedd4;
extern int *DAT_004cedd8;

// USA 002CD4E0 <- EU 002CD4BC (Ghidra, non-matching)
// GLOBAL DAT_004cedd4 float
// GLOBAL DAT_004cedd8 int *
// GLOBAL UNK_002cd768 float
// GLOBAL UNK_002cd76c float
// GLOBAL UNK_002cd770 float

undefined4 func_002CD4E0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  piVar8 = *(int **)(param_1 + 0x974);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  pcVar5 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)((int)piVar8 + ((int)uVar2 >> 1)));
  }
  (*pcVar5)((int)((int)piVar8) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar3;
  if (*(int *)(param_1 + 0x970) != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fVar10);
  }
  func_004BCAA8(param_1);
  func_004BC8D8(param_1);
  iVar3 = *(int *)(param_1 + 0x7ac);
  if (**(int **)(iVar3 + 0x14) != 2) {
    if (**(int **)(iVar3 + 0x14) != 3) {
      return 0;
    }
    if (*(int *)(param_1 + 0x78c) != 0) {
      iVar3 = *(int *)(iVar3 + 0x14);
      fVar10 = *(float *)(iVar3 + 0xc);
      if (*(float *)(iVar3 + 8) < fVar10) {
        if (((*(float *)(iVar3 + 0x14) <= fVar10) || (fRam002cd768 <= fVar10)) ||
           (*(float *)(iVar3 + 0x14) < fRam002cd768)) goto joined_r0x002cd6c8;
LAB_002cd6cc:
        func_00151148(*(int *)(param_1 + 0x78c),0);
      }
      else if (fVar10 < fRam002cd768) {
joined_r0x002cd6c8:
        if (fRam002cd768 <= *(float *)(iVar3 + 8)) goto LAB_002cd6cc;
      }
    }
    cVar1 = *(char *)(param_1 + 0x853);
    bVar9 = cVar1 == '\0';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 0x855);
    }
    if (!bVar9 || cVar1 != '\x01') {
      *(undefined1 *)(param_1 + 0x853) = 0;
      *(undefined1 *)(param_1 + 0x855) = 1;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x7ac) + 0x14);
    if (*(char *)(iVar3 + 0x1c) == '\0') {
      if (*(float *)(iVar3 + 0x10) < fRam002cd770) {
        if (*(float *)(iVar3 + 8) <= fRam002cd770) goto LAB_002cd74c;
      }
      else if (*(float *)(iVar3 + 8) == *(float *)(iVar3 + 0x14)) {
LAB_002cd74c:
        func_004CF478(*(int *)(param_1 + 0x7a0),0);
        return func_004BC7BC(param_1);
      }
    }
    return 0;
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  fVar10 = *(float *)(iVar3 + 0xc);
  if (*(float *)(iVar3 + 8) < fVar10) {
    if (((*(float *)(iVar3 + 0x14) <= fVar10) || (fRam002cd76c <= fVar10)) ||
       (*(float *)(iVar3 + 0x14) < fRam002cd76c)) goto joined_r0x002cd630;
LAB_002cd634:
    func_004CF478(*(int *)(param_1 + 0x98c),1);
  }
  else if (fVar10 < fRam002cd76c) {
joined_r0x002cd630:
    if (fRam002cd76c <= *(float *)(iVar3 + 8)) goto LAB_002cd634;
  }
  iVar3 = *(int *)(param_1 + 0x98c);
  iVar6 = *(int *)(param_1 + 0x7a0);
  uVar2 = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(uint *)(iVar3 + 0x164) = uVar2;
  func_001151EC((undefined4 *)(iVar3 + 0x80),(undefined4 *)(iVar6 + 0x80));
  func_00169A80(*(int **)(param_1 + 0x990),extraout_r1,uVar2,piVar8);
  func_00168E9C(*(int **)(param_1 + 0x990),*(int *)(param_1 + 0x98c),(int *)0x0);
  iVar3 = *(int *)(param_1 + 0x98c);
  if (*(float *)(iVar3 + 0x134) <= DAT_004cedd4) {
    if ((*(uint *)(iVar3 + 0x164) & 0x40000000) != 0) {
      fVar26 = *(float *)(iVar3 + 0x74);
      fVar23 = *(float *)(iVar3 + 0x78);
      fVar10 = *(float *)(iVar3 + 0x7c);
      *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar3 + 0x8c);
      *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(iVar3 + 0x9c);
      *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0xac);
      *(float *)(iVar3 + 0xb0) = *(float *)(iVar3 + 0x80) * fVar26;
      *(float *)(iVar3 + 0xc0) = *(float *)(iVar3 + 0x90) * fVar26;
      *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0xa0) * fVar26;
      *(float *)(iVar3 + 0xb4) = *(float *)(iVar3 + 0x84) * fVar23;
      *(float *)(iVar3 + 0xc4) = *(float *)(iVar3 + 0x94) * fVar23;
      *(float *)(iVar3 + 0xd4) = *(float *)(iVar3 + 0xa4) * fVar23;
      *(float *)(iVar3 + 0xb8) = *(float *)(iVar3 + 0x88) * fVar10;
      *(float *)(iVar3 + 200) = *(float *)(iVar3 + 0x98) * fVar10;
      *(float *)(iVar3 + 0xd8) = *(float *)(iVar3 + 0xa8) * fVar10;
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) & 0xbfffffff;
    }
    func_001151EC((undefined4 *)(iVar3 + 0x104),(float *)(iVar3 + 0xb0));
    if (*(char *)(iVar3 + 0x16b) == '\0') goto LAB_004cef0c;
    if ((*(uint *)(iVar3 + 0x164) & 0x1000000) == 0) {
      puVar4 = *(uint **)(*(int *)(iVar3 + 0x24) + 0xc);
      *puVar4 = *puVar4 | 2;
      puVar7 = *(undefined4 **)(iVar3 + 0x16c);
      iVar6 = *(int *)(iVar3 + 0x24);
    }
    else {
      puVar7 = *(undefined4 **)(iVar3 + 0x16c);
      iVar6 = *(int *)(iVar3 + 0x24);
    }
  }
  else {
    uStack_30 = *(undefined4 *)(iVar3 + 0x88);
    uStack_2c = *(undefined4 *)(iVar3 + 0x98);
    uStack_28 = *(undefined4 *)(iVar3 + 0xa8);
    func_0051E5F8(*DAT_004cedd8,(float *)(iVar3 + 0xe0),&uStack_30,*(float *)(iVar3 + 0x134),
                  *(float *)(iVar3 + 0x138));
    if ((*(uint *)(iVar3 + 0x164) & 0x40000000) != 0) {
      fVar26 = *(float *)(iVar3 + 0x74);
      fVar10 = *(float *)(iVar3 + 0x78);
      fVar23 = *(float *)(iVar3 + 0x7c);
      *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar3 + 0x8c);
      *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(iVar3 + 0x9c);
      *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0xac);
      *(float *)(iVar3 + 0xb0) = *(float *)(iVar3 + 0x80) * fVar26;
      *(float *)(iVar3 + 0xc0) = *(float *)(iVar3 + 0x90) * fVar26;
      *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0xa0) * fVar26;
      *(float *)(iVar3 + 0xb4) = *(float *)(iVar3 + 0x84) * fVar10;
      *(float *)(iVar3 + 0xc4) = *(float *)(iVar3 + 0x94) * fVar10;
      *(float *)(iVar3 + 0xd4) = *(float *)(iVar3 + 0xa4) * fVar10;
      *(float *)(iVar3 + 0xb8) = *(float *)(iVar3 + 0x88) * fVar23;
      *(float *)(iVar3 + 200) = *(float *)(iVar3 + 0x98) * fVar23;
      *(float *)(iVar3 + 0xd8) = *(float *)(iVar3 + 0xa8) * fVar23;
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) & 0xbfffffff;
    }
    fVar23 = *(float *)(iVar3 + 0xb0);
    fVar10 = *(float *)(iVar3 + 0xe0);
    fVar14 = *(float *)(iVar3 + 0xb4);
    fVar18 = *(float *)(iVar3 + 0xec);
    fVar20 = *(float *)(iVar3 + 0xf8);
    fVar16 = *(float *)(iVar3 + 0xb8);
    fVar17 = *(float *)(iVar3 + 200);
    fVar19 = *(float *)(iVar3 + 0xf0);
    fVar12 = *(float *)(iVar3 + 0xc0);
    fVar22 = *(float *)(iVar3 + 0xfc);
    fVar15 = *(float *)(iVar3 + 0xc4);
    fVar26 = *(float *)(iVar3 + 0xe4);
    fVar21 = *(float *)(iVar3 + 0xd8);
    fVar11 = *(float *)(iVar3 + 0xf4);
    fVar27 = *(float *)(iVar3 + 0xd0);
    fVar13 = *(float *)(iVar3 + 0x100);
    fVar25 = *(float *)(iVar3 + 0xd4);
    fVar24 = *(float *)(iVar3 + 0xe8);
    *(float *)(iVar3 + 0x11c) = fVar18 * fVar16 + fVar19 * fVar17 + fVar11 * fVar21;
    *(float *)(iVar3 + 0x124) = fVar20 * fVar23 + fVar22 * fVar12 + fVar13 * fVar27;
    *(float *)(iVar3 + 0x128) = fVar20 * fVar14 + fVar22 * fVar15 + fVar13 * fVar25;
    *(float *)(iVar3 + 300) = fVar20 * fVar16 + fVar22 * fVar17 + fVar13 * fVar21;
    *(float *)(iVar3 + 0x104) = fVar10 * fVar23 + fVar26 * fVar12 + fVar24 * fVar27;
    *(float *)(iVar3 + 0x108) = fVar10 * fVar14 + fVar26 * fVar15 + fVar24 * fVar25;
    *(float *)(iVar3 + 0x10c) = fVar10 * fVar16 + fVar26 * fVar17 + fVar24 * fVar21;
    *(float *)(iVar3 + 0x114) = fVar18 * fVar23 + fVar19 * fVar12 + fVar11 * fVar27;
    *(float *)(iVar3 + 0x118) = fVar18 * fVar14 + fVar19 * fVar15 + fVar11 * fVar25;
    if ((*(uint *)(iVar3 + 0x164) & 0x40000000) != 0) {
      fVar23 = *(float *)(iVar3 + 0x78);
      fVar26 = *(float *)(iVar3 + 0x74);
      fVar10 = *(float *)(iVar3 + 0x7c);
      *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(iVar3 + 0x9c);
      *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0xac);
      *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar3 + 0x8c);
      *(float *)(iVar3 + 0xb0) = *(float *)(iVar3 + 0x80) * fVar26;
      *(float *)(iVar3 + 0xc0) = *(float *)(iVar3 + 0x90) * fVar26;
      *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0xa0) * fVar26;
      *(float *)(iVar3 + 0xb4) = *(float *)(iVar3 + 0x84) * fVar23;
      *(float *)(iVar3 + 0xc4) = *(float *)(iVar3 + 0x94) * fVar23;
      *(float *)(iVar3 + 0xd4) = *(float *)(iVar3 + 0xa4) * fVar23;
      *(float *)(iVar3 + 0xb8) = *(float *)(iVar3 + 0x88) * fVar10;
      *(float *)(iVar3 + 200) = *(float *)(iVar3 + 0x98) * fVar10;
      *(float *)(iVar3 + 0xd8) = *(float *)(iVar3 + 0xa8) * fVar10;
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) & 0xbfffffff;
    }
    *(undefined4 *)(iVar3 + 0x110) = *(undefined4 *)(iVar3 + 0xbc);
    *(undefined4 *)(iVar3 + 0x120) = *(undefined4 *)(iVar3 + 0xcc);
    *(undefined4 *)(iVar3 + 0x130) = *(undefined4 *)(iVar3 + 0xdc);
    if (*(char *)(iVar3 + 0x16b) == '\0') goto LAB_004cef0c;
    if ((*(uint *)(iVar3 + 0x164) & 0x1000000) == 0) {
      puVar4 = *(uint **)(*(int *)(iVar3 + 0x24) + 0xc);
      *puVar4 = *puVar4 | 2;
      puVar7 = *(undefined4 **)(iVar3 + 0x16c);
      iVar6 = *(int *)(iVar3 + 0x24);
    }
    else {
      puVar7 = *(undefined4 **)(iVar3 + 0x16c);
      iVar6 = *(int *)(iVar3 + 0x24);
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    func_00676BF4(iVar6,(float *)(iVar3 + 0x104),0);
  }
  else {
    func_00676F18(iVar6,(float *)(iVar3 + 0x104),puVar7);
  }
LAB_004cef0c:
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x8000000;
  return 0;
}

