#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0024E050(int param_1,undefined4 param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F92C(undefined4 *param_1,undefined1 param_2);
extern int iRam0024ee24;
extern undefined4 *puRam0024ee1c;
extern undefined4 *puRam0024ee20;
extern int DAT_0024edf0;
extern int DAT_0024edf4;
extern undefined DAT_0024edf8;
extern undefined *DAT_0024ee08;
extern int *DAT_0024ee0c;
extern undefined4 DAT_0024ee10;
extern int DAT_0024ee14;
extern undefined4 DAT_0024ee18;
extern char s_cState_Eruption_0024f0c4[];
extern char s_cState_EventWait_0024ee28[];
extern char s_cState_Event_0024f0b4[];

// USA 0024EA18 <- EU 0024EA18 (Ghidra, non-matching)
// GLOBAL DAT_0024edf0 int
// GLOBAL DAT_0024edf4 int
// GLOBAL DAT_0024edf8 undefined
// GLOBAL DAT_0024ee08 undefined *
// GLOBAL DAT_0024ee0c int *
// GLOBAL DAT_0024ee10 undefined4
// GLOBAL DAT_0024ee14 int
// GLOBAL DAT_0024ee18 undefined4
// GLOBAL UNK_0024ee1c undefined4 *
// GLOBAL UNK_0024ee20 undefined *
// GLOBAL UNK_0024ee24 int
// GLOBAL s_cState_Eruption_0024f0c4 string
// GLOBAL s_cState_EventWait_0024ee28 string
// GLOBAL s_cState_Event_0024f0b4 string

