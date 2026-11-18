#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065B7AC(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c13e8;
extern undefined4 DAT_001c13ec;
extern undefined4 *DAT_001c13f0;
extern undefined4 DAT_001c13f4;
extern float *DAT_001c13f8;
extern int DAT_001c13fc;
extern undefined4 DAT_001c1400;
extern float DAT_001c1404;
extern int *DAT_001c1408;
extern undefined *DAT_001c140c;
extern int DAT_001c1410;
extern int DAT_001c1424;
extern uint *DAT_001c184c;
extern char s_cState_Break_001c185c[];
extern char s_cState_Erase_001c186c[];
extern char s_cState_Melt_001c1850[];
extern char s_cState_Sleep_001c1414[];

// USA 001C0FD0 <- EU 001C0FD0 (Ghidra, non-matching)
// GLOBAL DAT_001c13e8 int
// GLOBAL DAT_001c13ec undefined4
// GLOBAL DAT_001c13f0 undefined4 *
// GLOBAL DAT_001c13f4 undefined4
// GLOBAL DAT_001c13f8 float *
// GLOBAL DAT_001c13fc int
// GLOBAL DAT_001c1400 undefined4
// GLOBAL DAT_001c1404 float
// GLOBAL DAT_001c1408 int *
// GLOBAL DAT_001c140c undefined *
// GLOBAL DAT_001c1410 int
// GLOBAL DAT_001c1424 int
// GLOBAL DAT_001c184c uint *
// GLOBAL s_cState_Break_001c185c string
// GLOBAL s_cState_Erase_001c186c string
// GLOBAL s_cState_Melt_001c1850 string
// GLOBAL s_cState_Sleep_001c1414 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */
/* WARNING: Variable defined which should be unmapped: objStack_54 */

