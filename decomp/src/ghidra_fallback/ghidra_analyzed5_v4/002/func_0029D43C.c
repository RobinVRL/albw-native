#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001E3228(int param_1,int *param_2,int param_3);
extern int func_0029C760(undefined4 *param_1,undefined4 param_2);
extern int func_002DF3E4(int param_1);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_004C36DC(int param_1,undefined4 param_2);
extern int func_00661C18(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0029d7d0;
extern undefined4 DAT_0029d7d4;
extern undefined4 DAT_0029d7d8;
extern undefined4 DAT_0029d7dc;
extern undefined4 DAT_0029d7e0;
extern undefined4 *DAT_0029d7e4;
extern undefined4 DAT_0029d7e8;
extern undefined4 DAT_0029d7ec;
extern int DAT_0029d7f0;
extern int *DAT_0029d7f4;
extern int *DAT_0029d7f8;
extern undefined *DAT_0029d7fc;
extern int DAT_0029d810;
extern int *DAT_0029d968;
extern char s_cState_FileSelect_0029d954[];
extern char s_cState_LogoFadeOut_0029d940[];
extern char s_cState_Stanby_0029d800[];
extern char s_cState_TriForce_0029d814[];
extern char s_cState_Wait_0029d824[];

// USA 0029D43C <- EU 0029D418 (Ghidra, non-matching)
// GLOBAL DAT_0029d7d0 undefined4
// GLOBAL DAT_0029d7d4 undefined4
// GLOBAL DAT_0029d7d8 undefined4
// GLOBAL DAT_0029d7dc undefined4
// GLOBAL DAT_0029d7e0 undefined4
// GLOBAL DAT_0029d7e4 undefined4 *
// GLOBAL DAT_0029d7e8 undefined4
// GLOBAL DAT_0029d7ec undefined4
// GLOBAL DAT_0029d7f0 int
// GLOBAL DAT_0029d7f4 int *
// GLOBAL DAT_0029d7f8 int *
// GLOBAL DAT_0029d7fc undefined *
// GLOBAL DAT_0029d810 int
// GLOBAL DAT_0029d968 int *
// GLOBAL s_cState_FileSelect_0029d954 string
// GLOBAL s_cState_LogoFadeOut_0029d940 string
// GLOBAL s_cState_Stanby_0029d800 string
// GLOBAL s_cState_TriForce_0029d814 string
// GLOBAL s_cState_Wait_0029d824 string

undefined4 * func_0029D43C(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  puVar4 = func_001E3228(param_1,param_2,(int)"TaskFileSelect" /* EU 0029D7C0 */);
  *puVar4 = DAT_0029d7d0;
  puVar5 = func_0010A794(puVar4 + 0x2f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  puVar5[10] = 0x11;
  *(undefined2 *)(puVar5 + 0xb) = 0;
  *(undefined1 *)((int)puVar5 + 0x2e) = 1;
  puVar5[0xc] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x98);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
    puVar6 = func_002E1BB4(puVar6 + 1,0);
    uVar12 = DAT_0029d7d4;
    puVar4 = puVar6 + -1;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = uVar12;
    puVar6[0x12] = uVar12;
    puVar6[0x13] = uVar12;
    puVar6[0x14] = uVar12;
    puVar6[0x15] = uVar12;
    puVar6[0x16] = uVar12;
    puVar6[0x17] = uVar12;
    puVar6[0x18] = uVar12;
    puVar6[0x19] = uVar12;
    puVar6[0x1a] = uVar12;
    puVar6[0x1b] = uVar12;
    puVar6[0x1c] = uVar12;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    uVar14 = DAT_0029d7d8;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = uVar14;
    puVar6[0x22] = uVar12;
    puVar6[0x23] = uVar14;
    *(undefined1 *)(puVar6 + 0x24) = 1;
    uVar14 = DAT_0029d7e0;
    uVar12 = DAT_0029d7dc;
    *(undefined1 *)((int)puVar6 + 0x91) = 0;
    puVar6[6] = uVar12;
    puVar6[7] = uVar14;
  }
  puVar6 = DAT_0029d7e4;
  puVar5[0xe] = puVar4;
  puVar5[0xf] = 0;
  uVar12 = *puVar6;
  uVar14 = puVar6[1];
  puVar4 = func_0010CE7C(puVar5 + 0x10);
  *puVar4 = DAT_0029d7e8;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = puVar4;
  puVar4[7] = 0;
  puVar10 = puVar4 + 9;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar4[10] = puVar5 + -0x2f;
    puVar4[0xb] = uVar12;
    uVar12 = DAT_0029d7ec;
    puVar4[0xc] = uVar14;
    *puVar10 = uVar12;
  }
  puVar4[8] = puVar10;
  puVar10 = puVar4 + -0x3f;
  puVar5 = (undefined4 *)func_0010BAB4(0xfc);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar7 = func_0029C760(puVar5,puVar10);
  }
  iVar8 = DAT_0029d7f0;
  puVar4[0xf] = iVar7;
  puVar4[0x10] = 0;
  *(undefined1 *)(puVar4 + 0x11) = 1;
  *(undefined1 *)((int)puVar4 + 0x45) = 0;
  piVar2 = DAT_0029d7f4;
  *(undefined2 *)(iVar8 + (int)puVar10) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  *(undefined1 *)((int)puVar4 + 0x49) = 0;
  *(undefined1 *)(puVar4 + 0x15) = 5;
  *(undefined1 *)(*piVar2 + 0x25) = 2;
  func_002DF3E4(*DAT_0029d7f8);
  *(undefined1 *)((int)puVar4 + -0x3a) = 5;
  puVar4[-0xb] = puVar10;
  iVar7 = func_0010BA78(0x50);
  puVar4[-10] = iVar7;
  puVar4[-9] = iVar7 + (uint)*(byte *)((int)puVar4 + -0x3a) * 8;
  iVar8 = 5;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar12 = puVar6[0x37];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar6[0x36];
    puVar5[3] = uVar12;
    uVar12 = puVar6[0x37];
    puVar5[4] = puVar6[0x36];
    puVar5[5] = uVar12;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + -0x3a);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[-8] = puVar5;
  if (uVar11 != 0) {
    puVar9 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar6[7];
      *puVar5 = puVar6[6];
      puVar5[1] = uVar12;
      puVar9 = puVar5;
    }
    for (iVar7 = (int)uVar11 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar12 = puVar6[7];
      puVar9[2] = puVar6[6];
      puVar9[3] = uVar12;
      uVar12 = puVar6[7];
      puVar9[4] = puVar6[6];
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar3 = DAT_0029d7fc;
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 5;
    *puVar5 = 0x24;
    iVar7 = func_00100118((int)(puVar5 + 2),puVar3,0x24,5);
  }
  if (iVar7 != 0) {
    puVar4[-0xd] = iVar7;
    puVar4[-0xe] = 5;
  }
  iVar7 = DAT_0029d810;
  local_34 = s_cState_Stanby_0029d800;
  local_38 = DAT_0029d810;
  func_0010BEC4((int)(puVar4 + -0x10),0,&local_38);
  puVar5 = (undefined4 *)puVar4[-10];
  uVar12 = puVar6[3];
  uVar14 = puVar6[4];
  uVar16 = puVar6[6];
  uVar13 = puVar6[5];
  uVar15 = puVar6[7];
  *puVar5 = puVar6[2];
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar4[-9];
  *puVar5 = uVar14;
  puVar5[1] = uVar13;
  puVar5 = (undefined4 *)puVar4[-8];
  *puVar5 = uVar16;
  puVar5[1] = uVar15;
  local_34 = s_cState_TriForce_0029d814;
  local_38 = iVar7;
  func_0010BEC4((int)(puVar4 + -0x10),1,&local_38);
  iVar8 = puVar4[-10];
  uVar13 = puVar6[9];
  uVar12 = puVar6[10];
  uVar14 = puVar6[0xb];
  *(undefined4 *)(iVar8 + 8) = puVar6[8];
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = puVar4[-9];
  *(undefined4 *)(iVar8 + 8) = uVar12;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  iVar8 = puVar4[-8];
  *(undefined4 *)(iVar8 + 8) = uVar16;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  local_34 = s_cState_Wait_0029d824;
  local_38 = iVar7;
  func_0010BEC4((int)(puVar4 + -0x10),2,&local_38);
  iVar8 = puVar4[-10];
  uVar12 = puVar6[0xe];
  uVar14 = puVar6[0xd];
  uVar13 = puVar6[0xf];
  *(undefined4 *)(iVar8 + 0x10) = puVar6[0xc];
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar4[-9];
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  iVar8 = puVar4[-8];
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  local_34 = s_cState_LogoFadeOut_0029d940;
  local_38 = iVar7;
  func_0010BEC4((int)(puVar4 + -0x10),3,&local_38);
  iVar8 = puVar4[-10];
  uVar14 = puVar6[0x11];
  uVar12 = puVar6[0x12];
  uVar13 = puVar6[0x13];
  *(undefined4 *)(iVar8 + 0x18) = puVar6[0x10];
  *(undefined4 *)(iVar8 + 0x1c) = uVar14;
  iVar8 = puVar4[-9];
  *(undefined4 *)(iVar8 + 0x18) = uVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar13;
  iVar8 = puVar4[-8];
  *(undefined4 *)(iVar8 + 0x18) = uVar16;
  *(undefined4 *)(iVar8 + 0x1c) = uVar15;
  local_34 = s_cState_FileSelect_0029d954;
  local_38 = iVar7;
  func_0010BEC4((int)(puVar4 + -0x10),4,&local_38);
  iVar7 = puVar4[-10];
  uVar12 = puVar6[0x16];
  uVar13 = puVar6[0x17];
  uVar14 = puVar6[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x14];
  *(undefined4 *)(iVar7 + 0x24) = uVar14;
  iVar7 = puVar4[-9];
  *(undefined4 *)(iVar7 + 0x20) = uVar12;
  *(undefined4 *)(iVar7 + 0x24) = uVar13;
  iVar7 = puVar4[-8];
  *(undefined4 *)(iVar7 + 0x20) = uVar16;
  *(undefined4 *)(iVar7 + 0x24) = uVar15;
  func_00661C18(puVar4 + -0x10,0);
  func_004C36DC(*DAT_0029d968,*(undefined4 *)(*piVar2 + 0x112c));
  return puVar10;
}

