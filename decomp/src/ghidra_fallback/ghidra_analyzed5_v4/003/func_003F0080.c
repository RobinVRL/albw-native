// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_003F6E84(int param_1,uint *param_2);
extern int func_003F8518(int param_1,int param_2);
extern int func_005647D4(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6, int param_7);
extern uint *DAT_003f0490;
extern undefined4 DAT_003f0494;
extern float DAT_003f0498;
extern float DAT_003f049c;
extern undefined4 DAT_003f06a8;
extern undefined4 DAT_003f06ac;
extern undefined4 DAT_003f06b0;
extern int *DAT_003f06b4;

// USA 003F0080 <- EU 003F0060 (Ghidra, non-matching)
// GLOBAL DAT_003f0490 uint *
// GLOBAL DAT_003f0494 undefined4
// GLOBAL DAT_003f0498 float
// GLOBAL DAT_003f049c float
// GLOBAL DAT_003f06a8 undefined4
// GLOBAL DAT_003f06ac undefined4
// GLOBAL DAT_003f06b0 undefined4
// GLOBAL DAT_003f06b4 int *

/* WARNING: Variable defined which should be unmapped: objStack_78 */

int func_003F0080(int param_1,uint *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_78 ((uint *)(albw_frame + 0x8))
  #define local_68 ((float *)(albw_frame + 0x18))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 ((int *)(albw_frame + 0x30))
  puVar4 = DAT_003f0490;
  iVar6 = *(int *)(param_3 + 0x18);
  *DAT_003f0490 = (uint)param_2;
  if (((*(char *)(iVar6 + 0x283) == '\0') && (*(int *)(*(int *)(param_3 + 0x1c) + 0xc) != 0)) &&
     (*(char *)(*(int *)(param_3 + 0xd8) + 0x180) != '\0' || param_4 != 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  *(bool *)(param_1 + 0x14) = bVar13;
  if (bVar13) {
    return -1;
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_3 + 0x292);
  puVar4[1] = 0;
  puVar4[6] = param_4;
  if (param_4 == 1) {
    uVar33 = func_003F6E84(*(int *)(param_3 + 0xf0),param_2);
    puVar10 = (uint *)uVar33;
    *puVar4 = (uint)puVar10;
  }
  else {
    uVar33 = func_003F6E84(*(int *)(param_3 + 0xec),param_2);
    puVar10 = (uint *)uVar33;
    *puVar4 = (uint)puVar10;
  }
  if (puVar10 != (uint *)0x0) {
    iVar6 = param_3 + param_4 * 4;
    puVar11 = *(uint **)(iVar6 + 0x254);
    iVar6 = *(int *)(iVar6 + 0x25c);
    if (iVar6 != 0 && puVar11 != (uint *)0x0) {
      func_0010E3C4(puVar10,puVar11,iVar6 << 2);
      puVar10 = puVar10 + iVar6;
    }
  }
  *puVar4 = (uint)puVar10;
  iVar6 = func_003F8518(**(int **)(param_3 + 0x18),param_3);
  if (iVar6 != 0) {
    objStack_78[1] = *puVar4;
    objStack_78[0] = param_3;
    pcVar7 = (code *)func_003F8518(**(int **)(param_3 + 0x18),param_3);
    uVar8 = (*pcVar7)(objStack_78);
    *puVar4 = uVar8;
  }
  uVar15 = DAT_003f0494;
  iVar6 = *(int *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_3 + param_4 + 0x274);
  fVar25 = DAT_003f049c;
  fVar24 = DAT_003f0498;
  fVar17 = *(float *)(iVar6 + 0x22c);
  fVar26 = *(float *)(iVar6 + 0x230);
  fVar28 = *(float *)(iVar6 + 0x234);
  fVar32 = *(float *)(iVar6 + 0x238);
  local_68[0] = *(float *)(param_3 + 0x194);
  local_68[1] = ALBW_AS_F32(*(undefined4 *)(param_3 + 0x198));
  local_68[2] = ALBW_AS_F32(*(undefined4 *)(param_3 + 0x19c));
  local_68[3] = ALBW_AS_F32(*(undefined4 *)(param_3 + 0x1b4));
  local_58 = *(undefined4 *)(param_3 + 0x1b8);
  uStack_54 = *(undefined4 *)(param_3 + 0x1bc);
  fVar20 = *(float *)(param_3 + 0x90) * *(float *)(param_3 + 0x1a0);
  if (param_4 == 1) {
    iVar6 = *(int *)(param_3 + 0xd8);
    uVar8 = *(uint *)(param_3 + 0x288);
    uVar18 = *(undefined4 *)(iVar6 + 0x6a4);
    uVar19 = *(undefined4 *)(iVar6 + 0x6a8);
    uVar29 = *(undefined4 *)(iVar6 + 0x6d0);
    uVar27 = *(undefined4 *)(iVar6 + 0x6d4);
    puVar4[4] = *(uint *)(param_3 + 0x284);
    puVar4[5] = uVar8;
    fVar31 = fVar17 * local_68[uVar8 * 3];
    fVar22 = fVar26 * local_68[uVar8 * 3 + 1];
    fVar21 = fVar28 * local_68[uVar8 * 3 + 2];
    iVar12 = *(int *)(param_3 + 0xe0);
    uVar16 = uVar15;
    uVar14 = uVar15;
    uVar2 = DAT_003f06a8;
    uVar3 = DAT_003f06b0;
    if ((*(uint *)(iVar6 + 0x548) & 0x8000) == 0) {
      fVar31 = *(float *)(iVar6 + 0x63c) * fVar31;
      fVar22 = *(float *)(iVar6 + 0x640) * fVar22;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar31)) {
        fVar31 = fVar24;
      }
      if (0x3f800000 < (int)ALBW_AS_U32(fVar22)) {
        fVar22 = fVar24;
      }
      uVar30 = VectorFloatToUnsigned(fVar31 * fVar25,3);
      uVar8 = VectorFloatToUnsigned(fVar22 * fVar25,3);
      fVar21 = *(float *)(iVar6 + 0x644) * fVar21;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar21)) {
        fVar21 = fVar24;
      }
      uVar23 = VectorFloatToUnsigned(fVar21 * fVar25,3);
      goto joined_r0x003f0488;
    }
    if (iVar12 == 0) {
      iVar6 = iVar6 + uVar8 * 0x30;
      fVar31 = *(float *)(iVar6 + 0x430) * fVar31;
      fVar22 = *(float *)(iVar6 + 0x434) * fVar22;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar31)) {
        fVar31 = fVar24;
      }
      if (0x3f800000 < (int)ALBW_AS_U32(fVar22)) {
        fVar22 = fVar24;
      }
      uVar30 = VectorFloatToUnsigned(fVar31 * fVar25,3);
      uVar8 = VectorFloatToUnsigned(fVar22 * fVar25,3);
      fVar21 = *(float *)(iVar6 + 0x438) * fVar21;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar21)) {
        fVar21 = fVar24;
      }
      uVar23 = VectorFloatToUnsigned(fVar21 * fVar25,3);
      goto joined_r0x003f0488;
    }
    iVar6 = iVar12 + uVar8 * 0x10;
    fVar31 = *(float *)(iVar6 + 0xb0) * fVar31;
    fVar22 = *(float *)(iVar6 + 0xb4) * fVar22;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar31)) {
      fVar31 = fVar24;
    }
    if (0x3f800000 < (int)ALBW_AS_U32(fVar22)) {
      fVar22 = fVar24;
    }
    uVar30 = VectorFloatToUnsigned(fVar31 * fVar25,3);
    uVar8 = VectorFloatToUnsigned(fVar22 * fVar25,3);
    fVar21 = *(float *)(iVar6 + 0xb8) * fVar21;
    fVar22 = *(float *)(iVar12 + 0x5c);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar21)) {
      fVar21 = fVar24;
    }
    uVar23 = VectorFloatToUnsigned(fVar21 * fVar25,3);
  }
  else {
    iVar12 = *(int *)(param_3 + 0xd8);
    uVar8 = *(uint *)(param_3 + 0x280);
    iVar6 = *(int *)(param_3 + 0xdc);
    uVar15 = *(undefined4 *)(iVar12 + 0x3e0);
    uVar16 = *(undefined4 *)(iVar12 + 0x3e4);
    uVar29 = *(undefined4 *)(iVar12 + 0x368);
    uVar27 = *(undefined4 *)(iVar12 + 0x36c);
    uVar14 = *(undefined4 *)(iVar12 + 0x334);
    uVar18 = *(undefined4 *)(iVar12 + 0x32c);
    uVar19 = *(undefined4 *)(iVar12 + 0x330);
    puVar4[4] = *(uint *)(param_3 + 0x27c);
    puVar4[5] = uVar8;
    iVar12 = iVar6 + uVar8 * 0x10;
    fVar21 = *(float *)(iVar12 + 0xb0) * fVar17 * local_68[uVar8 * 3];
    if (0x3f800000 < (int)ALBW_AS_U32(fVar21)) {
      fVar21 = fVar24;
    }
    fVar22 = *(float *)(iVar12 + 0xb4) * fVar26 * local_68[uVar8 * 3 + 1];
    uVar30 = VectorFloatToUnsigned(fVar21 * fVar25,3);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar22)) {
      fVar22 = fVar24;
    }
    fVar21 = *(float *)(iVar12 + 0xb8) * fVar28 * local_68[uVar8 * 3 + 2];
    uVar8 = VectorFloatToUnsigned(fVar22 * fVar25,3);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar21)) {
      fVar21 = fVar24;
    }
    fVar22 = *(float *)(iVar6 + 0x5c);
    uVar23 = VectorFloatToUnsigned(fVar21 * fVar25,3);
  }
  fVar20 = fVar22 * fVar20;
  uVar2 = DAT_003f06a8;
  uVar3 = DAT_003f06b0;
