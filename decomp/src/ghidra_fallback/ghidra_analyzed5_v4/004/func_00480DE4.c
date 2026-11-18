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
extern int func_003A0D7C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0047DA54(undefined4 *param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00481318;
extern undefined4 *DAT_0048131c;
extern undefined *DAT_00481320;
extern int DAT_00481334;
extern undefined4 DAT_00481364;
extern char *DAT_00481368;
extern undefined4 DAT_0048136c;
extern int DAT_00481370;
extern undefined DAT_004814b0;
extern char s_L_ArrowB_00_004814cc[];
extern char s_L_ArrowT_00_004814c0[];
extern char s__W_Close_00_004814b3[];
extern char s_cState_Change_00481338[];
extern char s_cState_Complete_00481354[];
extern char s_cState_MoveWait_00481324[];
extern char s_cState_Stay_00481348[];
extern char s_cf_004814b3[];
extern undefined4 _DAT_004814b0;

// USA 00480DE4 <- EU 00480DBC (Ghidra, non-matching)
// GLOBAL DAT_00481318 int
// GLOBAL DAT_0048131c undefined4 *
// GLOBAL DAT_00481320 undefined *
// GLOBAL DAT_00481334 int
// GLOBAL DAT_00481364 undefined4
// GLOBAL DAT_00481368 char *
// GLOBAL DAT_0048136c undefined4
// GLOBAL DAT_00481370 int
// GLOBAL DAT_004814b0 undefined
// GLOBAL s_cf_004814b3 string
// GLOBAL s_L_ArrowB_00_004814cc string
// GLOBAL s_L_ArrowT_00_004814c0 string
// GLOBAL s_cState_Change_00481338 string
// GLOBAL s_cState_Complete_00481354 string
// GLOBAL s_cState_MoveWait_00481324 string
// GLOBAL s_cState_Stay_00481348 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_00480DE4(undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c ((char * *)(albw_frame + 0x14))
  piVar2 = func_004B9A10(param_1,0);
  iVar5 = DAT_00481318;
  *piVar2 = DAT_00481318;
  piVar2[0xe] = iVar5 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x1d);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  piVar4 = func_004B9A10(puVar3 + 9,0);
  piVar4[0x1d] = 0;
  piVar13 = piVar4 + -0x26;
  puVar3 = (undefined4 *)func_0010BAB4(0x8c);
  piVar2 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = func_0047DA54(puVar3);
  }
  piVar4[0x1e] = (int)piVar2;
  piVar4[0x1f] = 0;
  piVar4[0x21] = -1;
  piVar4[0x20] = 0;
  *(undefined1 *)((int)piVar4 + -0x1e) = 4;
  piVar4[-4] = (int)piVar13;
  iVar5 = func_0010BA78(0x40);
  piVar4[-3] = iVar5;
  puVar3 = DAT_0048131c;
  piVar4[-2] = iVar5 + (uint)*(byte *)((int)piVar4 + -0x1e) * 8;
  iVar8 = 4;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar17 = puVar3[0xb];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar3[10];
    puVar6[3] = uVar17;
    uVar17 = puVar3[0xb];
    puVar6[4] = puVar3[10];
    puVar6[5] = uVar17;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + -0x1e);
  uVar11 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar11 << 3);
  piVar4[-1] = (int)puVar6;
  if (uVar11 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar17;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar17 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar17;
      uVar17 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar17;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_00481320,0x24,4);
  }
  if (iVar5 != 0) {
    piVar4[-6] = iVar5;
    piVar4[-7] = 4;
  }
  iVar5 = DAT_00481334;
  local_34 = (uint *)s_cState_MoveWait_00481324;
  local_38 = DAT_00481334;
  iVar8 = piVar4[-6];
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(DAT_00481334 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00480fa0;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00480fa0:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar11) {
    uVar11 = iVar8 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar11);
  *(undefined1 *)((int)puVar15 + uVar11) = 0;
  puVar6 = (undefined4 *)piVar4[-3];
  uVar9 = puVar3[1];
  uVar17 = puVar3[2];
  uVar10 = puVar3[3];
  uVar18 = puVar3[4];
  uVar19 = puVar3[5];
  *puVar6 = *puVar3;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)piVar4[-2];
  *puVar6 = uVar17;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)piVar4[-1];
  *puVar6 = uVar18;
  puVar6[1] = uVar19;
  local_34 = (uint *)s_cState_Change_00481338;
  local_38 = iVar5;
  if ((uint)piVar4[-7] < 2) {
    iVar8 = piVar4[-6];
  }
  else {
    iVar8 = piVar4[-6] + 0x24;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00481068;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00481068:
  if (*(int *)(iVar8 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar11);
  *(undefined1 *)((int)puVar15 + uVar11) = 0;
  iVar8 = piVar4[-3];
  uVar9 = puVar3[4];
  uVar18 = puVar3[5];
  uVar10 = puVar3[7];
  uVar19 = puVar3[8];
  uVar17 = puVar3[9];
  *(undefined4 *)(iVar8 + 8) = puVar3[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = piVar4[-2];
  *(undefined4 *)(iVar8 + 8) = uVar19;
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  iVar8 = piVar4[-1];
  *(undefined4 *)(iVar8 + 8) = uVar9;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  local_34 = (uint *)s_cState_Stay_00481348;
  local_38 = iVar5;
  if ((uint)piVar4[-7] < 3) {
    iVar8 = piVar4[-6];
  }
  else {
    iVar8 = piVar4[-6] + 0x48;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00481138;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00481138:
  if (*(int *)(iVar8 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar11);
  *(undefined1 *)((int)puVar15 + uVar11) = 0;
  iVar8 = piVar4[-3];
  uVar17 = puVar3[0xc];
  uVar18 = puVar3[0xd];
  uVar10 = puVar3[4];
  uVar19 = puVar3[5];
  uVar9 = puVar3[0xb];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar9;
  iVar8 = piVar4[-2];
  *(undefined4 *)(iVar8 + 0x10) = uVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  iVar8 = piVar4[-1];
  *(undefined4 *)(iVar8 + 0x10) = uVar10;
  *(undefined4 *)(iVar8 + 0x14) = uVar19;
  local_34 = (uint *)s_cState_Complete_00481354;
  local_38 = iVar5;
  if ((uint)piVar4[-7] < 4) {
    iVar8 = piVar4[-6];
  }
  else {
    iVar8 = piVar4[-6] + 0x6c;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00481208;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00481208:
  if (*(int *)(iVar8 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar11);
  *(undefined1 *)((int)puVar15 + uVar11) = 0;
  iVar8 = piVar4[-3];
  uVar18 = puVar3[4];
  uVar19 = puVar3[0x11];
  uVar9 = puVar3[5];
  uVar17 = puVar3[0xf];
  uVar10 = puVar3[0x10];
  *(undefined4 *)(iVar8 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  uVar17 = DAT_00481364;
  iVar8 = piVar4[-2];
  *(undefined4 *)(iVar8 + 0x18) = uVar10;
  *(undefined4 *)(iVar8 + 0x1c) = uVar19;
  iVar8 = piVar4[-1];
  *(undefined4 *)(iVar8 + 0x18) = uVar18;
  *(undefined4 *)(iVar8 + 0x1c) = uVar9;
  (**(code **)(*piVar4 + 0x38))(piVar4,uVar17,0);
  piVar2 = (int *)piVar4[7];
  local_2c[0] = DAT_00481368;
  (**(code **)(*piVar13 + 0x38))(piVar13,DAT_0048136c,local_2c);
  piVar16 = (int *)piVar4[-0x1f];
  func_0016773C((int)piVar2,5);
  func_0016773C((int)piVar16,4);
  iVar8 = DAT_00481370;
  iVar12 = 0;
  do {
    piVar14 = (int *)(iVar8 + iVar12 * 8);
    func_00166C20(piVar2,iVar12 + 3,piVar14,0);
    func_00166C20(piVar16,iVar12 + 2,piVar14,0);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 2);
  piVar4[-0x1c] = (int)piVar16;
  *(undefined2 *)((int)piVar4 + -0x76) = 2;
  *(undefined2 *)(piVar4 + -0x1e) = 0;
  piVar4[-0x19] = (int)piVar16;
  *(undefined2 *)((int)piVar4 + -0x6a) = 3;
  *(undefined2 *)(piVar4 + -0x1b) = 0;
  piVar4[10] = (int)piVar2;
  *(undefined2 *)((int)piVar4 + 0x22) = 3;
  *(undefined2 *)(piVar4 + 8) = 0;
  func_002313DC((int)(piVar4 + 8));
  piVar4[0xd] = (int)piVar2;
  *(undefined2 *)((int)piVar4 + 0x2e) = 4;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x3a4);
  iVar8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar8 = func_003A0D7C(puVar3,piVar2,piVar16,(int)piVar13);
  }
  uVar17 = _DAT_004814b0;
  piVar4[0x1d] = iVar8;
  *(undefined4 *)(iVar8 + 0x3a0) = uVar17;
  local_2c[0] = s__W_Close_00_004814b3 + 1;
  local_30 = iVar5;
  iVar8 = func_005229AC(piVar2,&local_30);
  if (iVar8 != 0) {
    *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
  }
  local_2c[0] = s_L_ArrowT_00_004814c0;
  local_30 = iVar5;
  iVar8 = func_005229AC(piVar2,&local_30);
  if (iVar8 != 0) {
    *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
  }
  local_2c[0] = s_L_ArrowB_00_004814cc;
  local_30 = iVar5;
  iVar5 = func_005229AC(piVar2,&local_30);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  func_004B9958((int)piVar13,2);
  func_004B9958((int)piVar4,2);
  return piVar13;
}

