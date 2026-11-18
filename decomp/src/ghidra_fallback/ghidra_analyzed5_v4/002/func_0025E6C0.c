#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA24(int param_1,undefined4 param_2);
extern int func_001E3228(int param_1,int *param_2,int param_3);
extern int func_002DF3E4(int param_1);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern undefined4 DAT_0025eaa4;
extern int DAT_0025eaa8;
extern undefined4 DAT_0025eaac;
extern undefined4 DAT_0025eab0;
extern undefined4 DAT_0025eab4;
extern undefined4 DAT_0025eab8;
extern int DAT_0025eabc;
extern undefined4 DAT_0025eac0;
extern undefined4 DAT_0025eac4;
extern int *DAT_0025eac8;
extern int *DAT_0025eacc;
extern undefined *DAT_0025ead0;
extern int DAT_0025eae0;
extern char s_cState_Copyright_0025ecd8[];
extern char s_cState_EndWait_0025ecec[];
extern char s_cState_End_0025ecfc[];
extern char s_cState_Fadein_0025eae4[];
extern char s_cState_FadeoutWait_0025ecb4[];
extern char s_cState_Fadeout_0025ecc8[];
extern char s_cState_Picture_0025eaf4[];
extern char s_cState_Wait_0025ead4[];

// USA 0025E6C0 <- EU 0025E6E8 (Ghidra, non-matching)
// GLOBAL DAT_0025eaa4 undefined4
// GLOBAL DAT_0025eaa8 int
// GLOBAL DAT_0025eaac undefined4
// GLOBAL DAT_0025eab0 undefined4
// GLOBAL DAT_0025eab4 undefined4
// GLOBAL DAT_0025eab8 undefined4
// GLOBAL DAT_0025eabc int
// GLOBAL DAT_0025eac0 undefined4
// GLOBAL DAT_0025eac4 undefined4
// GLOBAL DAT_0025eac8 int *
// GLOBAL DAT_0025eacc int *
// GLOBAL DAT_0025ead0 undefined *
// GLOBAL DAT_0025eae0 int
// GLOBAL s_cState_Copyright_0025ecd8 string
// GLOBAL s_cState_EndWait_0025ecec string
// GLOBAL s_cState_End_0025ecfc string
// GLOBAL s_cState_Fadein_0025eae4 string
// GLOBAL s_cState_FadeoutWait_0025ecb4 string
// GLOBAL s_cState_Fadeout_0025ecc8 string
// GLOBAL s_cState_Picture_0025eaf4 string
// GLOBAL s_cState_Wait_0025ead4 string

