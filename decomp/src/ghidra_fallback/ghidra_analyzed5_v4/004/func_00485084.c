#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_004B9660(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_0066F174(undefined4 *param_1,undefined1 param_2);
extern int DAT_0048543c;
extern undefined1 *DAT_00485440;
extern int DAT_00485454;
extern undefined DAT_00485458;
extern undefined4 DAT_0048545c;
extern undefined4 *DAT_00485460;
extern undefined *DAT_00485464;
extern char s_Ed_EpilogueT_00485444[];
extern char s_cState_End_00485484[];
extern char s_cState_Input_00485474[];
extern char s_cState_Wait_00485468[];

// USA 00485084 <- EU 0048505C (Ghidra, non-matching)
// GLOBAL DAT_0048543c int
// GLOBAL DAT_00485440 undefined1 *
// GLOBAL DAT_00485454 int
// GLOBAL DAT_00485458 undefined
// GLOBAL DAT_0048545c undefined4
// GLOBAL DAT_00485460 undefined4 *
// GLOBAL DAT_00485464 undefined *
// GLOBAL s_Ed_EpilogueT_00485444 string
// GLOBAL s_cState_End_00485484 string
// GLOBAL s_cState_Input_00485474 string
// GLOBAL s_cState_Wait_00485468 string

int * func_00485084(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  ushort uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar4 = func_004B9A10(param_1,1);
  iVar14 = DAT_0048543c;
  *piVar4 = DAT_0048543c;
  piVar4[0xe] = iVar14 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x1d);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar3 = DAT_00485440;
  puVar5[7] = 0;
  puVar5[8] = 0;
  piVar4 = puVar5 + -0x1d;
  *(undefined2 *)(puVar5 + 9) = 0;
  iVar14 = DAT_00485454;
  *puVar3 = 1;
  local_2c = (uint *)s_Ed_EpilogueT_00485444;
  local_30 = iVar14;
  (**(code **)(*piVar4 + 0x38))(piVar4,&local_30,0);
  piVar12 = (int *)puVar5[-0x16];
  func_0016773C((int)piVar12,1);
  local_2c = (uint *)&DAT_00485458;
  local_30 = iVar14;
  func_00166C20(piVar12,0,&local_30,0);
  puVar5[-0x13] = piVar12;
  *(undefined2 *)((int)puVar5 + -0x52) = 0;
  *(undefined2 *)(puVar5 + -0x15) = 0;
  func_002313DC((int)(puVar5 + -0x15));
  puVar6 = (undefined4 *)func_0010BAB4(0x20);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_002C0294(puVar6);
  }
  puVar5[-0x18] = puVar7;
  func_002C00D4(puVar7,piVar4,piVar12);
  *(undefined4 *)(puVar5[-0x18] + 0xc) = DAT_0048545c;
  uVar10 = *(ushort *)(puVar5[-0x18] + 0x16) & 0xfffe;
  *(ushort *)(puVar5[-0x18] + 0x16) = uVar10;
  *(ushort *)(puVar5[-0x18] + 0x16) = uVar10 | 2;
  func_004B9660((int)piVar4,puVar5[-0x18]);
  puVar5[5] = piVar4;
  *(undefined1 *)((int)puVar5 + 6) = 3;
  iVar8 = func_0010BA78(0x30);
  puVar7 = DAT_00485460;
  puVar5[6] = iVar8;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 3;
  puVar6 = (undefined4 *)(iVar8 + -8);
  do {
    uVar16 = puVar7[0xf];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar7[0xe];
    puVar6[3] = uVar16;
    uVar16 = puVar7[0xf];
    puVar6[4] = puVar7[0xe];
    puVar6[5] = uVar16;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar6;
  if (uVar13 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar16;
      puVar9 = puVar6;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar16 = puVar7[5];
      puVar9[2] = puVar7[4];
      puVar9[3] = uVar16;
      uVar16 = puVar7[5];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar16;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 3;
    iVar8 = func_00100118((int)(puVar6 + 2),DAT_00485464,0x24,3);
  }
  if (iVar8 != 0) {
    puVar5[3] = iVar8;
    puVar5[2] = 3;
  }
  local_2c = (uint *)s_cState_Wait_00485468;
  local_30 = iVar14;
  iVar8 = puVar5[3];
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_004852d4;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_004852d4:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar13) {
    uVar13 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar6 = (undefined4 *)puVar5[6];
  uVar16 = puVar7[1];
  uVar17 = puVar7[2];
  uVar18 = puVar7[3];
  uVar19 = puVar7[4];
  uVar20 = puVar7[5];
  *puVar6 = *puVar7;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar5[7];
  *puVar6 = uVar17;
  puVar6[1] = uVar18;
  puVar6 = (undefined4 *)puVar5[8];
  *puVar6 = uVar19;
  puVar6[1] = uVar20;
  local_2c = (uint *)s_cState_Input_00485474;
  local_30 = iVar14;
  if ((uint)puVar5[2] < 2) {
    iVar8 = puVar5[3];
  }
  else {
    iVar8 = puVar5[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00485384;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00485384:
  if (*(int *)(iVar8 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar8 = puVar5[6];
  uVar16 = puVar7[4];
  uVar17 = puVar7[5];
  uVar18 = puVar7[7];
  uVar19 = puVar7[8];
  uVar20 = puVar7[9];
  *(undefined4 *)(iVar8 + 8) = puVar7[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 8) = uVar19;
  *(undefined4 *)(iVar8 + 0xc) = uVar20;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 8) = uVar16;
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  local_2c = (uint *)s_cState_End_00485484;
  local_30 = iVar14;
  uVar13 = puVar5[2];
  if (uVar13 < 3) {
    iVar8 = puVar5[3];
    uVar2 = uVar13;
  }
  else {
    iVar8 = iVar14;
    uVar2 = puVar5[3];
  }
  if (2 < uVar13) {
    iVar8 = uVar2 + 0x48;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0048549c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0048549c:
  if (*(int *)(iVar8 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar14 = puVar5[6];
  uVar16 = puVar7[0xb];
  uVar18 = puVar7[0xc];
  uVar19 = puVar7[0xd];
  uVar17 = puVar7[4];
  uVar20 = puVar7[5];
  *(undefined4 *)(iVar14 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar14 + 0x14) = uVar16;
  iVar14 = puVar5[7];
  *(undefined4 *)(iVar14 + 0x10) = uVar18;
  *(undefined4 *)(iVar14 + 0x14) = uVar19;
  iVar14 = puVar5[8];
  *(undefined4 *)(iVar14 + 0x10) = uVar17;
  *(undefined4 *)(iVar14 + 0x14) = uVar20;
  func_0066F174(puVar5,0);
  *DAT_00485440 = 0;
  return piVar4;
}

