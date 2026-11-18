#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3FD8(int param_1);
extern int func_001E40F4(int param_1,int param_2);
extern void func_001E4378(int param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00305AF4(undefined4 *param_1,uint *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_0035aa84;
extern int DAT_0035aa88;
extern undefined4 DAT_0035aa8c;
extern uint DAT_0035aaac;
extern float DAT_0035aab0;
extern float DAT_0035aab4;
extern float DAT_0035aab8;
extern float *DAT_0035aabc;
extern int *DAT_0035ac14;
extern int DAT_0035ac18;
extern int DAT_0035ac1c;
extern undefined DAT_0035ac20;
extern char s_Actor_DoorHyruleSmall_kcl_0035aa90[];
extern char s_cf_0035aa90[];

// USA 0035A62C <- EU 0035A608 (Ghidra, non-matching)
// GLOBAL DAT_0035aa84 int
// GLOBAL DAT_0035aa88 int
// GLOBAL DAT_0035aa8c undefined4
// GLOBAL DAT_0035aaac uint
// GLOBAL DAT_0035aab0 float
// GLOBAL DAT_0035aab4 float
// GLOBAL DAT_0035aab8 float
// GLOBAL DAT_0035aabc float *
// GLOBAL DAT_0035ac14 int *
// GLOBAL DAT_0035ac18 int
// GLOBAL DAT_0035ac1c int
// GLOBAL DAT_0035ac20 undefined
// GLOBAL s_cf_0035aa90 string

/* WARNING: Variable defined which should be unmapped: objStack_f4 */

int * func_0035A62C(undefined4 *param_1,uint *param_2)

{
  float *pfVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define objStack_f4 ((uint *)(albw_frame + 0xc))
  #define afStack_cc ((float *)(albw_frame + 0x34))
  #define local_98 (*(int *)(albw_frame + 0x68))
  #define local_94 (*(uint * *)(albw_frame + 0x6c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x70))
  #define local_8c (*(uint * *)(albw_frame + 0x74))
  #define local_88 (*(int *)(albw_frame + 0x78))
  #define local_84 ((uint *)(albw_frame + 0x7c))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0xbb))
  #define local_44 (*(uint *)(albw_frame + 0xbc))
  #define local_40 (*(int *)(albw_frame + 0xc0))
  #define local_3c (*(undefined * *)(albw_frame + 0xc4))
  piVar3 = (int *)func_00305AF4(param_1,param_2);
  iVar6 = DAT_0035aa84 + 0x5c;
  *piVar3 = DAT_0035aa84;
  piVar3[200] = iVar6;
  objStack_f4[0] = 0;
  objStack_f4[1] = 0;
  iVar6 = func_0014E428((int)piVar3,0,0,0,1,0,0);
  piVar3[0x11f] = iVar6;
  func_001E3FD8((int)piVar3);
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  iVar6 = DAT_0035aa88;
  piVar9 = piVar3 + 0x121;
  piVar3[0x121] = (int)puVar5;
  if (puVar5 == (undefined4 *)0x0) goto LAB_0035ab78;
  local_88 = 0x40;
  uStack_45 = 0;
  (*(undefined1 *)((char *)&local_84[0] + 0)) = 0;
  local_98 = iVar6;
  local_90 = DAT_0035aa8c;
  local_94 = (uint *)s_Actor_DoorHyruleSmall_kcl_0035aa90;
  local_8c = local_84;
  (**(code **)(iVar6 + 8))(&local_98);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_94 + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_0035a6fc;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_0035a6fc:
  if (local_88 <= (int)uVar7) {
    uVar7 = local_88 - 1;
  }
  (**(code **)(local_98 + 8))(&local_98);
  func_0010E3C4(local_84,local_94,uVar7);
  *(undefined1 *)((int)local_84 + uVar7) = 0;
  func_004EDB28(piVar3[0x121],(int)&local_90);
  objStack_f4[0] = DAT_0035aaac;
  objStack_f4[1] = (uint)ALBW_AS_U32(DAT_0035aab0);
  objStack_f4[2] = (uint)ALBW_AS_U32(DAT_0035aab0);
  objStack_f4[3] = (uint)ALBW_AS_U32(DAT_0035aab0);
  objStack_f4[4] = DAT_0035aaac;
  objStack_f4[5] = (uint)ALBW_AS_U32(DAT_0035aab0);
  objStack_f4[6] = (uint)ALBW_AS_U32(DAT_0035aab0);
  objStack_f4[7] = (uint)ALBW_AS_U32(DAT_0035aab0);
  objStack_f4[8] = DAT_0035aaac;
  fVar13 = DAT_0035aab0;
  uVar7 = DAT_0035aaac;
  func_00491624(afStack_cc,0,piVar3[0xfa],0);
  func_0011549C((float *)objStack_f4,(float *)objStack_f4,afStack_cc);
  fVar15 = DAT_0035aab8;
  fVar14 = DAT_0035aab4;
  iVar8 = *(int *)(*piVar9 + 0x14);
  fVar12 = ALBW_AS_F32(objStack_f4[0]) - *(float *)(iVar8 + 0x18);
  bVar10 = DAT_0035aab8 == fVar12;
  bVar11 = fVar12 <= DAT_0035aab8;
  if (!bVar11 || bVar10) {
    bVar10 = fVar12 == DAT_0035aab4;
    bVar11 = DAT_0035aab4 <= fVar12;
  }
  if (bVar11 && !bVar10) {
LAB_0035a8e4:
    bVar10 = false;
  }
  else {
    fVar12 = ALBW_AS_F32(objStack_f4[1]) - *(float *)(iVar8 + 0x1c);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[2]) - *(float *)(iVar8 + 0x20);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[3]) - *(float *)(iVar8 + 0x24);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[4]) - *(float *)(iVar8 + 0x28);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[5]) - *(float *)(iVar8 + 0x2c);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[6]) - *(float *)(iVar8 + 0x30);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[7]) - *(float *)(iVar8 + 0x34);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    fVar12 = ALBW_AS_F32(objStack_f4[8]) - *(float *)(iVar8 + 0x38);
    bVar10 = DAT_0035aab8 == fVar12;
    bVar11 = fVar12 <= DAT_0035aab8;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == DAT_0035aab4;
      bVar11 = DAT_0035aab4 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0035a8e4;
    bVar10 = true;
  }
  if (!bVar10) {
    bVar2 = *(byte *)(iVar8 + 0xa8);
    *(byte *)(iVar8 + 0xa8) = bVar2 | 8;
    if ((((objStack_f4[0] == 0x3f800000 && ALBW_AS_F32(objStack_f4[1]) == fVar13) &&
         (ALBW_AS_F32(objStack_f4[2]) == fVar13 && ALBW_AS_F32(objStack_f4[3]) == fVar13)) &&
        (objStack_f4[4] == 0x3f800000 && ALBW_AS_F32(objStack_f4[5]) == fVar13)) &&
       ((ALBW_AS_F32(objStack_f4[6]) == fVar13 && ALBW_AS_F32(objStack_f4[7]) == fVar13) &&
        objStack_f4[8] == 0x3f800000)) {
      *(uint *)(iVar8 + 0x18) = uVar7;
      *(float *)(iVar8 + 0x1c) = fVar13;
      *(float *)(iVar8 + 0x20) = fVar13;
      bVar2 = bVar2 & 0xfb | 8;
      *(float *)(iVar8 + 0x24) = fVar13;
      *(uint *)(iVar8 + 0x28) = uVar7;
      *(float *)(iVar8 + 0x2c) = fVar13;
      *(float *)(iVar8 + 0x30) = fVar13;
      *(float *)(iVar8 + 0x34) = fVar13;
      *(uint *)(iVar8 + 0x38) = uVar7;
    }
    else {
      func_001151CC((undefined4 *)(iVar8 + 0x18),objStack_f4);
      bVar2 = *(byte *)(iVar8 + 0xa8) | 4;
    }
    *(byte *)(iVar8 + 0xa8) = bVar2;
  }
  func_0043625C(*(int **)(piVar3[0x121] + 0x14),piVar3 + 0xf4);
  pfVar1 = DAT_0035aabc;
  iVar8 = *(int *)(*piVar9 + 0x14);
  fVar13 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar8 + 4);
  bVar10 = fVar15 == fVar13;
  bVar11 = fVar13 <= fVar15;
  if (!bVar11 || bVar10) {
    bVar10 = fVar13 == fVar14;
    bVar11 = fVar14 <= fVar13;
  }
  if (bVar11 && !bVar10) {
LAB_0035aa08:
    bVar10 = false;
  }
  else {
    fVar13 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar8 + 8);
    bVar10 = fVar15 == fVar13;
    bVar11 = fVar13 <= fVar15;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == fVar14;
      bVar11 = fVar14 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0035aa08;
    fVar13 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar8 + 0xc);
    bVar10 = fVar15 == fVar13;
    bVar11 = fVar13 <= fVar15;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == fVar14;
      bVar11 = fVar14 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0035aa08;
    bVar10 = true;
  }
  if (!bVar10) {
    *(byte *)(iVar8 + 0xa8) = *(byte *)(iVar8 + 0xa8) | 8;
    fVar13 = ALBW_AS_F32(param_2[4]) - *pfVar1;
    bVar10 = fVar15 == fVar13;
    bVar11 = fVar13 <= fVar15;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == fVar14;
      bVar11 = fVar14 <= fVar13;
    }
    if (bVar11 && !bVar10) {
LAB_0035ab1c:
      *(uint *)(iVar8 + 4) = param_2[4];
      *(uint *)(iVar8 + 8) = param_2[5];
      *(uint *)(iVar8 + 0xc) = param_2[6];
      bVar2 = *(byte *)(iVar8 + 0xa8) | 2;
    }
    else {
      fVar13 = ALBW_AS_F32(param_2[5]) - pfVar1[1];
      bVar10 = fVar15 == fVar13;
      bVar11 = fVar13 <= fVar15;
      if (!bVar11 || bVar10) {
        bVar10 = fVar13 == fVar14;
        bVar11 = fVar14 <= fVar13;
      }
      if (bVar11 && !bVar10) goto LAB_0035ab1c;
      fVar13 = ALBW_AS_F32(param_2[6]) - pfVar1[2];
      bVar10 = fVar15 == fVar13;
      bVar11 = fVar13 <= fVar15;
      if (!bVar11 || bVar10) {
        bVar10 = fVar13 == fVar14;
        bVar11 = fVar14 <= fVar13;
      }
      if (bVar11 && !bVar10) goto LAB_0035ab1c;
      *(float *)(iVar8 + 4) = *pfVar1;
      *(float *)(iVar8 + 8) = pfVar1[1];
      *(float *)(iVar8 + 0xc) = pfVar1[2];
      bVar2 = *(byte *)(iVar8 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar8 + 0xa8) = bVar2;
  }
  local_44 = piVar3[0xb3];
  func_004EDAD0(piVar3[0x121],&local_44);
  *(short *)(*piVar9 + 0x2c) = (short)piVar3[0x15];
  func_004ED9C8(*piVar9);
  func_004A879C(*DAT_0035ac14,*piVar9,0);
LAB_0035ab78:
  func_001E40F4((int)piVar3,2);
  iVar8 = DAT_0035ac18;
  uVar7 = 0;
  do {
    func_00169678((int)piVar3,uVar7,iVar8 + uVar7 * 8);
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  func_001E4378((int)piVar3);
  if (*(short *)((int)piVar3 + 0x2e) == 0) {
    piVar3[0x127] = DAT_0035ac1c;
  }
  puVar5 = (undefined4 *)func_0010BAB4(0x2cc);
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_3c = &DAT_0035ac20;
    local_40 = iVar6;
    iVar8 = func_002BE9D4(puVar5,&local_40,0,0,1);
  }
  piVar3[0x128] = iVar8;
  return piVar3;
}

