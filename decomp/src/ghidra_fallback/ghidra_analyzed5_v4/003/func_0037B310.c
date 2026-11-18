#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0025D9E8(int param_1,int *param_2,int param_3);
extern int func_002DF3E4(int param_1);
extern undefined4 DAT_0037b6a8;
extern int *DAT_0037b6ac;
extern undefined4 *DAT_0037b6b0;
extern undefined *DAT_0037b6b4;
extern int DAT_0037b6c4;
extern int *DAT_0037b7ec;
extern char s_cState_Ask_0037b6ec[];
extern char s_cState_Confirm_0037b6f8[];
extern char s_cState_DeleteEnd_0037b7d8[];
extern char s_cState_DeleteStart_0037b708[];
extern char s_cState_Deleted_0037b72c[];
extern char s_cState_Deleting_0037b71c[];
extern char s_cState_Prepared_0037b6dc[];
extern char s_cState_Preparing_0037b6c8[];
extern char s_cState_Wait_0037b6b8[];

// USA 0037B310 <- EU 0037B2EC (Ghidra, non-matching)
// GLOBAL DAT_0037b6a8 undefined4
// GLOBAL DAT_0037b6ac int *
// GLOBAL DAT_0037b6b0 undefined4 *
// GLOBAL DAT_0037b6b4 undefined *
// GLOBAL DAT_0037b6c4 int
// GLOBAL DAT_0037b7ec int *
// GLOBAL s_cState_Ask_0037b6ec string
// GLOBAL s_cState_Confirm_0037b6f8 string
// GLOBAL s_cState_DeleteEnd_0037b7d8 string
// GLOBAL s_cState_DeleteStart_0037b708 string
// GLOBAL s_cState_Deleted_0037b72c string
// GLOBAL s_cState_Deleting_0037b71c string
// GLOBAL s_cState_Prepared_0037b6dc string
// GLOBAL s_cState_Preparing_0037b6c8 string
// GLOBAL s_cState_Wait_0037b6b8 string

int func_0037B310(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = (undefined4 *)func_0025D9E8(param_1,param_2,(int)"TaskFileFormatCheck" /* EU 0037B694 */);
  *puVar2 = DAT_0037b6a8;
  *(undefined2 *)(puVar2 + 0x2f) = 6;
  *(undefined2 *)((int)puVar2 + 0xbe) = 0xffff;
  puVar3 = func_0010A794(puVar2 + 0x30);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(*DAT_0037b6ac + 0x25) = 1;
  *(undefined1 *)((int)puVar3 + 6) = 9;
  puVar3[5] = puVar3 + -0x30;
  iVar4 = func_0010BA78(0x90);
  puVar3[6] = iVar4;
  puVar2 = DAT_0037b6b0;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 9;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar9 = puVar2[0x27];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x26];
    puVar5[3] = uVar9;
    uVar9 = puVar2[0x27];
    puVar5[4] = puVar2[0x26];
    puVar5[5] = uVar9;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar5;
  if (uVar8 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar9;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar9 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar9;
      uVar9 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 9;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0037b6b4,0x24,9);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 9;
  }
  iVar4 = DAT_0037b6c4;
  local_24 = s_cState_Wait_0037b6b8;
  local_28 = DAT_0037b6c4;
  func_0010BEC4((int)puVar3,0,&local_28);
  puVar5 = (undefined4 *)puVar3[6];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  uVar11 = puVar2[1];
  uVar12 = *(undefined8 *)(puVar2 + 4);
  *puVar5 = *puVar2;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar9;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = (int)uVar12;
  puVar5[1] = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Preparing_0037b6c8;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_28);
  iVar7 = puVar3[6];
  uVar10 = puVar2[7];
  uVar9 = puVar2[8];
  uVar11 = puVar2[9];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar9;
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 8) = (int)uVar12;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Prepared_0037b6dc;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_28);
  iVar7 = puVar3[6];
  uVar11 = puVar2[0xb];
  uVar9 = puVar2[0xd];
  uVar10 = puVar2[0xc];
  *(undefined4 *)(iVar7 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar10;
  *(undefined4 *)(iVar7 + 0x14) = uVar9;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x10) = (int)uVar12;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Ask_0037b6ec;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_28);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x10];
  uVar11 = puVar2[0x11];
  uVar10 = puVar2[0xf];
  *(undefined4 *)(iVar7 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar10;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar9;
  *(undefined4 *)(iVar7 + 0x1c) = uVar11;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x18) = (int)uVar12;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Confirm_0037b6f8;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_28);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x13];
  uVar10 = puVar2[0x14];
  uVar11 = puVar2[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar2[0x12];
  *(undefined4 *)(iVar7 + 0x24) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar10;
  *(undefined4 *)(iVar7 + 0x24) = uVar11;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x20) = (int)uVar12;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_DeleteStart_0037b708;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_28);
  iVar7 = puVar3[6];
  uVar11 = puVar2[0x17];
  uVar9 = puVar2[0x18];
  uVar10 = puVar2[0x19];
  *(undefined4 *)(iVar7 + 0x28) = puVar2[0x16];
  *(undefined4 *)(iVar7 + 0x2c) = uVar11;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar9;
  *(undefined4 *)(iVar7 + 0x2c) = uVar10;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x28) = (int)uVar12;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Deleting_0037b71c;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_28);
  iVar7 = puVar3[6];
  uVar10 = puVar2[0x1b];
  uVar9 = puVar2[0x1c];
  uVar11 = puVar2[0x1d];
  *(undefined4 *)(iVar7 + 0x30) = puVar2[0x1a];
  *(undefined4 *)(iVar7 + 0x34) = uVar10;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar9;
  *(undefined4 *)(iVar7 + 0x34) = uVar11;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x30) = (int)uVar12;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Deleted_0037b72c;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,7,&local_28);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x1f];
  uVar10 = puVar2[0x20];
  uVar11 = puVar2[0x21];
  *(undefined4 *)(iVar7 + 0x38) = puVar2[0x1e];
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar10;
  *(undefined4 *)(iVar7 + 0x3c) = uVar11;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x38) = (int)uVar12;
  *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_DeleteEnd_0037b7d8;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,8,&local_28);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x23];
  uVar10 = puVar2[0x24];
  uVar11 = puVar2[0x25];
  *(undefined4 *)(iVar4 + 0x40) = puVar2[0x22];
  *(undefined4 *)(iVar4 + 0x44) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x40) = uVar10;
  *(undefined4 *)(iVar4 + 0x44) = uVar11;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x40) = (int)uVar12;
  *(int *)(iVar4 + 0x44) = (int)((ulonglong)uVar12 >> 0x20);
  func_002DF3E4(*DAT_0037b7ec);
  return (int)(puVar3 + -0x30);
}

