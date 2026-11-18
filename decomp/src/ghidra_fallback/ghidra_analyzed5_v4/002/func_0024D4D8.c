#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern longlong func_001104E4(int param_1,int param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0024C5D0(int param_1);
extern int func_0024CC74(int param_1,int param_2);
extern int func_0024CDE4(int param_1,int param_2,int param_3);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int DAT_0024d8f4;
extern undefined *DAT_0024d8f8;
extern undefined *DAT_0024d8fc;
extern undefined4 *DAT_0024d900;
extern undefined4 *DAT_0024d904;
extern undefined4 *DAT_0024d908;
extern uint DAT_0024d90c;
extern float DAT_0024d910;
extern float DAT_0024d914;
extern float DAT_0024d918;
extern float DAT_0024d91c;
extern int DAT_0024d920;
extern int DAT_0024d924;
extern float DAT_0024d928;
extern float DAT_0024d92c;
extern uint DAT_0024d930;
extern undefined4 *DAT_0024de74;
extern undefined *DAT_0024de78;
extern int DAT_0024de7c;
extern uint DAT_0024de90;
extern undefined DAT_0024de94;
extern char s__cState_Erase_0024de97[];
extern char s_cState_Appear_0024de80[];
extern undefined4 _DAT_0024de94;

// USA 0024D4D8 <- EU 0024D4D8 (Ghidra, non-matching)
// GLOBAL DAT_0024d8f4 int
// GLOBAL DAT_0024d8f8 undefined *
// GLOBAL DAT_0024d8fc undefined *
// GLOBAL DAT_0024d900 undefined4 *
// GLOBAL DAT_0024d904 undefined4 *
// GLOBAL DAT_0024d908 undefined4 *
// GLOBAL DAT_0024d90c uint
// GLOBAL DAT_0024d910 float
// GLOBAL DAT_0024d914 float
// GLOBAL DAT_0024d918 float
// GLOBAL DAT_0024d91c float
// GLOBAL DAT_0024d920 int
// GLOBAL DAT_0024d924 int
// GLOBAL DAT_0024d928 float
// GLOBAL DAT_0024d92c float
// GLOBAL DAT_0024d930 uint
// GLOBAL DAT_0024de74 undefined4 *
// GLOBAL DAT_0024de78 undefined *
// GLOBAL DAT_0024de7c int
// GLOBAL DAT_0024de90 uint
// GLOBAL DAT_0024de94 undefined
// GLOBAL s_cState_Appear_0024de80 string