undefined4 * func_001C0FD0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define objStack_54 ((uint *)(albw_frame + 0xc))
  #define local_4c (*(uint *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(uint * *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  piVar3 = func_00150E40(param_1,param_2);
  iVar8 = DAT_001c13e8;
  *piVar3 = DAT_001c13e8;
  piVar3[200] = iVar8 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar13 = puVar4 + -0x103;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  puVar4[0xb] = puVar6;
  piVar3 = puVar4 + 0xb;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0034CAA0(puVar5);
  }
  puVar4[0xc] = puVar6;
  puVar6 = DAT_001c13f0;
  uVar17 = DAT_001c13ec;
  puVar4[0xd] = DAT_001c13ec;
  puVar4[0xe] = uVar17;
  puVar4[0xf] = uVar17;
  puVar4[0x1a] = 0;
  *(undefined1 *)(puVar4 + 0x1b) = 0;
  puVar4[0x1d] = 0;
  uVar10 = puVar6[0x17];
  puVar4[0x1e] = puVar6[0x16];
  puVar4[0x1f] = uVar10;
  puVar4[0x1c] = DAT_001c13f4;
  objStack_58[0] = 1;
  objStack_54[0] = 0;
  objStack_54[1] = 0;
  piVar7 = (int *)func_0014E428((int)puVar13,0,0,0,1,0,0);
  puVar4[9] = piVar7;
  (**(code **)(*piVar7 + 0x10))(piVar7,0x24);
  uVar10 = *puVar6;
  uVar11 = puVar6[1];
  puVar4[0x1d] = puVar13;
  puVar4[0x1e] = uVar10;
  puVar4[0x1f] = uVar11;
  func_00491624((float *)(puVar4 + 0x11),param_2[7],param_2[8],param_2[9]);
  local_40 = *DAT_001c13f8;
  local_3c = DAT_001c13f8[1];
  fStack_38 = DAT_001c13f8[2];
  func_00115CE4(&local_40,(float *)(puVar4 + 0x11),&local_40);
  uVar33 = CONCAT44(uVar17,DAT_001c1400);
  if ((int)ALBW_AS_U32(local_3c) < DAT_001c13fc) {
    puVar4[0x10] = 1;
    iVar8 = func_0054D964((int)puVar13,0);
    puVar4[10] = iVar8;
    objStack_58[0] = (uint)uVar33;
    objStack_54[0] = (uint)ALBW_AS_U32((*(float *)(iVar8 + 0x5c) * DAT_001c1404));
    objStack_54[1] = objStack_58[0];
    func_00115CE4((float *)objStack_58,(float *)(puVar4 + 0x11),(float *)objStack_58);
    *(uint *)(iVar8 + 4) = param_2[1];
    *(uint *)(iVar8 + 8) = param_2[2];
    *(uint *)(iVar8 + 0xc) = param_2[3];
    func_00115C54((float *)(iVar8 + 4),(float *)(iVar8 + 4),(float *)objStack_58);
    func_001151CC((undefined4 *)(iVar8 + 100),puVar4 + 0x11);
    iVar8 = puVar4[10];
  }
  else {
    puVar4[0x10] = 0;
    iVar8 = func_0054D964((int)puVar13,1);
    puVar4[10] = iVar8;
  }
  (*(undefined2 *)((char *)&objStack_58[0] + 0)) = 0x124;
  *(undefined2 *)(iVar8 + 0x28) = 0x124;
  *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) & 0xffffe0ff;
  if (puVar4[0x10] == 0) {
    func_00115154((float *)objStack_58,(float *)objStack_54,*DAT_001c184c);
    iVar8 = puVar4[9];
    fVar23 = -ALBW_AS_F32(objStack_58[0]);
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    fVar24 = ALBW_AS_F32(puVar4[0x14]);
    fVar19 = ALBW_AS_F32(puVar4[0x17]);
    fVar34 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
    fVar32 = ALBW_AS_F32(uVar33);
    fVar22 = ALBW_AS_F32(puVar4[0x11]) * fVar32;
    fVar21 = fVar24 * fVar32;
    fVar20 = fVar19 * fVar32;
    fVar26 = ALBW_AS_F32(puVar4[0x12]);
    fVar27 = ALBW_AS_F32(puVar4[0x15]);
    fVar28 = ALBW_AS_F32(puVar4[0x18]);
    fVar25 = -fVar23;
    fVar29 = ALBW_AS_F32(puVar4[0x13]);
    fVar30 = ALBW_AS_F32(puVar4[0x16]);
    fVar31 = ALBW_AS_F32(puVar4[0x19]);
    *(float *)(iVar8 + 0x80) = ALBW_AS_F32(puVar4[0x11]) * fVar34 + fVar26 * fVar32 + fVar29 * fVar32;
    *(float *)(iVar8 + 0x84) = fVar22 + fVar26 * ALBW_AS_F32(objStack_54[0]) + fVar29 * fVar25;
    *(float *)(iVar8 + 0x88) = fVar22 + fVar26 * fVar23 + fVar29 * ALBW_AS_F32(objStack_54[0]);
    *(float *)(iVar8 + 0x90) = fVar24 * fVar34 + fVar27 * fVar32 + fVar30 * fVar32;
    *(float *)(iVar8 + 0x94) = fVar21 + fVar27 * ALBW_AS_F32(objStack_54[0]) + fVar30 * fVar25;
    *(float *)(iVar8 + 0x98) = fVar21 + fVar27 * fVar23 + fVar30 * ALBW_AS_F32(objStack_54[0]);
    *(float *)(iVar8 + 0xa0) = fVar19 * fVar34 + fVar28 * fVar32 + fVar31 * fVar32;
    *(float *)(iVar8 + 0xa4) = fVar20 + fVar28 * ALBW_AS_F32(objStack_54[0]) + fVar31 * fVar25;
    *(float *)(iVar8 + 0xa8) = fVar20 + fVar28 * fVar23 + fVar31 * ALBW_AS_F32(objStack_54[0]);
    iVar8 = puVar4[9];
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar8 + 0x8c) = puVar4[-0xf];
    *(undefined4 *)(iVar8 + 0x9c) = puVar4[-0xe];
    *(undefined4 *)(iVar8 + 0xac) = puVar4[-0xd];
  }
  else {
    iVar8 = puVar4[9];
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar8 + 0x80),puVar4 + 0x11,puVar4 + -0xf);
  }
  iVar8 = puVar4[9];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  fVar19 = ALBW_AS_F32(puVar4[-0xfd]);
  fVar20 = ALBW_AS_F32(puVar4[-0xfc]);
  fVar22 = ALBW_AS_F32(puVar4[0xe]);
  fVar24 = ALBW_AS_F32(puVar4[0xf]);
  *(float *)(iVar8 + 0x74) = ALBW_AS_F32(puVar4[-0xfe]) * ALBW_AS_F32(puVar4[0xd]);
  *(float *)(iVar8 + 0x78) = fVar19 * fVar22;
  *(float *)(iVar8 + 0x7c) = fVar20 * fVar24;
  func_004CEAF0(puVar4[9]);
  *(undefined4 *)(puVar4[0xb] + 0x18) = puVar4[10];
  local_4c = puVar4[-0x50];
  func_004EDAD0(*piVar3,&local_4c);
  *(undefined2 *)(*piVar3 + 0x2c) = *(undefined2 *)(puVar4 + -0xee);
  func_004ED9C8(*piVar3);
  func_004A879C(*DAT_001c1408,*piVar3,2);
  *(undefined1 *)((int)puVar4 + 6) = 4;
  puVar4[5] = puVar13;
  iVar8 = func_0010BA78(0x40);
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar12 = 4;
  puVar5 = (undefined4 *)(iVar8 + -8);
  do {
    uVar17 = puVar6[0x15];
    iVar12 = iVar12 + -1;
    puVar5[2] = puVar6[0x14];
    puVar5[3] = uVar17;
    uVar17 = puVar6[0x15];
    puVar5[4] = puVar6[0x14];
    puVar5[5] = uVar17;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar5;
  if (uVar15 != 0) {
    puVar9 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar6[7];
      *puVar5 = puVar6[6];
      puVar5[1] = uVar17;
      puVar9 = puVar5;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar17 = puVar6[7];
      puVar9[2] = puVar6[6];
      puVar9[3] = uVar17;
      uVar17 = puVar6[7];
      puVar9[4] = puVar6[6];
      puVar9[5] = uVar17;
      puVar9 = puVar9 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar8 = func_00100118((int)(puVar5 + 2),DAT_001c140c,0x24,4);
  }
  if (iVar8 != 0) {
    puVar4[2] = 4;
    puVar4[3] = iVar8;
  }
  iVar8 = DAT_001c1410;
  puVar4[-0x2e] = puVar4;
  iVar12 = DAT_001c1424;
  *(undefined2 *)(iVar8 + (int)puVar13) = 4;
  local_44 = (uint *)s_cState_Sleep_001c1414;
  local_48 = iVar12;
  iVar8 = puVar4[3];
  puVar16 = *(uint **)(iVar8 + 4);
  objStack_58[0] = (uint)puVar4;
  (**(code **)(iVar12 + 8))(&local_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c1570;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c1570:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar15) {
    uVar15 = iVar8 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar16,local_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar17 = puVar6[5];
  uVar18 = puVar6[6];
  uVar10 = puVar6[4];
  uVar14 = puVar6[7];
  uVar11 = puVar6[3];
  *puVar5 = puVar6[2];
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar4[7];
  puVar5[1] = uVar17;
  *puVar5 = uVar10;
  puVar5 = (undefined4 *)puVar4[8];
  puVar5[1] = uVar14;
  *puVar5 = uVar18;
  local_44 = (uint *)s_cState_Melt_001c1850;
  local_48 = iVar12;
  if ((uint)puVar4[2] < 2) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c1638;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c1638:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar16,local_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar8 = puVar4[6];
  uVar17 = puVar6[6];
  uVar10 = puVar6[7];
  uVar11 = puVar6[9];
  uVar14 = puVar6[10];
  uVar18 = puVar6[0xb];
  *(undefined4 *)(iVar8 + 8) = puVar6[8];
  *(undefined4 *)(iVar8 + 0xc) = uVar11;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  local_44 = (uint *)s_cState_Break_001c185c;
  local_48 = iVar12;
  if ((uint)puVar4[2] < 3) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c16f8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c16f8:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar16,local_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar8 = puVar4[6];
  uVar14 = puVar6[6];
  uVar17 = puVar6[7];
  uVar10 = puVar6[0xe];
  uVar11 = puVar6[0xf];
  uVar18 = puVar6[0xd];
  *(undefined4 *)(iVar8 + 0x10) = puVar6[0xc];
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar10;
  *(undefined4 *)(iVar8 + 0x14) = uVar11;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar14;
  *(undefined4 *)(iVar8 + 0x14) = uVar17;
  local_44 = (uint *)s_cState_Erase_001c186c;
  local_48 = iVar12;
  uVar15 = puVar4[2];
  if (uVar15 < 4) {
    iVar8 = puVar4[3];
    uVar2 = uVar15;
  }
  else {
    iVar8 = iVar12;
    uVar2 = puVar4[3];
  }
  if (3 < uVar15) {
    iVar8 = uVar2 + 0x6c;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001c17cc;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001c17cc:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar16,local_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar8 = puVar4[6];
  uVar17 = puVar6[0x13];
  uVar10 = puVar6[0x12];
  uVar11 = puVar6[0x11];
  uVar14 = puVar6[6];
  uVar18 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x18) = puVar6[0x10];
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar10;
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar14;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  func_0065B7AC((undefined4 *)objStack_58[0],0);
  return puVar13;
}