int func_0024EA18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  bool bVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0024edf0;
  piVar3[200] = DAT_0024edf0 + 0x54;
  *piVar3 = iVar4;
  iVar4 = func_0014E428((int)piVar3,1,0,0,1,0,0);
  piVar3[0x103] = iVar4;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x108);
  iVar17 = DAT_0024edf4;
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_2c = (uint *)&DAT_0024edf8;
    local_30 = DAT_0024edf4;
    iVar4 = func_001663BC(puVar5,&local_30,piVar3[0xb3],0,1);
  }
  piVar3[0x106] = iVar4;
  puVar5 = func_0010A794(piVar3 + 0x107);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar4 = func_00100118((int)(puVar5 + 9),DAT_0024ee08,0x2c,0x10);
  *(undefined4 *)(iVar4 + 0x2c0) = 0;
  iVar14 = iVar4 + -0x440;
  *(undefined4 *)(iVar4 + 0x2c4) = 0;
  *(undefined1 *)(iVar4 + 0x2c8) = 0;
  *(undefined1 *)(iVar4 + 0x2c9) = 1;
  *(undefined1 *)(iVar4 + 0x2ca) = 0;
  *(undefined4 *)(*(int *)(*DAT_0024ee0c + 0x3dbe8) + 8) = *(undefined4 *)(iVar4 + -0x174);
  iVar18 = *(int *)(*(int *)(iVar4 + -0x170) + 0x1c8);
  uVar6 = func_0014E904(iVar14,2,1);
  *(undefined4 *)(iVar4 + -0x30) = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar7,2,DAT_0024ee10,1);
  }
  *(undefined4 **)(iVar4 + -0x2c) = puVar5;
  iVar10 = DAT_0024ee14;
  bVar20 = *(int *)(iVar4 + -0x34) != 0;
  iVar9 = 0;
  if (bVar20) {
    iVar9 = *(int *)(iVar4 + -0x30);
  }
  if ((!bVar20 || iVar9 == 0) || (puVar5 == (undefined4 *)0x0 || iVar18 == 0)) {
    *(undefined1 *)(iVar4 + -0x169) = 1;
    return iVar14;
  }
  uVar15 = 0;
  do {
    piVar3 = (int *)(iVar10 + uVar15 * 8);
    func_00169688(*(uint **)(iVar4 + -0x30),uVar15,piVar3,iVar18);
    func_00169608(*(uint **)(iVar4 + -0x2c),uVar15,piVar3,iVar18);
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 2);
  func_0016A02C(*(int *)(iVar4 + -0x30),-1,(int *)0xffffffff,0);
  func_0016A02C(*(int *)(iVar4 + -0x2c),-1,(int *)0xffffffff,0);
  func_0024E050(iVar14,0);
  iVar18 = *(int *)(iVar4 + -0x34);
  *(uint *)(iVar18 + 0x164) = *(uint *)(iVar18 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar18 + 0x80),*(uint *)(iVar4 + -0x41c),(float *)(iVar4 + -0x438));
  func_004CEAF0(*(int *)(iVar4 + -0x34));
  uVar6 = DAT_0024ee18;
  iVar18 = 0;
  do {
    iVar10 = iVar4 + iVar18 * 0x2c;
    iVar9 = 0;
    do {
      *(undefined4 *)(iVar10 + iVar9 * 4) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 6);
    *(undefined4 *)(iVar10 + 0x18) = uVar6;
    *(undefined4 *)(iVar10 + 0x1c) = uVar6;
    *(undefined4 *)(iVar10 + 0x20) = uVar6;
    iVar18 = iVar18 + 1;
    *(undefined4 *)(iVar10 + 0x24) = 0;
    *(undefined4 *)(iVar10 + 0x28) = 0;
  } while (iVar18 != 0x10);
  func_004ECF6C(iVar14);
  *(int *)(iVar4 + -0x10) = iVar14;
  puVar16 = (undefined4 *)(iVar4 + -0x24);
  *(undefined1 *)(iVar4 + -0x1e) = 3;
  iVar18 = func_0010BA78(0x30);
  puVar5 = puRam0024ee1c;
  *(int *)(iVar4 + -0xc) = iVar18;
  *(uint *)(iVar4 + -8) = iVar18 + (uint)*(byte *)(iVar4 + -0x1e) * 8;
  iVar9 = 3;
  puVar7 = (undefined4 *)(iVar18 + -8);
  do {
    uVar6 = puVar5[0xf];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar5[0xe];
    puVar7[3] = uVar6;
    uVar6 = puVar5[0xf];
    puVar7[4] = puVar5[0xe];
    puVar7[5] = uVar6;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar4 + -0x1e);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(iVar4 + -4) = puVar7;
  if (uVar15 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar5[5];
      *puVar7 = puVar5[4];
      puVar7[1] = uVar6;
      puVar8 = puVar7;
    }
    for (iVar18 = (int)uVar15 >> 1; iVar18 != 0; iVar18 = iVar18 + -1) {
      uVar6 = puVar5[5];
      puVar8[2] = puVar5[4];
      puVar8[3] = uVar6;
      uVar6 = puVar5[5];
      puVar8[4] = puVar5[4];
      puVar8[5] = uVar6;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar18 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 3;
    iVar18 = func_00100118((int)(puVar5 + 2),puRam0024ee20,0x24,3);
  }
  if (iVar18 != 0) {
    *(int *)(iVar4 + -0x18) = iVar18;
    *(undefined4 *)(iVar4 + -0x1c) = 3;
  }
  iVar18 = iRam0024ee24;
  *(undefined4 **)(iVar4 + -0xec) = puVar16;
  *(undefined2 *)(iVar18 + iVar14) = 3;
  local_2c = (uint *)s_cState_EventWait_0024ee28;
  local_30 = iVar17;
  iVar18 = *(int *)(iVar4 + -0x18);
  puVar19 = *(uint **)(iVar18 + 4);
  (**(code **)(iVar17 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0024ee58;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0024ee58:
  iVar18 = *(int *)(iVar18 + 8);
  if (iVar18 <= (int)uVar15) {
    uVar15 = iVar18 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar19,local_2c,uVar15);
  puVar5 = puRam0024ee1c;
  *(undefined1 *)((int)puVar19 + uVar15) = 0;
  puVar7 = *(undefined4 **)(iVar4 + -0xc);
  uVar6 = puVar5[4];
  uVar11 = puVar5[2];
  uVar12 = puVar5[3];
  uVar21 = puVar5[1];
  uVar13 = puVar5[5];
  *puVar7 = *puVar5;
  puVar7[1] = uVar21;
  puVar5 = *(undefined4 **)(iVar4 + -8);
  *puVar5 = uVar11;
  puVar5[1] = uVar12;
  puVar5 = *(undefined4 **)(iVar4 + -4);
  *puVar5 = uVar6;
  puVar5[1] = uVar13;
  local_2c = (uint *)s_cState_Event_0024f0b4;
  local_30 = iVar17;
  if (*(uint *)(iVar4 + -0x1c) < 2) {
    iVar18 = *(int *)(iVar4 + -0x18);
  }
  else {
    iVar18 = *(int *)(iVar4 + -0x18) + 0x24;
  }
  puVar19 = *(uint **)(iVar18 + 4);
  (**(code **)(iVar17 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0024ef24;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0024ef24:
  if (*(int *)(iVar18 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar18 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar19,local_2c,uVar15);
  *(undefined1 *)((int)puVar19 + uVar15) = 0;
  puVar5 = puRam0024ee1c;
  iVar18 = *(int *)(iVar4 + -0xc);
  uVar6 = puRam0024ee1c[9];
  uVar11 = puRam0024ee1c[8];
  uVar13 = puRam0024ee1c[4];
  uVar21 = puRam0024ee1c[7];
  uVar12 = puRam0024ee1c[5];
  *(undefined4 *)(iVar18 + 8) = puRam0024ee1c[6];
  *(undefined4 *)(iVar18 + 0xc) = uVar21;
  iVar18 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar18 + 8) = uVar11;
  *(undefined4 *)(iVar18 + 0xc) = uVar6;
  iVar18 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar18 + 8) = uVar13;
  *(undefined4 *)(iVar18 + 0xc) = uVar12;
  local_2c = (uint *)s_cState_Eruption_0024f0c4;
  local_30 = iVar17;
  uVar15 = *(uint *)(iVar4 + -0x1c);
  if (uVar15 < 3) {
    iVar18 = *(int *)(iVar4 + -0x18);
    uVar2 = uVar15;
  }
  else {
    iVar18 = iVar17;
    uVar2 = *(uint *)(iVar4 + -0x18);
  }
  if (2 < uVar15) {
    iVar18 = uVar2 + 0x48;
  }
  puVar19 = *(uint **)(iVar18 + 4);
  (**(code **)(iVar17 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0024f000;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0024f000:
  if (*(int *)(iVar18 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar18 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar19,local_2c,uVar15);
  *(undefined1 *)((int)puVar19 + uVar15) = 0;
  iVar17 = *(int *)(iVar4 + -0xc);
  uVar21 = puVar5[0xb];
  uVar6 = puVar5[0xd];
  uVar11 = puVar5[5];
  uVar12 = puVar5[0xc];
  uVar13 = puVar5[4];
  *(undefined4 *)(iVar17 + 0x10) = puVar5[10];
  *(undefined4 *)(iVar17 + 0x14) = uVar21;
  iVar17 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar17 + 0x10) = uVar12;
  *(undefined4 *)(iVar17 + 0x14) = uVar6;
  iVar4 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar11;
  bVar20 = func_00588BF0(iVar14,0);
  if (bVar20) {
    func_0065F92C(puVar16,2);
  }
  else {
    func_0065F92C(puVar16,0);
  }
  return iVar14;
}