/* WARNING: Variable defined which should be unmapped: objStack_a8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * func_0024D4D8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint *puVar16;
  code *pcVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint *puVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  bool bVar27;
  uint in_fpscr;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  longlong lVar35;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a8 ((uint *)(albw_frame + 0x8))
  #define local_80 (*(uint *)(albw_frame + 0x30))
  #define local_7c (*(uint * *)(albw_frame + 0x34))
  #define auStack_78 ((undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(int *)(albw_frame + 0x5c))
  #define local_50 (*(uint *)(albw_frame + 0x60))
  #define local_4c (*(uint * *)(albw_frame + 0x64))
  #define local_48 (*(uint * *)(albw_frame + 0x68))
  #define local_44 (*(uint * *)(albw_frame + 0x6c))
  #define local_40 (*(uint * *)(albw_frame + 0x70))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0024d8f4;
  *piVar5 = DAT_0024d8f4;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  iVar7 = func_00100118((int)(puVar6 + 0x49),DAT_0024d8f8,8,0x20);
  puVar8 = (uint *)func_00100118(iVar7 + 0x280,DAT_0024d8fc,4,0x20);
  uVar18 = param_2[2];
  uVar24 = param_2[3];
  puVar19 = puVar8 + -0x1ec;
  puVar8[0x20] = param_2[1];
  puVar8[0x21] = uVar18;
  puVar8[0x22] = uVar24;
  fVar32 = DAT_0024d910;
  uVar18 = DAT_0024d90c;
  puVar6 = DAT_0024d900;
  if (((short)param_2[10] != 0) && (puVar6 = DAT_0024d904, (short)param_2[10] != 2)) {
    puVar6 = DAT_0024d908;
  }
  puVar8[0xa3] = puVar6[2];
  puVar8[0xa4] = uVar18;
  fVar29 = ALBW_AS_F32(param_2[0x11]);
  uVar24 = in_fpscr & 0xfffffff | (uint)(fVar29 < fVar32) << 0x1f | (uint)(fVar29 == fVar32) << 0x1e
  ;
  uVar28 = uVar24 | (uint)(NAN(fVar29) || NAN(fVar32)) << 0x1c;
  bVar1 = (byte)(uVar24 >> 0x18);
  *(bool *)(puVar8 + 0xb5) = !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar28 >> 0x1c) & 1);
  *(bool *)((int)puVar8 + 0x2d5) = 0 < *(short *)((int)param_2 + 0x2a);
  puVar8[0xb6] = 0;
  uVar24 = (uint)(short)param_2[10];
  if (uVar24 == 0) {
    bVar3 = true;
LAB_0024d5dc:
    bVar27 = false;
  }
  else {
    bVar3 = false;
    if (uVar24 != 2) goto LAB_0024d5dc;
    bVar27 = true;
  }
  fVar30 = DAT_0024d91c;
  fVar29 = DAT_0024d914;
  fVar33 = DAT_0024d918;
  if (bVar27 || bVar3) {
    iVar7 = func_0024CDE4((int)puVar19,(int)param_2,uVar24);
    if (iVar7 == 0) {
      *(undefined1 *)((int)puVar8 + -0x4d9) = 1;
      return puVar19;
    }
    puVar6 = DAT_0024d900;
    if ((uVar24 != 0) && (puVar6 = DAT_0024d904, uVar24 != 2)) {
      puVar6 = DAT_0024d908;
    }
    fVar31 = ALBW_AS_F32(puVar6[2]);
    if (uVar24 == 0) goto LAB_0024d6c4;
    if (uVar24 == 2) {
      uVar9 = 0x46;
    }
    else {
      uVar9 = 0x3c;
    }
    fVar29 = (float)VectorSignedToFloat(uVar9,(byte)(uVar28 >> 0x15) & 3);
  }
  else {
    iVar7 = func_0024CC74((int)puVar19,(int)param_2);
    if (iVar7 == 0) {
      *(undefined1 *)((int)puVar8 + -0x4d9) = 1;
      return puVar19;
    }
    puVar6 = DAT_0024d900;
    if ((uVar24 != 0) && (puVar6 = DAT_0024d904, uVar24 != 2)) {
      puVar6 = DAT_0024d908;
    }
    fVar31 = ALBW_AS_F32(puVar6[2]);
    if (uVar24 == 0) goto LAB_0024d6c4;
    if ((uVar24 == 2) || (*(char *)(DAT_0024d920 + (int)puVar19) != '\0')) {
      uVar9 = 0x46;
    }
    else {
      uVar9 = 0x3c;
    }
    fVar29 = (float)VectorSignedToFloat(uVar9,(byte)(uVar28 >> 0x15) & 3);
  }
  if (uVar24 == 2) {
    fVar33 = fVar30;
  }
LAB_0024d6c4:
  puVar8[0xa4] = (uint)ALBW_AS_U32((fVar31 / (fVar29 * fVar33)));
  uVar10 = func_0054DDF4((int)puVar19,0);
  puVar8[-0x104] = uVar10;
  puVar8[-0x103] = uVar10;
  uVar10 = 0;
  cVar2 = *(char *)(DAT_0024d920 + (int)puVar19);
  if (uVar24 == 0) {
    iVar7 = 300;
  }
  else if (uVar24 == 2) {
    uVar34 = func_00110710(*(uint *)(DAT_0024d924 + 8),*(uint *)(DAT_0024d924 + 4));
    iVar7 = (int)uVar34 * 0x19 + 0x46;
  }
  else if (cVar2 == '\0') {
    iVar7 = 0x96;
  }
  else {
    iVar7 = 0x82;
  }
  if (uVar24 == 0) {
    iVar15 = 100;
  }
  else if ((uVar24 == 2) || (cVar2 != '\0')) {
    iVar15 = 0x46;
  }
  else {
    iVar15 = 0x3c;
  }
  uVar20 = puVar8[0xb6];
  lVar35 = func_001104E4(iVar7 - iVar15,uVar20 - 1);
  if (uVar24 == 0) {
    fVar30 = (float)VectorSignedToFloat(100,(byte)(uVar28 >> 0x15) & 3);
    fVar29 = ALBW_AS_F32(_DAT_0024de94);
  }
  else {
    if ((uVar24 == 2) || (cVar2 != '\0')) {
      uVar9 = 0x46;
    }
    else {
      uVar9 = 0x3c;
    }
    fVar29 = DAT_0024d928;
    if (uVar24 != 2) {
      fVar29 = DAT_0024d92c;
    }
    fVar30 = (float)VectorSignedToFloat(uVar9,(byte)(uVar28 >> 0x15) & 3);
  }
  uVar28 = 0;
  local_54 = (int)(fVar30 * fVar29);
  if (0 < (int)uVar20) {
    local_4c = puVar8 + 99;
    local_48 = puVar8 + 0x83;
    uVar34 = CONCAT44(uVar18,fVar32);
    local_44 = puVar8 + 0xad;
    local_40 = puVar8 + 0xa5;
    puVar23 = puVar8 + 0x43;
    do {
      puVar12 = puVar8 + -0xe0;
      if (uVar28 < 0x20) {
        puVar12 = puVar12 + uVar28;
      }
      uVar18 = func_0054D964((int)puVar19,0);
      *puVar12 = uVar18;
      puVar12 = puVar8 + -0xe0;
      if (uVar28 < 0x20) {
        puVar12 = puVar12 + uVar28;
      }
      uVar18 = *puVar12;
      puVar6 = DAT_0024d900;
      if ((uVar24 != 0) && (puVar6 = DAT_0024d904, uVar24 != 2)) {
        puVar6 = DAT_0024d908;
      }
      bVar27 = uVar28 < 0x20;
      uVar9 = puVar6[1];
      uVar25 = puVar6[2];
      puVar12 = puVar8 + -0xe0;
      if (bVar27) {
        puVar12 = puVar12 + uVar28;
      }
      *(undefined4 *)(uVar18 + 0x58) = *puVar6;
      *(undefined4 *)(uVar18 + 0x5c) = uVar9;
      *(undefined4 *)(uVar18 + 0x60) = uVar25;
      puVar11 = puVar8 + -0xe0;
      if (bVar27) {
        puVar11 = puVar11 + uVar28;
      }
      *(uint *)(*puVar12 + 0x2c) = *(uint *)(*puVar12 + 0x2c) & 0xfffffff7;
      puVar12 = puVar8 + -0xe0;
      if (bVar27) {
        puVar12 = puVar12 + uVar28;
      }
      *(uint *)(*puVar11 + 0x2c) = *(uint *)(*puVar11 + 0x2c) | 0x40000;
      *(uint *)(*puVar12 + 0x2c) = *(uint *)(*puVar12 + 0x2c) | 0x20000;
      puVar6 = (undefined4 *)func_0010BAB4(100);
      if (puVar6 == (undefined4 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = func_004EE484(puVar6);
      }
      bVar27 = uVar28 < 0x20;
      puVar12 = puVar8 + -0xc0;
      if (bVar27) {
        puVar12 = puVar12 + uVar28;
      }
      puVar11 = puVar8 + -0xc0;
      *puVar12 = uVar18;
      objStack_a8[0] = DAT_0024d930;
      puVar12 = puVar8 + -0xc0;
      if (bVar27) {
        puVar12 = puVar12 + uVar28;
      }
      *(undefined1 *)(*puVar12 + 0x61) = 0;
      local_50 = puVar8[-0x139];
      if (bVar27) {
        puVar11 = puVar11 + uVar28;
      }
      puVar12 = puVar8 + -0xe0;
      if (bVar27) {
        puVar12 = puVar12 + uVar28;
      }
      uVar18 = objStack_a8[0];
      uVar4 = (undefined2)objStack_a8[0];
      objStack_a8[0] = uVar18;
      func_0014EB8C(*puVar11,*puVar12,(undefined2 *)puVar8[-0x104],&local_50,(short)param_2[0x14],0,
                    uVar4);
      if (bVar3) {
        puVar12 = puVar8 + -0xc0;
        if (uVar28 < 0x20) {
          puVar12 = puVar12 + uVar28;
        }
        *(ushort *)(*puVar12 + 0x30) = *(ushort *)(*puVar12 + 0x30) >> 1;
      }
      puVar12 = puVar8 + -0xc0;
      if (uVar28 < 0x20) {
        puVar12 = puVar12 + uVar28;
      }
      uVar18 = *puVar12;
      puVar12 = puVar8;
      if (uVar28 < 0x20) {
        puVar12 = puVar8 + uVar28;
      }
      func_004D80A4((float *)(uVar18 + 0x24),*puVar12,ALBW_AS_F32(((ulonglong)uVar34 >> 0x20)));
      puVar12 = puVar23;
      if (uVar28 < 0x20) {
        puVar12 = puVar23 + uVar28;
      }
      *(uint *)(uVar18 + 0x28) = (uint)uVar34;
      if (uVar28 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (int)lVar35 + uVar10;
      }
      bVar27 = uVar28 < 0x20;
      *puVar12 = uVar10;
      puVar12 = puVar23;
      if (bVar27) {
        puVar12 = puVar23 + uVar28;
      }
      uVar10 = *puVar12;
      puVar11 = puVar23;
      puVar12 = local_4c;
      if (bVar27) {
        puVar11 = puVar23 + uVar28;
        puVar12 = local_4c + uVar28;
      }
      puVar16 = local_48;
      if (bVar27) {
        puVar16 = local_48 + uVar28;
      }
      *puVar12 = *puVar11 + local_54;
      *puVar16 = (uint)uVar34;
      puVar12 = local_44;
      if (bVar27) {
        puVar12 = (uint *)((int)local_44 + uVar28);
      }
      *(undefined1 *)puVar12 = 0;
      puVar12 = local_40;
      if (bVar27) {
        puVar12 = (uint *)((int)local_40 + uVar28);
      }
      uVar28 = uVar28 + 1;
      *(undefined1 *)puVar12 = 0;
    } while ((int)uVar28 < (int)puVar8[0xb6]);
  }
  puVar8[-0xe4] = (uint)puVar19;
  *(undefined1 *)((int)puVar8 + -0x39e) = 2;
  uVar18 = func_0010BA78(0x20);
  puVar6 = DAT_0024de74;
  puVar8[-0xe3] = uVar18;
  puVar8[-0xe2] = uVar18 + (uint)*(byte *)((int)puVar8 + -0x39e) * 8;
  iVar7 = 2;
  puVar13 = (undefined4 *)(uVar18 - 8);
  do {
    uVar9 = puVar6[0xb];
    iVar7 = iVar7 + -1;
    puVar13[2] = puVar6[10];
    puVar13[3] = uVar9;
    uVar9 = puVar6[0xb];
    puVar13[4] = puVar6[10];
    puVar13[5] = uVar9;
    puVar13 = puVar13 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar8 + -0x39e);
  uVar18 = (uint)bVar1;
  puVar13 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar8[-0xe1] = (uint)puVar13;
  if (uVar18 != 0) {
    puVar14 = puVar13 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar6[5];
      *puVar13 = puVar6[4];
      puVar13[1] = uVar9;
      puVar14 = puVar13;
    }
    for (iVar7 = (int)uVar18 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar9 = puVar6[5];
      puVar14[2] = puVar6[4];
      puVar14[3] = uVar9;
      uVar9 = puVar6[5];
      puVar14[4] = puVar6[4];
      puVar14[5] = uVar9;
      puVar14 = puVar14 + 4;
    }
  }
  puVar13 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  uVar18 = 0;
  if (puVar13 != (undefined4 *)0x0) {
    *puVar13 = 0x24;
    puVar13[1] = 2;
    uVar18 = func_00100118((int)(puVar13 + 2),DAT_0024de78,0x24,2);
  }
  if (uVar18 != 0) {
    puVar8[-0xe6] = uVar18;
    puVar8[-0xe7] = 2;
  }
  iVar7 = DAT_0024de7c;
  puVar8[-0x117] = (uint)(puVar8 + -0xe9);
  objStack_a8[2] = DAT_0024de90;
  *(undefined2 *)(iVar7 + (int)puVar19) = 2;
  local_7c = (uint *)s_cState_Appear_0024de80;
  local_80 = objStack_a8[2];
  uVar28 = puVar8[-0xe6];
  puVar23 = *(uint **)(uVar28 + 4);
  (**(code **)(objStack_a8[2] + 8))(&local_80);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_7c + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0024dbd4;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0024dbd4:
  iVar7 = *(int *)(uVar28 + 8);
  if (iVar7 <= (int)uVar18) {
    uVar18 = iVar7 - 1;
  }
  (**(code **)(local_80 + 8))(&local_80);
  func_0010E3C4(puVar23,local_7c,uVar18);
  *(undefined1 *)((int)puVar23 + uVar18) = 0;
  puVar13 = (undefined4 *)puVar8[-0xe3];
  uVar9 = puVar6[1];
  uVar25 = puVar6[2];
  uVar21 = puVar6[3];
  uVar22 = puVar6[4];
  uVar26 = puVar6[5];
  *puVar13 = *puVar6;
  puVar13[1] = uVar9;
  puVar13 = (undefined4 *)puVar8[-0xe2];
  *puVar13 = uVar25;
  puVar13[1] = uVar21;
  puVar13 = (undefined4 *)puVar8[-0xe1];
  *puVar13 = uVar22;
  puVar13[1] = uVar26;
  local_80 = objStack_a8[2];
  local_7c = (uint *)(s__cState_Erase_0024de97 + 1);
  if (puVar8[-0xe7] < 2) {
    uVar18 = puVar8[-0xe6];
  }
  else {
    uVar18 = puVar8[-0xe6] + 0x24;
  }
  puVar23 = *(uint **)(uVar18 + 4);
  (**(code **)(objStack_a8[2] + 8))(&local_80);
  uVar28 = 0;
  do {
    if (*(char *)((int)local_7c + uVar28) == '\0') {
      if ((int)uVar28 < 0x40001) goto LAB_0024dc90;
      break;
    }
    uVar28 = uVar28 + 1;
  } while ((int)uVar28 < 0x40001);
  uVar28 = 0;
LAB_0024dc90:
  if (*(int *)(uVar18 + 8) <= (int)uVar28) {
    uVar28 = *(int *)(uVar18 + 8) - 1;
  }
  (**(code **)(local_80 + 8))(&local_80);
  func_0010E3C4(puVar23,local_7c,uVar28);
  *(undefined1 *)((int)puVar23 + uVar28) = 0;
  uVar18 = puVar8[-0xe3];
  uVar25 = puVar6[8];
  uVar22 = puVar6[4];
  uVar26 = puVar6[7];
  uVar9 = puVar6[5];
  uVar21 = puVar6[9];
  *(undefined4 *)(uVar18 + 8) = puVar6[6];
  *(undefined4 *)(uVar18 + 0xc) = uVar26;
  uVar18 = puVar8[-0xe2];
  *(undefined4 *)(uVar18 + 8) = uVar25;
  *(undefined4 *)(uVar18 + 0xc) = uVar21;
  uVar18 = puVar8[-0xe1];
  *(undefined4 *)(uVar18 + 8) = uVar22;
  *(undefined4 *)(uVar18 + 0xc) = uVar9;
  piVar5 = (int *)func_00521028((int)puVar19);
  (**(code **)(*piVar5 + 8))(piVar5);
  func_003529A0(auStack_78,piVar5[1],puVar8 + -0x124);
  func_002C41BC((int *)(puVar8 + -0x124),auStack_78,0);
  if (2 < uVar24) {
    uVar24 = 1;
  }
  func_003521F0((int)(puVar8 + -0x123),uVar24);
  iVar7 = (int)(char)puVar8[-0xe8];
  if (iVar7 != -1) {
    uVar18 = puVar8[-0xe1];
    pcVar17 = *(code **)(uVar18 + iVar7 * 8);
    if ((pcVar17 != (code *)0x0) ||
       ((uVar24 = *(uint *)(uVar18 + iVar7 * 8 + 4), (uVar24 & 1) != 0 && (uVar24 != 0)))) {
      uVar18 = *(uint *)(uVar18 + iVar7 * 8 + 4);
      piVar5 = (int *)(puVar8[-0xe4] + ((int)uVar18 >> 1));
      if ((uVar18 & 1) != 0) {
        pcVar17 = *(code **)(pcVar17 + *piVar5);
      }
      (*pcVar17)(piVar5,0);
    }
  }
  uVar18 = puVar8[-0xe8];
  *(undefined1 *)(puVar8 + -0xe8) = 0;
  puVar8[-0xe9] = 0;
  *(char *)((int)puVar8 + -0x39f) = (char)uVar18;
  if (puVar8[-0xe5] != 0) {
    piVar5 = (int *)puVar8[-0xe6];
    (**(code **)(*piVar5 + 8))(piVar5);
    objStack_a8[1] = piVar5[1];
    objStack_a8[0] = objStack_a8[2];
    func_0010BEB4(puVar8[-0xe5],(int *)objStack_a8);
  }
  iVar7 = (int)(char)puVar8[-0xe8];
  uVar18 = puVar8[-0xe3];
  pcVar17 = *(code **)(uVar18 + iVar7 * 8);
  if ((pcVar17 != (code *)0x0) ||
     ((uVar24 = *(uint *)(uVar18 + iVar7 * 8 + 4), (uVar24 & 1) != 0 && (uVar24 != 0)))) {
    uVar18 = *(uint *)(uVar18 + iVar7 * 8 + 4);
    if ((uVar18 & 1) != 0) {
      pcVar17 = *(code **)(pcVar17 + *(int *)(puVar8[-0xe4] + ((int)uVar18 >> 1)));
    }
    (*pcVar17)((int)(puVar8[-0xe4]) + ((int)uVar18 >> 1));
  }
  func_0024C5D0((int)puVar19);
  return puVar19;
}

