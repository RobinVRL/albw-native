#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_001bf234;
extern float DAT_001bf238;
extern uint DAT_001bf250;
extern float DAT_001bf254;
extern float DAT_001bf258;
extern float DAT_001bf25c;
extern float *DAT_001bf260;
extern undefined4 DAT_001bf610;
extern int *DAT_001bf614;
extern undefined4 *DAT_001bf618;
extern undefined *DAT_001bf61c;
extern int DAT_001bf620;
extern char s_Actor_BoardHook_kcl_001bf23c[];
extern char s_cState_Wait_001bf624[];
extern char s_cf_001bf23c[];

// USA 001BED8C <- EU 001BED8C (Ghidra, non-matching)
// GLOBAL DAT_001bf234 int
// GLOBAL DAT_001bf238 float
// GLOBAL DAT_001bf250 uint
// GLOBAL DAT_001bf254 float
// GLOBAL DAT_001bf258 float
// GLOBAL DAT_001bf25c float
// GLOBAL DAT_001bf260 float *
// GLOBAL DAT_001bf610 undefined4
// GLOBAL DAT_001bf614 int *
// GLOBAL DAT_001bf618 undefined4 *
// GLOBAL DAT_001bf61c undefined *
// GLOBAL DAT_001bf620 int
// GLOBAL s_cf_001bf23c string
// GLOBAL s_cState_Wait_001bf624 string

/* WARNING: Variable defined which should be unmapped: objStack_98 */

undefined4 * func_001BED8C(undefined4 *param_1,uint *param_2)

