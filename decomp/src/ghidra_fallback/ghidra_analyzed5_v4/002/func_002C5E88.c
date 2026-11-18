#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C5740(int param_1);
extern int func_002C59A8(int param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663068(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c6238;
extern undefined4 *DAT_002c623c;
extern int DAT_002c6240;
extern undefined4 DAT_002c6244;
extern undefined4 DAT_002c6248;
extern undefined4 *DAT_002c624c;
extern undefined4 DAT_002c6250;
extern undefined *DAT_002c6254;
extern int DAT_002c6258;
extern uint DAT_002c6268;
extern undefined4 DAT_002c6498;
extern undefined4 DAT_002c649c;
extern undefined4 DAT_002c64a0;
extern undefined4 DAT_002c64a4;
extern undefined4 DAT_002c64a8;
extern undefined4 DAT_002c64ac;
extern char s_cState_Back_002c648c[];
extern char s_cState_Play_002c625c[];

// USA 002C5E88 <- EU 002C5E64 (Ghidra, non-matching)
// GLOBAL DAT_002c6238 int
// GLOBAL DAT_002c623c undefined4 *
// GLOBAL DAT_002c6240 int
// GLOBAL DAT_002c6244 undefined4
// GLOBAL DAT_002c6248 undefined4
// GLOBAL DAT_002c624c undefined4 *
// GLOBAL DAT_002c6250 undefined4
// GLOBAL DAT_002c6254 undefined *
// GLOBAL DAT_002c6258 int
// GLOBAL DAT_002c6268 uint
// GLOBAL DAT_002c6498 undefined4
// GLOBAL DAT_002c649c undefined4
// GLOBAL DAT_002c64a0 undefined4
// GLOBAL DAT_002c64a4 undefined4
// GLOBAL DAT_002c64a8 undefined4
// GLOBAL DAT_002c64ac undefined4
// GLOBAL s_cState_Back_002c648c string
// GLOBAL s_cState_Play_002c625c string

/* WARNING: Variable defined which should be unmapped: objStack_60 */

undefined4 * func_002C5E88(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(uint * *)(albw_frame + 0x24))
  piVar5 = func_00150E40(param_1,param_2);
  puVar15 = DAT_002c623c;
  iVar11 = DAT_002c6238 + 0x54;
  *piVar5 = DAT_002c6238;
  piVar5[200] = iVar11;
  piVar5[0x103] = 0;
  piVar5[0x104] = 0;
  piVar5[0x105] = 0;
  piVar5[0x107] = 0;
  iVar11 = puVar15[0xf];
  piVar5[0x108] = puVar15[0xe];
  piVar5[0x109] = iVar11;
  piVar5[0x106] = DAT_002c6240;
  puVar6 = func_0010A794(piVar5 + 0x10a);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar15 = DAT_002c624c;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  uVar18 = DAT_002c6250;
  uVar17 = DAT_002c6244;
  uVar13 = puVar15[1];
  uVar14 = puVar15[2];
  puVar6[0xc] = *puVar15;
  puVar6[0xd] = uVar13;
  puVar6[0xe] = uVar14;
  puVar6[0xf] = 0;
  uVar13 = DAT_002c6248;
  uVar20 = CONCAT44(DAT_002c6248,uVar17);
  puVar6[0x11] = uVar17;
  puVar6[0x12] = uVar18;
  puVar6[0x13] = uVar13;
  puVar6[0x14] = uVar17;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  *(undefined1 *)((int)puVar6 + 0x55) = 0;
  *(undefined1 *)((int)puVar6 + 0x56) = 1;
  puVar15 = puVar6 + -0x10a;
  iVar11 = (short)param_2[10] + 2;
  puVar6[0xf] = iVar11;
  if (0x18 < iVar11) {
    iVar11 = 0x18;
  }
  puVar6[0xf] = iVar11;
  uVar12 = param_2[0xb];
  puVar6[0x10] = (int)(short)uVar12;
  if ((short)uVar12 == 0) {
    puVar6[0x10] = 1;
  }
  func_00115154((float *)(puVar6 + 0x12),(float *)(puVar6 + 0x11),puVar6[-0x10]);
  func_0010B380(puVar6 + -7,puVar6[0xf],(int *)0x0,4);
  iVar11 = 0;
  if (0 < (int)puVar6[0xf]) {
    piVar5 = puVar6 + -7;
    do {
      uVar12 = 1;
      while( true ) {
        objStack_60[1] = 0;
        objStack_60[0] = 1;
        objStack_60[2] = 0;
        piVar7 = (int *)func_0014E428((int)puVar15,1,0,uVar12,1,0,0);
        (**(code **)(*piVar7 + 0x10))(piVar7,0x24);
        if (*piVar5 < (int)puVar6[-6]) {
          *(int **)(puVar6[-5] + *piVar5 * 4) = piVar7;
          *piVar5 = *piVar5 + 1;
        }
        iVar11 = iVar11 + 1;
        if ((int)puVar6[0xf] <= iVar11) goto LAB_002c601c;
        uVar12 = 0;
        if (iVar11 == 0) break;
        if (puVar6[0xf] + -1 == iVar11) {
          uVar12 = 2;
        }
      }
    } while( true );
  }
LAB_002c601c:
  uVar12 = 0;
  objStack_60[0] = puVar6[-0x16];
  objStack_60[1] = puVar6[-0x15];
  objStack_60[2] = puVar6[-0x14];
  if (0 < (int)puVar6[-7]) {
    do {
      if (uVar12 < (uint)puVar6[-7]) {
        iVar11 = *(int *)(puVar6[-5] + uVar12 * 4);
      }
      else {
        iVar11 = 0;
      }
      *(uint *)(iVar11 + 0x164) = *(uint *)(iVar11 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar11 + 0x80),puVar6[-0x10],(float *)objStack_60);
      func_004CEAF0(iVar11);
      uVar12 = uVar12 + 1;
      objStack_60[0] = (uint)ALBW_AS_U32((ALBW_AS_F32(objStack_60[0]) + ALBW_AS_F32(puVar6[0x12])));
      objStack_60[2] = (uint)ALBW_AS_U32((ALBW_AS_F32(objStack_60[2]) + ALBW_AS_F32(puVar6[0x11])));
    } while ((int)uVar12 < (int)puVar6[-7]);
  }
  func_002C5740((int)puVar15);
  func_002C59A8((int)puVar15);
  puVar6[5] = puVar15;
  *(undefined1 *)((int)puVar6 + 6) = 2;
  iVar11 = func_0010BA78(0x20);
  puVar3 = DAT_002c623c;
  puVar6[6] = iVar11;
  puVar6[7] = iVar11 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar8 = 2;
  puVar9 = (undefined4 *)(iVar11 + -8);
  do {
    uVar17 = puVar3[0xd];
    iVar8 = iVar8 + -1;
    puVar9[2] = puVar3[0xc];
    puVar9[3] = uVar17;
    uVar17 = puVar3[0xd];
    puVar9[4] = puVar3[0xc];
    puVar9[5] = uVar17;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar12 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar6[8] = puVar9;
  if (uVar12 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar3[5];
      *puVar9 = puVar3[4];
      puVar9[1] = uVar17;
      puVar10 = puVar9;
    }
    for (iVar11 = (int)uVar12 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar17 = puVar3[5];
      puVar10[2] = puVar3[4];
      puVar10[3] = uVar17;
      uVar17 = puVar3[5];
      puVar10[4] = puVar3[4];
      puVar10[5] = uVar17;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar11 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 2;
    iVar11 = func_00100118((int)(puVar9 + 2),DAT_002c6254,0x24,2);
  }
  if (iVar11 != 0) {
    puVar6[3] = iVar11;
    puVar6[2] = 2;
  }
  iVar11 = DAT_002c6258;
  puVar6[-0x35] = puVar6;
  objStack_60[2] = DAT_002c6268;
  *(undefined2 *)(iVar11 + (int)puVar15) = 2;
  local_3c = (uint *)s_cState_Play_002c625c;
  local_40 = objStack_60[2];
  iVar11 = puVar6[3];
  puVar16 = *(uint **)(iVar11 + 4);
  (**(code **)(objStack_60[2] + 8))(&local_40);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_3c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002c6278;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002c6278:
  iVar11 = *(int *)(iVar11 + 8);
  if (iVar11 <= (int)uVar12) {
    uVar12 = iVar11 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar12);
  *(undefined1 *)((int)puVar16 + uVar12) = 0;
  puVar9 = (undefined4 *)puVar6[6];
  uVar17 = puVar3[1];
  uVar13 = puVar3[2];
  uVar18 = puVar3[3];
  uVar14 = puVar3[4];
  uVar19 = puVar3[5];
  *puVar9 = *puVar3;
  puVar9[1] = uVar17;
  puVar9 = (undefined4 *)puVar6[7];
  *puVar9 = uVar13;
  puVar9[1] = uVar18;
  puVar9 = (undefined4 *)puVar6[8];
  *puVar9 = uVar14;
  puVar9[1] = uVar19;
  local_40 = objStack_60[2];
  local_3c = (uint *)s_cState_Back_002c648c;
  if ((uint)puVar6[2] < 2) {
    iVar11 = puVar6[3];
  }
  else {
    iVar11 = puVar6[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar11 + 4);
  (**(code **)(objStack_60[2] + 8))(&local_40);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_3c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002c6334;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002c6334:
  if (*(int *)(iVar11 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar12);
  *(undefined1 *)((int)puVar16 + uVar12) = 0;
  iVar11 = puVar6[6];
  uVar13 = puVar3[8];
  uVar18 = puVar3[4];
  uVar19 = puVar3[9];
  uVar14 = puVar3[7];
  uVar17 = puVar3[5];
  *(undefined4 *)(iVar11 + 8) = puVar3[6];
  *(undefined4 *)(iVar11 + 0xc) = uVar14;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 8) = uVar13;
  *(undefined4 *)(iVar11 + 0xc) = uVar19;
  iVar11 = puVar6[8];
  *(undefined4 *)(iVar11 + 8) = uVar18;
  *(undefined4 *)(iVar11 + 0xc) = uVar17;
  bVar4 = func_00588BF0((int)puVar15,0);
  if (bVar4) {
    func_00663068(puVar6,1);
  }
  else {
    func_00663068(puVar6,0);
  }
  uVar18 = DAT_002c64ac;
  uVar13 = DAT_002c64a4;
  uVar17 = DAT_002c649c;
  sVar2 = *(short *)((int)param_2 + 0x2a);
  if (sVar2 == 1) {
    puVar6[0x13] = DAT_002c64a0;
    puVar6[0x14] = uVar13;
  }
  else if (sVar2 == 2) {
    puVar6[0x13] = (int)((ulonglong)uVar20 >> 0x20);
    puVar6[0x14] = (int)uVar20;
  }
  else if (sVar2 == 3) {
    puVar6[0x13] = DAT_002c64a8;
    puVar6[0x14] = uVar18;
  }
  else {
    puVar6[0x13] = DAT_002c6498;
    puVar6[0x14] = uVar17;
  }
  *(undefined4 *)(*(int *)(puVar6[9] + 0x14) + 0x10) = puVar6[0x14];
  puVar6[-0x52] = puVar6[-0x52] | 4;
  return puVar15;
}