joined_r0x003f0488:
  objStack_78[0] = uVar23 & 0xff;
  if ((int)ALBW_AS_U32(fVar20) < 0x3f800001) {
    fVar24 = fVar20;
  }
  uVar23 = VectorFloatToUnsigned(fVar24 * fVar25,3);
  objStack_78[1] = uVar23 & 0xff;
  bVar13 = *(char *)(param_1 + 0x15) != '\0';
  uVar23 = 0;
  if (bVar13) {
    uVar23 = puVar4[6];
  }
  (void) uVar2;
  (void) uVar3;
  if (!bVar13 || uVar23 == 1) {
    puVar9 = (undefined4 *)*puVar4;
    fVar20 = *(float *)(param_3 + 0x90);
    fVar24 = *(float *)(param_3 + 0x1a0);
    puVar9[1] = DAT_003f06ac;
    puVar9[3] = uVar3;
    *puVar9 = uVar2;
    uVar23 = puVar4[4];
    fVar22 = local_68[uVar23 * 3];
    fVar21 = local_68[uVar23 * 3 + 1];
    fVar25 = local_68[uVar23 * 3 + 2];
    puVar9[2] = ALBW_AS_U32(fVar20 * fVar24 * fVar32);
    puVar9[6] = ALBW_AS_U32(fVar17 * fVar22);
    puVar9[7] = uVar16;
    puVar9[8] = uVar15;
    puVar9[9] = uVar27;
    puVar9[10] = uVar29;
    puVar9[4] = ALBW_AS_U32(fVar28 * fVar25);
    puVar9[5] = ALBW_AS_U32(fVar26 * fVar21);
    puVar9[0xb] = 0;
    puVar9[0xc] = uVar14;
    puVar9[0xd] = uVar19;
    puVar9[0xe] = uVar18;
    puVar9[0xf] = 0;
    *puVar4 = (uint)(puVar9 + 0x10);
  }
  iVar6 = param_3 + param_4;
  cVar1 = *(char *)(iVar6 + 0x290);
  *(char *)(param_1 + 0x16) = cVar1;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(iVar6 + 0x28c);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(iVar6 + 0x28e);
  if (cVar1 == '\0') {
    uVar23 = 10;
  }
  else {
    uVar23 = 7;
  }
  puVar4[3] = uVar23;
  objStack_78[2] = param_4;
  puVar10 = func_005647D4(param_3 + 0x23c,(uint *)*puVar4,uVar30 & 0xff,uVar8 & 0xff,objStack_78[0],
                          objStack_78[1],param_4);
  iVar6 = *(int *)(param_3 + 0x18);
  *puVar4 = (uint)puVar10;
  piVar5 = DAT_003f06b4;
  puVar4[2] = *(uint *)(param_1 + 4);
  uVar8 = *(uint *)(iVar6 + 0x21c);
  puVar4[0xc] = *(uint *)(iVar6 + 0x218);
  puVar4[0xd] = uVar8;
  local_50[0] = *piVar5;
  local_50[1] = piVar5[1];
  local_50[2] = piVar5[2];
  local_50[3] = piVar5[3];
  iVar6 = local_50[(int)*(char *)(param_1 + 0x17) | (int)*(char *)(param_1 + 0x18) << 1];
  if (*(char *)(param_1 + 0x16) == '\0') {
    iVar6 = iVar6 + 8;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    iVar6 = iVar6 + 4;
  }
  if ((*(char *)(param_1 + 0x15) != '\0') && (puVar4[6] == 0)) {
    iVar6 = -1;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    if (param_4 == 0) {
      iVar12 = *(int *)(param_3 + 0xf4);
    }
    else {
      iVar12 = *(int *)(param_3 + 0xf8);
    }
    if (iVar12 == 0) {
      return -1;
    }
  }
  return iVar6;
}