{
  undefined1 uVar1;
  float *pfVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_98 ((uint *)(albw_frame + 0x8))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_60 ((uint *)(albw_frame + 0x40))
  #define uStack_4d (*(undefined1 *)(albw_frame + 0x53))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(char * *)(albw_frame + 0x5c))
  #define auStack_40 ((uint *)(albw_frame + 0x60))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define local_34 (*(uint * *)(albw_frame + 0x6c))
  piVar4 = func_00150E40(param_1,param_2);
  iVar9 = DAT_001bf234;
  *piVar4 = DAT_001bf234;
  piVar4[200] = iVar9 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar13 = puVar5 + -0x103;
  objStack_98[1] = 0;
  objStack_98[0] = 1;
  objStack_98[2] = 0;
  uVar6 = func_0014E428((int)puVar13,0,0,0,1,0,0);
  puVar5[9] = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  puVar5[10] = puVar8;
  objStack_98[0] = param_2[7];
  objStack_98[1] = param_2[8];
  objStack_98[2] = param_2[9];
  piVar15 = puVar5 + 10;
  func_0049216C(&local_80,objStack_98,(float *)(puVar5 + -0xf));
  iVar9 = puVar5[9];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar9 + 0x80),&local_80);
  iVar9 = puVar5[9];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  *(uint *)(iVar9 + 0x74) = param_2[4];
  *(uint *)(iVar9 + 0x78) = param_2[5];
  *(uint *)(iVar9 + 0x7c) = param_2[6];
  piVar4 = (int *)puVar5[9];
  (**(code **)(*piVar4 + 0x10))(piVar4,0x24);
  local_48 = DAT_001bf238;
  if (*piVar15 == 0) goto LAB_001bf2f0;
  local_44 = s_Actor_BoardHook_kcl_001bf23c;
  objStack_98[1] = (uint)(objStack_98 + 3);
  objStack_98[2] = 0x40;
  uStack_4d = 0;
  (*(undefined1 *)((char *)&objStack_98[3] + 0)) = 0;
  objStack_98[0] = DAT_001bf250;
  func_00111A20((int)objStack_98,s_Actor_BoardHook_kcl_001bf23c,auStack_40);
  func_004EDB28(puVar5[10],(int)objStack_98);
  func_00491624(&local_88,param_2[7],param_2[8],param_2[9]);
  fVar25 = DAT_001bf258;
  fVar24 = DAT_001bf254;
  iVar9 = *(int *)(*piVar15 + 0x14);
  fVar19 = local_88 - *(float *)(iVar9 + 0x18);
  bVar17 = DAT_001bf258 == fVar19;
  bVar18 = fVar19 <= DAT_001bf258;
  if (!bVar18 || bVar17) {
    bVar17 = fVar19 == DAT_001bf254;
    bVar18 = DAT_001bf254 <= fVar19;
  }
  if (bVar18 && !bVar17) {
LAB_001bf060:
    bVar17 = false;
  }
  else {
    fVar19 = local_84 - *(float *)(iVar9 + 0x1c);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_80 - *(float *)(iVar9 + 0x20);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_7c - *(float *)(iVar9 + 0x24);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_78 - *(float *)(iVar9 + 0x28);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_74 - *(float *)(iVar9 + 0x2c);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_70 - *(float *)(iVar9 + 0x30);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_6c - *(float *)(iVar9 + 0x34);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    fVar19 = local_68 - *(float *)(iVar9 + 0x38);
    bVar17 = DAT_001bf258 == fVar19;
    bVar18 = fVar19 <= DAT_001bf258;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == DAT_001bf254;
      bVar18 = DAT_001bf254 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf060;
    bVar17 = true;
  }
  if (!bVar17) {
    bVar3 = *(byte *)(iVar9 + 0xa8);
    *(byte *)(iVar9 + 0xa8) = bVar3 | 8;
    uVar6 = DAT_001bf610;
    fVar19 = DAT_001bf25c;
    if ((((local_88 == 1.0) && (local_84 == DAT_001bf25c && local_80 == DAT_001bf25c)) &&
        (local_7c == DAT_001bf25c && local_78 == 1.0)) &&
       ((local_74 == DAT_001bf25c && local_70 == DAT_001bf25c &&
        (local_6c == DAT_001bf25c && local_68 == 1.0)))) {
      *(undefined4 *)(iVar9 + 0x18) = DAT_001bf610;
      *(float *)(iVar9 + 0x1c) = fVar19;
      *(float *)(iVar9 + 0x20) = fVar19;
      bVar3 = bVar3 & 0xfb | 8;
      *(float *)(iVar9 + 0x24) = fVar19;
      *(undefined4 *)(iVar9 + 0x28) = uVar6;
      *(float *)(iVar9 + 0x2c) = fVar19;
      *(float *)(iVar9 + 0x30) = fVar19;
      *(float *)(iVar9 + 0x34) = fVar19;
      *(undefined4 *)(iVar9 + 0x38) = uVar6;
    }
    else {
      func_001151CC((undefined4 *)(iVar9 + 0x18),&local_88);
      bVar3 = *(byte *)(iVar9 + 0xa8) | 4;
    }
    *(byte *)(iVar9 + 0xa8) = bVar3;
  }
  func_0043625C(*(int **)(puVar5[10] + 0x14),puVar5 + -0xf);
  iVar9 = *(int *)(*piVar15 + 0x14);
  fVar19 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar9 + 4);
  bVar17 = fVar25 == fVar19;
  bVar18 = fVar19 <= fVar25;
  if (!bVar18 || bVar17) {
    bVar17 = fVar19 == fVar24;
    bVar18 = fVar24 <= fVar19;
  }
  if (bVar18 && !bVar17) {
LAB_001bf18c:
    bVar17 = false;
  }
  else {
    fVar19 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar9 + 8);
    bVar17 = fVar25 == fVar19;
    bVar18 = fVar19 <= fVar25;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == fVar24;
      bVar18 = fVar24 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf18c;
    fVar19 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar9 + 0xc);
    bVar17 = fVar25 == fVar19;
    bVar18 = fVar19 <= fVar25;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == fVar24;
      bVar18 = fVar24 <= fVar19;
    }
    if (bVar18 && !bVar17) goto LAB_001bf18c;
    bVar17 = true;
  }
  if (!bVar17) {
    *(byte *)(iVar9 + 0xa8) = *(byte *)(iVar9 + 0xa8) | 8;
    pfVar2 = DAT_001bf260;
    fVar19 = ALBW_AS_F32(param_2[4]) - *DAT_001bf260;
    bVar17 = fVar25 == fVar19;
    bVar18 = fVar19 <= fVar25;
    if (!bVar18 || bVar17) {
      bVar17 = fVar19 == fVar24;
      bVar18 = fVar24 <= fVar19;
    }
    if (bVar18 && !bVar17) {
LAB_001bf294:
      *(uint *)(iVar9 + 4) = param_2[4];
      *(uint *)(iVar9 + 8) = param_2[5];
      *(uint *)(iVar9 + 0xc) = param_2[6];
      bVar3 = *(byte *)(iVar9 + 0xa8) | 2;
    }
    else {
      fVar19 = ALBW_AS_F32(param_2[5]) - DAT_001bf260[1];
      bVar17 = fVar25 == fVar19;
      bVar18 = fVar19 <= fVar25;
      if (!bVar18 || bVar17) {
        bVar17 = fVar19 == fVar24;
        bVar18 = fVar24 <= fVar19;
      }
      if (bVar18 && !bVar17) goto LAB_001bf294;
      fVar19 = ALBW_AS_F32(param_2[6]) - DAT_001bf260[2];
      bVar17 = fVar25 == fVar19;
      bVar18 = fVar19 <= fVar25;
      if (!bVar18 || bVar17) {
        bVar17 = fVar19 == fVar24;
        bVar18 = fVar24 <= fVar19;
      }
      if (bVar18 && !bVar17) goto LAB_001bf294;
      *(float *)(iVar9 + 4) = *DAT_001bf260;
      *(float *)(iVar9 + 8) = pfVar2[1];
      *(float *)(iVar9 + 0xc) = pfVar2[2];
      bVar3 = *(byte *)(iVar9 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar9 + 0xa8) = bVar3;
  }
  local_60[0] = puVar5[-0x50];
  func_004EDAD0(puVar5[10],local_60);
  *(undefined2 *)(*piVar15 + 0x2c) = *(undefined2 *)(puVar5 + -0xee);
  func_004ED9C8(*piVar15);
  func_004A879C(*DAT_001bf614,*piVar15,2);
LAB_001bf2f0:
  puVar5[5] = puVar13;
  *(undefined1 *)((int)puVar5 + 6) = 1;
  iVar9 = func_0010BA78(0x10);
  puVar8 = DAT_001bf618;
  puVar5[6] = iVar9;
  puVar5[7] = iVar9 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar10 = 1;
  puVar7 = (undefined4 *)(iVar9 + -8);
  do {
    uVar6 = puVar8[7];
    iVar10 = iVar10 + -1;
    puVar7[2] = puVar8[6];
    puVar7[3] = uVar6;
    uVar6 = puVar8[7];
    puVar7[4] = puVar8[6];
    puVar7[5] = uVar6;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar3 = *(byte *)((int)puVar5 + 6);
  uVar14 = (uint)bVar3;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[8] = puVar7;
  if (uVar14 != 0) {
    puVar11 = puVar7 + -2;
    if ((bVar3 & 1) != 0) {
      uVar6 = puVar8[5];
      *puVar7 = puVar8[4];
      puVar7[1] = uVar6;
      puVar11 = puVar7;
    }
    for (iVar9 = (int)uVar14 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar6 = puVar8[5];
      puVar11[2] = puVar8[4];
      puVar11[3] = uVar6;
      uVar6 = puVar8[5];
      puVar11[4] = puVar8[4];
      puVar11[5] = uVar6;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 1;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_001bf61c,0x24,1);
  }
  if (iVar9 != 0) {
    puVar5[2] = 1;
    puVar5[3] = iVar9;
  }
  iVar9 = DAT_001bf620;
  puVar5[-0x2e] = puVar5;
  *(undefined2 *)(iVar9 + (int)puVar13) = 1;
  local_38 = local_48;
  local_34 = (uint *)s_cState_Wait_001bf624;
  iVar9 = puVar5[3];
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)((int)ALBW_AS_U32(local_48) + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001bf47c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001bf47c:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar14) {
    uVar14 = iVar9 - 1;
  }
  (**(code **)((int)ALBW_AS_U32(local_38) + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar6 = puVar8[1];
  uVar20 = puVar8[2];
  uVar21 = puVar8[3];
  uVar22 = puVar8[4];
  uVar23 = puVar8[5];
  *puVar7 = *puVar8;
  puVar7[1] = uVar6;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar20;
  puVar8[1] = uVar21;
  puVar8 = (undefined4 *)puVar5[8];
  *puVar8 = uVar22;
  puVar8[1] = uVar23;
  iVar9 = (int)*(char *)(puVar5 + 1);
  if (iVar9 != -1) {
    iVar10 = puVar5[8];
    pcVar12 = *(code **)(iVar10 + iVar9 * 8);
    if ((pcVar12 != (code *)0x0) ||
       ((uVar14 = *(uint *)(iVar10 + iVar9 * 8 + 4), (uVar14 & 1) != 0 && (uVar14 != 0)))) {
      uVar14 = *(uint *)(iVar10 + iVar9 * 8 + 4);
      piVar4 = (int *)(puVar5[5] + ((int)uVar14 >> 1));
      if ((uVar14 & 1) != 0) {
        pcVar12 = *(code **)(pcVar12 + *piVar4);
      }
      (*pcVar12)(piVar4,0);
    }
  }
  uVar1 = *(undefined1 *)(puVar5 + 1);
  *(undefined1 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 5) = uVar1;
  if (puVar5[4] != 0) {
    piVar4 = (int *)puVar5[3];
    (**(code **)(*piVar4 + 8))(piVar4);
    local_84 = ALBW_AS_F32(piVar4[1]);
    local_88 = local_48;
    func_0010BEB4(puVar5[4],(int *)&local_88);
  }
  iVar10 = (int)*(char *)(puVar5 + 1);
  iVar9 = puVar5[6];
  pcVar12 = *(code **)(iVar9 + iVar10 * 8);
  if ((pcVar12 != (code *)0x0) ||
     ((uVar14 = *(uint *)(iVar9 + iVar10 * 8 + 4), (uVar14 & 1) != 0 && (uVar14 != 0)))) {
    uVar14 = *(uint *)(iVar9 + iVar10 * 8 + 4);
    if ((uVar14 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *(int *)(puVar5[5] + ((int)uVar14 >> 1)));
    }
    (*pcVar12)((int)(puVar5[5]) + ((int)uVar14 >> 1));
  }
  if (puVar5[10] != 0) {
    func_0043625C(*(int **)(puVar5[10] + 0x14),puVar5 + -0xf);
    func_004ED9C8(*piVar15);
  }
  return puVar13;
}