int func_0025E6C0(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_001E3228(param_1,param_2,(int)"TaskStaffroll" /* EU 0025EA94 */);
  iVar9 = DAT_0025eaa8;
  *puVar3 = DAT_0025eaa4;
  uVar10 = *(undefined4 *)(iVar9 + 8);
  *(undefined1 *)(puVar3 + 0x2f) = *(undefined1 *)(iVar9 + 4);
  puVar3[0x30] = uVar10;
  *(undefined2 *)(puVar3 + 0x31) = 0x3f;
  *(undefined1 *)((int)puVar3 + 0xc6) = 1;
  puVar4 = func_0010A794(puVar3 + 0x32);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x98);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5 = func_002E1BB4(puVar5 + 1,0);
    uVar10 = DAT_0025eaac;
    puVar3 = puVar5 + -1;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = uVar10;
    puVar5[0x12] = uVar10;
    puVar5[0x13] = uVar10;
    puVar5[0x14] = uVar10;
    puVar5[0x15] = uVar10;
    puVar5[0x16] = uVar10;
    puVar5[0x17] = uVar10;
    puVar5[0x18] = uVar10;
    puVar5[0x19] = uVar10;
    puVar5[0x1a] = uVar10;
    puVar5[0x1b] = uVar10;
    puVar5[0x1c] = uVar10;
    puVar5[0x1d] = 0;
    puVar5[0x1e] = 0;
    uVar11 = DAT_0025eab0;
    puVar5[0x1f] = 0;
    puVar5[0x20] = 0;
    puVar5[0x21] = uVar11;
    puVar5[0x22] = uVar10;
    puVar5[0x23] = uVar11;
    *(undefined1 *)(puVar5 + 0x24) = 1;
    uVar11 = DAT_0025eab8;
    uVar10 = DAT_0025eab4;
    *(undefined1 *)((int)puVar5 + 0x91) = 0;
    puVar5[6] = uVar10;
    puVar5[7] = uVar11;
  }
  iVar9 = DAT_0025eabc;
  puVar4[10] = puVar3;
  uVar11 = *(undefined4 *)(iVar9 + 4);
  uVar13 = *(undefined4 *)(iVar9 + 8);
  puVar3 = func_0010CE7C(puVar4 + 0xc);
  *puVar3 = DAT_0025eac0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar3[7] = 0;
  puVar5 = puVar3 + 9;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  uVar10 = DAT_0025eac4;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3[10] = puVar4 + -0x32;
    puVar3[0xb] = uVar11;
    puVar3[0xc] = uVar13;
    *puVar5 = uVar10;
  }
  puVar3[0xf] = 0;
  puVar3[8] = puVar5;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  iVar6 = func_0010DA24((int)(puVar3 + 0x12),puVar5);
  piVar2 = DAT_0025eac8;
  *(undefined4 *)(iVar6 + 8) = 0;
  func_002DF3E4(*piVar2);
  *(undefined1 *)(*DAT_0025eacc + 0x25) = 3;
  func_002DF3E4(*piVar2);
  *(undefined1 *)(iVar6 + -0x72) = 8;
  *(int *)(iVar6 + -100) = iVar6 + -0x140;
  iVar7 = func_0010BA78(0x80);
  *(int *)(iVar6 + -0x60) = iVar7;
  iVar8 = 8;
  *(uint *)(iVar6 + -0x5c) = iVar7 + (uint)*(byte *)(iVar6 + -0x72) * 8;
  puVar3 = (undefined4 *)(iVar7 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar9 + 0x48);
    iVar8 = iVar8 + -1;
    puVar3[2] = *(undefined4 *)(iVar9 + 0x44);
    puVar3[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar9 + 0x48);
    puVar3[4] = *(undefined4 *)(iVar9 + 0x44);
    puVar3[5] = uVar10;
    puVar3 = puVar3 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)(iVar6 + -0x72);
  uVar12 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar12 << 3);
  *(undefined4 **)(iVar6 + -0x58) = puVar3;
  if (uVar12 != 0) {
    puVar4 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar9 + 0x20);
      *puVar3 = *(undefined4 *)(iVar9 + 0x1c);
      puVar3[1] = uVar10;
      puVar4 = puVar3;
    }
    for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar10 = *(undefined4 *)(iVar9 + 0x20);
      puVar4[2] = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar9 + 0x20);
      puVar4[4] = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[5] = uVar10;
      puVar4 = puVar4 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 8;
    iVar7 = func_00100118((int)(puVar3 + 2),DAT_0025ead0,0x24,8);
  }
  if (iVar7 != 0) {
    *(int *)(iVar6 + -0x6c) = iVar7;
    *(undefined4 *)(iVar6 + -0x70) = 8;
  }
  iVar7 = DAT_0025eae0;
  local_2c = s_cState_Wait_0025ead4;
  local_30 = DAT_0025eae0;
  func_0010BEC4(iVar6 + -0x78,0,&local_30);
  puVar3 = *(undefined4 **)(iVar6 + -0x60);
  uVar11 = *(undefined4 *)(iVar9 + 0x14);
  uVar13 = *(undefined4 *)(iVar9 + 0x10);
  uVar10 = *(undefined4 *)(iVar9 + 0x18);
  uVar14 = *(undefined8 *)(iVar9 + 0x1c);
  *puVar3 = *(undefined4 *)(iVar9 + 0xc);
  puVar3[1] = uVar13;
  puVar3 = *(undefined4 **)(iVar6 + -0x5c);
  puVar3[1] = uVar10;
  *puVar3 = uVar11;
  puVar3 = *(undefined4 **)(iVar6 + -0x58);
  *puVar3 = (int)uVar14;
  puVar3[1] = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_Fadein_0025eae4;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,1,&local_30);
  iVar8 = *(int *)(iVar6 + -0x60);
  uVar13 = *(undefined4 *)(iVar9 + 0x28);
  uVar10 = *(undefined4 *)(iVar9 + 0x30);
  uVar11 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar8 + 8) = (int)uVar14;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_Picture_0025eaf4;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,2,&local_30);
  uVar10 = *(undefined4 *)(iVar9 + 0x3c);
  uVar13 = *(undefined4 *)(iVar9 + 0x40);
  uVar11 = *(undefined4 *)(iVar9 + 0x38);
  iVar8 = *(int *)(iVar6 + -0x60);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar8 + 0x14) = uVar11;
  iVar8 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar8 + 0x10) = uVar10;
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  iVar8 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar8 + 0x10) = (int)uVar14;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_FadeoutWait_0025ecb4;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,3,&local_30);
  iVar8 = *(int *)(iVar6 + -0x60);
  uVar10 = *(undefined4 *)(iVar9 + 0x48);
  uVar13 = *(undefined4 *)(iVar9 + 0x4c);
  uVar11 = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(iVar8 + 0x1c) = uVar10;
  iVar8 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar8 + 0x18) = uVar13;
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  iVar8 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar8 + 0x18) = (int)uVar14;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_Fadeout_0025ecc8;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,4,&local_30);
  iVar8 = *(int *)(iVar6 + -0x60);
  uVar11 = *(undefined4 *)(iVar9 + 0x58);
  uVar10 = *(undefined4 *)(iVar9 + 0x5c);
  uVar13 = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar8 + 0x24) = uVar11;
  iVar8 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar8 + 0x20) = uVar10;
  *(undefined4 *)(iVar8 + 0x24) = uVar13;
  iVar8 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar8 + 0x20) = (int)uVar14;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_Copyright_0025ecd8;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,5,&local_30);
  iVar8 = *(int *)(iVar6 + -0x60);
  uVar15 = *(undefined8 *)(iVar9 + 0x44);
  uVar10 = *(undefined4 *)(iVar9 + 100);
  uVar11 = *(undefined4 *)(iVar9 + 0x68);
  *(int *)(iVar8 + 0x28) = (int)uVar15;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar15 >> 0x20);
  iVar8 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar8 + 0x28) = uVar10;
  *(undefined4 *)(iVar8 + 0x2c) = uVar11;
  iVar8 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar8 + 0x28) = (int)uVar14;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_EndWait_0025ecec;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,6,&local_30);
  iVar8 = *(int *)(iVar6 + -0x60);
  uVar10 = *(undefined4 *)(iVar9 + 0x6c);
  uVar11 = *(undefined4 *)(iVar9 + 0x70);
  *(int *)(iVar8 + 0x30) = (int)uVar15;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar15 >> 0x20);
  iVar8 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar8 + 0x30) = uVar10;
  *(undefined4 *)(iVar8 + 0x34) = uVar11;
  iVar8 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar8 + 0x30) = (int)uVar14;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
  local_2c = s_cState_End_0025ecfc;
  local_30 = iVar7;
  func_0010BEC4(iVar6 + -0x78,7,&local_30);
  iVar7 = *(int *)(iVar6 + -0x60);
  uVar11 = *(undefined4 *)(iVar9 + 0x78);
  uVar13 = *(undefined4 *)(iVar9 + 0x7c);
  uVar10 = *(undefined4 *)(iVar9 + 0x80);
  *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar9 + 0x74);
  *(undefined4 *)(iVar7 + 0x3c) = uVar11;
  iVar9 = *(int *)(iVar6 + -0x5c);
  *(undefined4 *)(iVar9 + 0x38) = uVar13;
  *(undefined4 *)(iVar9 + 0x3c) = uVar10;
  iVar9 = *(int *)(iVar6 + -0x58);
  *(int *)(iVar9 + 0x38) = (int)uVar14;
  *(int *)(iVar9 + 0x3c) = (int)((ulonglong)uVar14 >> 0x20);
  return iVar6 + -0x140;
}

