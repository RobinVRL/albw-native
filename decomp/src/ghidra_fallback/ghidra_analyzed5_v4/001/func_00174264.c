#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern float func_0013D85C(void);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0017401C(int param_1);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_00658B14(undefined4 *param_1,undefined1 param_2);
extern int DAT_0017461c;
extern undefined4 DAT_00174620;
extern undefined4 *DAT_00174624;
extern undefined *DAT_00174628;
extern int DAT_0017462c;
extern int DAT_0017463c;
extern undefined4 *DAT_001747cc;
extern char s_cState_Unlock_00174640[];
extern char s_cState_Unlocked_001747d0[];
extern char s_cState_Wait_00174630[];

// USA 00174264 <- EU 00174264 (Ghidra, non-matching)
// GLOBAL DAT_0017461c int
// GLOBAL DAT_00174620 undefined4
// GLOBAL DAT_00174624 undefined4 *
// GLOBAL DAT_00174628 undefined *
// GLOBAL DAT_0017462c int
// GLOBAL DAT_0017463c int
// GLOBAL DAT_001747cc undefined4 *
// GLOBAL s_cState_Unlock_00174640 string
// GLOBAL s_cState_Unlocked_001747d0 string
// GLOBAL s_cState_Wait_00174630 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 * func_00174264(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define puStack_2c (*(uint * *)(albw_frame + 0x14))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_0017461c;
  piVar3[200] = DAT_0017461c + 0x54;
  *piVar3 = iVar5;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  puVar4 = func_0010A794(piVar3 + 0x106);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  uVar7 = DAT_00174620;
  puVar4[0xb] = 0;
  puVar4[0xc] = uVar7;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  objStack_40[0] = 1;
  objStack_40[1] = 0;
  puVar11 = puVar4 + -0x106;
  objStack_40[2] = 0;
  iVar5 = func_0014E428((int)puVar11,0,0,0,1,0,0);
  puVar4[-2] = iVar5;
  func_004CF478(iVar5,1);
  if (*(short *)((int)puVar4 + -0x3e2) == 0) {
    objStack_40[0] = 0;
    objStack_40[1] = 0;
    piVar3 = func_0014DF18(puVar4[-0x52],0,1,0,0,0);
    puVar4[-1] = piVar3;
  }
  func_0017401C((int)puVar11);
  iVar5 = puVar4[-2];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),puVar4[-0xc],(float *)(puVar4 + -0x12));
  func_004CEAF0(puVar4[-2]);
  if (puVar4[-1] != 0) {
    objStack_40[0] = puVar4[-0x12];
    objStack_40[1] = puVar4[-0x11];
    objStack_40[2] = puVar4[-0x10];
    fVar14 = func_0013D85C();
    objStack_40[1] = (uint)ALBW_AS_U32((fVar14 + ALBW_AS_F32(objStack_40[1])));
    iVar5 = puVar4[-1];
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar5 + 0x80),0,(float *)objStack_40);
    func_004CEAF0(puVar4[-1]);
  }
  puVar6 = (undefined4 *)func_0010BAB4(0xb0);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_002FCDA0(puVar6,puVar4[-0x53],0);
  }
  puVar4[9] = uVar7;
  func_004ECF6C((int)puVar11);
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar11;
  iVar5 = func_0010BA78(0x30);
  puVar4[6] = iVar5;
  puVar6 = DAT_00174624;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 3;
  puVar8 = (undefined4 *)(iVar5 + -8);
  do {
    uVar7 = puVar6[0x11];
    iVar10 = iVar10 + -1;
    puVar8[2] = puVar6[0x10];
    puVar8[3] = uVar7;
    uVar7 = puVar6[0x11];
    puVar8[4] = puVar6[0x10];
    puVar8[5] = uVar7;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar8;
  if (uVar12 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar6[5];
      *puVar8 = puVar6[4];
      puVar8[1] = uVar7;
      puVar9 = puVar8;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar7 = puVar6[5];
      puVar9[2] = puVar6[4];
      puVar9[3] = uVar7;
      uVar7 = puVar6[5];
      puVar9[4] = puVar6[4];
      puVar9[5] = uVar7;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_00174628;
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 3;
    *puVar6 = 0x24;
    iVar5 = func_00100118((int)(puVar6 + 2),puVar2,0x24,3);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 3;
  }
  iVar5 = DAT_0017462c;
  puVar4[-0x31] = puVar4;
  iVar10 = DAT_0017463c;
  *(undefined2 *)(iVar5 + (int)puVar11) = 3;
  puStack_2c = (uint *)s_cState_Wait_00174630;
  iStack_30 = iVar10;
  iVar5 = puVar4[3];
  puVar13 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00174570;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00174570:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar12) {
    uVar12 = iVar5 - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar13,puStack_2c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar7 = DAT_00174624[1];
  uVar15 = DAT_00174624[2];
  uVar16 = DAT_00174624[3];
  uVar17 = DAT_00174624[4];
  uVar18 = DAT_00174624[5];
  *puVar6 = *DAT_00174624;
  puVar6[1] = uVar7;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar17;
  puVar6[1] = uVar18;
  puStack_2c = (uint *)s_cState_Unlock_00174640;
  iStack_30 = iVar10;
  if ((uint)puVar4[2] < 2) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x24;
  }
  puVar13 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0017465c;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0017465c:
  if (*(int *)(iVar5 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar13,puStack_2c,uVar12);
  puVar6 = DAT_001747cc;
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar5 = puVar4[6];
  uVar7 = puVar6[1];
  uVar15 = puVar6[2];
  uVar16 = puVar6[3];
  uVar17 = puVar6[4];
  uVar18 = puVar6[5];
  *(undefined4 *)(iVar5 + 8) = *puVar6;
  *(undefined4 *)(iVar5 + 0xc) = uVar7;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar17;
  *(undefined4 *)(iVar5 + 0xc) = uVar18;
  puStack_2c = (uint *)s_cState_Unlocked_001747d0;
  iStack_30 = iVar10;
  if ((uint)puVar4[2] < 3) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x48;
  }
  puVar13 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00174720;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00174720:
  if (*(int *)(iVar5 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar13,puStack_2c,uVar12);
  puVar6 = DAT_00174624;
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar5 = puVar4[6];
  uVar18 = puVar6[0xd];
  uVar16 = puVar6[4];
  uVar15 = puVar6[0xe];
  uVar17 = puVar6[0xf];
  uVar7 = puVar6[5];
  *(undefined4 *)(iVar5 + 0x10) = puVar6[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar16;
  *(undefined4 *)(iVar5 + 0x14) = uVar7;
  if (*(short *)((int)puVar4 + -0x3e2) == 0) {
    func_00658B14(puVar4,2);
  }
  else {
    func_00658B14(puVar4,0);
  }
  return puVar11;
}

