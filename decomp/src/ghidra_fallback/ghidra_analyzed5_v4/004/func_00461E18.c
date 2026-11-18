#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168434(undefined4 *param_1);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern undefined4 DAT_004621e8;
extern undefined4 DAT_004621ec;
extern undefined DAT_004621f0;
extern int DAT_004621f4;
extern int *DAT_004621f8;
extern undefined4 DAT_004621fc;
extern undefined DAT_00462274;
extern undefined DAT_00462278;
extern undefined4 *DAT_0046228c;
extern undefined *DAT_004624b8;
extern undefined4 DAT_0046251c;
extern char s_B_WarpBtn_00_0046227c[];
extern char s_CancelActive_00462264[];
extern char s_DecideActive_00462254[];
extern char s_DecideInactive_00462220[];
extern char s_InShine_0046224c[];
extern char s_KeyOnActive_00462240[];
extern char s_KeyOnInactive_00462210[];
extern char s_TouchOnActive_00462230[];
extern char s_TouchOnInactive_00462200[];
extern char s_cState_Cancel_0046250c[];
extern char s_cState_Decide_004624d8[];
extern char s_cState_KeyOn_004624c8[];
extern char s_cState_Selected_004624e8[];
extern char s_cState_Wait_004624bc[];
extern char s_cState_WarpDecide_004624f8[];

// USA 00461E18 <- EU 00461DF0 (Ghidra, non-matching)
// GLOBAL DAT_004621e8 undefined4
// GLOBAL DAT_004621ec undefined4
// GLOBAL DAT_004621f0 undefined
// GLOBAL DAT_004621f4 int
// GLOBAL DAT_004621f8 int *
// GLOBAL DAT_004621fc undefined4
// GLOBAL DAT_00462274 undefined
// GLOBAL DAT_00462278 undefined
// GLOBAL DAT_0046228c undefined4 *
// GLOBAL DAT_004624b8 undefined *
// GLOBAL DAT_0046251c undefined4
// GLOBAL s_B_WarpBtn_00_0046227c string
// GLOBAL s_CancelActive_00462264 string
// GLOBAL s_DecideActive_00462254 string
// GLOBAL s_DecideInactive_00462220 string
// GLOBAL s_InShine_0046224c string
// GLOBAL s_KeyOnActive_00462240 string
// GLOBAL s_KeyOnInactive_00462210 string
// GLOBAL s_TouchOnActive_00462230 string
// GLOBAL s_TouchOnInactive_00462200 string
// GLOBAL s_cState_Cancel_0046250c string
// GLOBAL s_cState_Decide_004624d8 string
// GLOBAL s_cState_KeyOn_004624c8 string
// GLOBAL s_cState_Selected_004624e8 string
// GLOBAL s_cState_Wait_004624bc string
// GLOBAL s_cState_WarpDecide_004624f8 string

/* WARNING: Removing unreachable block (ram,0x004620e4) */
/* WARNING: Removing unreachable block (ram,0x004620f8) */

int * func_00461E18(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  puVar3 = func_001B6E04(param_1);
  *puVar3 = DAT_004621e8;
  uVar6 = DAT_004621ec;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined2 *)((int)puVar3 + 0x3a) = 0xffff;
  puVar3[0xf] = uVar6;
  puVar3[0x10] = 0;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  *(undefined2 *)((int)puVar3 + 0x46) = 0xffff;
  puVar3[0x12] = uVar6;
  puVar3[0x13] = 0;
  puVar3 = func_0010A794(puVar3 + 0x14);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xd] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  iVar16 = DAT_004621f4;
  puVar3[0xf] = 0;
  *(undefined2 *)(puVar3 + 0x10) = 0;
  *(undefined1 *)((int)puVar3 + 0x42) = 0;
  puVar3[0x11] = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((int)puVar3 + 0x49) = 0;
  *(undefined1 *)((int)puVar3 + 0x4a) = 0;
  local_2c = &DAT_004621f0;
  local_30 = iVar16;
  puVar3 = func_00688F58(puVar3 + 0x14,&local_30);
  local_24 = &DAT_004621f0;
  local_28 = iVar16;
  puVar4 = func_00688F58(puVar3 + 0x13,&local_28);
  puVar4[0x13] = 0;
  piVar13 = puVar4 + -0x3b;
  *(undefined1 *)(puVar4 + 0x14) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x74);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_00168434(puVar5);
  }
  puVar4[-0x34] = puVar3;
  cVar2 = *(char *)(*DAT_004621f8 + 0x18);
  if (cVar2 != '\n') {
    if (cVar2 < '\v') {
      if ((cVar2 != '\0' && cVar2 != '\x02') && (cVar2 != '\x04' && cVar2 != '\t')) {
LAB_00461f00:
        (**(code **)(*piVar13 + 0x38))(piVar13,DAT_004621fc,0);
        goto LAB_00461f18;
      }
    }
    else if ((cVar2 != '\v' && cVar2 != '\f') && (cVar2 != '\x12' && cVar2 != '\x16'))
    goto LAB_00461f00;
  }
  (**(code **)(*piVar13 + 0x38))(piVar13,DAT_0046251c,0);
LAB_00461f18:
  piVar14 = (int *)puVar4[-0x34];
  func_0016773C((int)piVar14,10);
  local_34 = s_TouchOnInactive_00462200;
  local_38 = iVar16;
  func_00166C20(piVar14,0,&local_38,0);
  local_34 = s_KeyOnInactive_00462210;
  local_38 = iVar16;
  func_00166C20(piVar14,1,&local_38,0);
  local_34 = s_DecideInactive_00462220;
  local_38 = iVar16;
  func_00166C20(piVar14,2,&local_38,0);
  local_34 = s_TouchOnActive_00462230;
  local_38 = iVar16;
  func_00166C20(piVar14,3,&local_38,0);
  local_34 = s_KeyOnActive_00462240;
  local_38 = iVar16;
  func_00166C20(piVar14,4,&local_38,0);
  local_34 = s_InShine_0046224c;
  local_38 = iVar16;
  func_00166C20(piVar14,5,&local_38,0);
  local_34 = s_DecideActive_00462254;
  local_38 = iVar16;
  func_00166C20(piVar14,6,&local_38,0);
  local_34 = s_CancelActive_00462264;
  local_38 = iVar16;
  func_00166C20(piVar14,7,&local_38,0);
  local_34 = &DAT_00462274;
  local_38 = iVar16;
  func_00166C20(piVar14,8,&local_38,0);
  local_34 = &DAT_00462278;
  local_38 = iVar16;
  func_00166C20(piVar14,9,&local_38,0);
  puVar4[-0x31] = piVar14;
  *(undefined2 *)((int)puVar4 + -0xca) = 9;
  *(undefined2 *)(puVar4 + -0x33) = 0;
  puVar4[-0x2e] = piVar14;
  *(undefined2 *)((int)puVar4 + -0xbe) = 8;
  *(undefined2 *)(puVar4 + -0x30) = 0;
  puVar4[-0x28] = piVar14;
  *(undefined2 *)((int)puVar4 + -0xa6) = 5;
  *(undefined2 *)(puVar4 + -0x2a) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_002C0294(puVar5);
  }
  puVar4[-0x36] = puVar3;
  func_002C00D4(puVar3,piVar13,piVar14);
  local_34 = s_B_WarpBtn_00_0046227c;
  local_38 = iVar16;
  uVar6 = func_005229AC(piVar14,&local_38);
  puVar4[-0x16] = uVar6;
  iVar7 = puVar4[-0x36];
  *(undefined4 *)(iVar7 + 4) = 0;
  puVar8 = (ushort *)(iVar7 + 0x16);
  *puVar8 = *puVar8 & 0xffbf;
  puVar4[-0x22] = piVar13;
  *(undefined1 *)((int)puVar4 + -0x96) = 6;
  iVar7 = func_0010BA78(0x60);
  puVar3 = DAT_0046228c;
  puVar4[-0x21] = iVar7;
  puVar4[-0x20] = iVar7 + (uint)*(byte *)((int)puVar4 + -0x96) * 8;
  iVar9 = 6;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar6 = puVar3[0x39];
    iVar9 = iVar9 + -1;
    puVar5[2] = puVar3[0x38];
    puVar5[3] = uVar6;
    uVar6 = puVar3[0x39];
    puVar5[4] = puVar3[0x38];
    puVar5[5] = uVar6;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + -0x96);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[-0x1f] = puVar5;
  if (uVar15 != 0) {
    puVar10 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar3[5];
      *puVar5 = puVar3[4];
      puVar5[1] = uVar6;
      puVar10 = puVar5;
    }
    for (iVar7 = (int)uVar15 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar6 = puVar3[5];
      puVar10[2] = puVar3[4];
      puVar10[3] = uVar6;
      uVar6 = puVar3[5];
      puVar10[4] = puVar3[4];
      puVar10[5] = uVar6;
      puVar10 = puVar10 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_004624b8,0x24,6);
  }
  if (iVar7 != 0) {
    puVar4[-0x24] = iVar7;
    puVar4[-0x25] = 6;
  }
  local_34 = s_cState_Wait_004624bc;
  local_38 = iVar16;
  func_0010BEC4((int)(puVar4 + -0x27),0,&local_38);
  puVar5 = (undefined4 *)puVar4[-0x21];
  uVar12 = puVar3[1];
  uVar6 = puVar3[2];
  uVar11 = puVar3[3];
  uVar17 = *(undefined8 *)(puVar3 + 4);
  *puVar5 = *puVar3;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar4[-0x20];
  *puVar5 = uVar6;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar4[-0x1f];
  *puVar5 = (int)uVar17;
  puVar5[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_KeyOn_004624c8;
  local_38 = iVar16;
  func_0010BEC4((int)(puVar4 + -0x27),1,&local_38);
  iVar7 = puVar4[-0x21];
  uVar11 = puVar3[7];
  uVar12 = puVar3[8];
  uVar6 = puVar3[9];
  *(undefined4 *)(iVar7 + 8) = puVar3[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar7 = puVar4[-0x20];
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar6;
  iVar7 = puVar4[-0x1f];
  *(int *)(iVar7 + 8) = (int)uVar17;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_Decide_004624d8;
  local_38 = iVar16;
  func_0010BEC4((int)(puVar4 + -0x27),2,&local_38);
  iVar7 = puVar4[-0x21];
  uVar6 = puVar3[0xc];
  uVar11 = puVar3[0xd];
  uVar12 = puVar3[0xb];
  *(undefined4 *)(iVar7 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  iVar7 = puVar4[-0x20];
  *(undefined4 *)(iVar7 + 0x10) = uVar6;
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  iVar7 = puVar4[-0x1f];
  *(int *)(iVar7 + 0x10) = (int)uVar17;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_Selected_004624e8;
  local_38 = iVar16;
  func_0010BEC4((int)(puVar4 + -0x27),3,&local_38);
  iVar7 = puVar4[-0x21];
  uVar11 = puVar3[0xf];
  uVar6 = puVar3[0x10];
  uVar12 = puVar3[0x11];
  *(undefined4 *)(iVar7 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar11;
  iVar7 = puVar4[-0x20];
  *(undefined4 *)(iVar7 + 0x18) = uVar6;
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = puVar4[-0x1f];
  *(int *)(iVar7 + 0x18) = (int)uVar17;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_WarpDecide_004624f8;
  local_38 = iVar16;
  func_0010BEC4((int)(puVar4 + -0x27),4,&local_38);
  iVar7 = puVar4[-0x21];
  uVar11 = puVar3[0x13];
  uVar6 = puVar3[0x14];
  uVar12 = puVar3[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar3[0x12];
  *(undefined4 *)(iVar7 + 0x24) = uVar11;
  iVar7 = puVar4[-0x20];
  *(undefined4 *)(iVar7 + 0x20) = uVar6;
  *(undefined4 *)(iVar7 + 0x24) = uVar12;
  iVar7 = puVar4[-0x1f];
  *(int *)(iVar7 + 0x20) = (int)uVar17;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_Cancel_0046250c;
  local_38 = iVar16;
  func_0010BEC4((int)(puVar4 + -0x27),5,&local_38);
  iVar16 = puVar4[-0x21];
  uVar6 = puVar3[0x18];
  uVar11 = puVar3[0x19];
  uVar12 = puVar3[0x17];
  *(undefined4 *)(iVar16 + 0x28) = puVar3[0x16];
  *(undefined4 *)(iVar16 + 0x2c) = uVar12;
  iVar16 = puVar4[-0x20];
  *(undefined4 *)(iVar16 + 0x28) = uVar6;
  *(undefined4 *)(iVar16 + 0x2c) = uVar11;
  iVar16 = puVar4[-0x1f];
  *(int *)(iVar16 + 0x28) = (int)uVar17;
  *(int *)(iVar16 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  return piVar13;
}

