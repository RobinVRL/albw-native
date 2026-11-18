#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003BC2F0(int param_1,int *param_2,int *param_3);
extern int func_00491260(undefined4 *param_1);
extern int DAT_003aa8f8;
extern undefined4 DAT_003aa8fc;
extern undefined4 *DAT_003aa900;
extern undefined *DAT_003aa904;
extern char s_LoadingFader_003aa8e8[];
extern char s_cState_InfoIn_003aa934[];
extern char s_cState_MatAnim_003aa908[];
extern char s_cState_Out_003aa944[];
extern char s_cState_TopIn_003aa924[];
extern char s_cState_Wait_003aa918[];
extern char s_cState_WipeOpen_003aa950[];

// USA 003AA5D0 <- EU 003AA5AC (Ghidra, non-matching)
// GLOBAL DAT_003aa8f8 int
// GLOBAL DAT_003aa8fc undefined4
// GLOBAL DAT_003aa900 undefined4 *
// GLOBAL DAT_003aa904 undefined *
// GLOBAL s_LoadingFader_003aa8e8 string
// GLOBAL s_cState_InfoIn_003aa934 string
// GLOBAL s_cState_MatAnim_003aa908 string
// GLOBAL s_cState_Out_003aa944 string
// GLOBAL s_cState_TopIn_003aa924 string
// GLOBAL s_cState_Wait_003aa918 string
// GLOBAL s_cState_WipeOpen_003aa950 string

int func_003AA5D0(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  iVar12 = DAT_003aa8f8;
  local_2c = s_LoadingFader_003aa8e8;
  local_30 = DAT_003aa8f8;
  puVar2 = (undefined4 *)func_003BC2F0(param_1,param_2,&local_30);
  *puVar2 = DAT_003aa8fc;
  puVar2 = func_0010A794(puVar2 + 0x84);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  iVar3 = func_00491260(puVar2 + 9);
  *(undefined1 *)(iVar3 + -0x1e) = 6;
  *(int *)(iVar3 + -0x10) = iVar3 + -0x234;
  iVar4 = func_0010BA78(0x60);
  *(int *)(iVar3 + -0xc) = iVar4;
  puVar2 = DAT_003aa900;
  *(uint *)(iVar3 + -8) = iVar4 + (uint)*(byte *)(iVar3 + -0x1e) * 8;
  iVar7 = 6;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar11 = puVar2[1];
    puVar5[2] = *puVar2;
    puVar5[3] = uVar11;
    iVar7 = iVar7 + -1;
    uVar11 = puVar2[1];
    puVar5[4] = *puVar2;
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)(iVar3 + -0x1e);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  *(undefined4 **)(iVar3 + -4) = puVar5;
  if (uVar10 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar11;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar11 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar11;
      uVar11 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar11;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_003aa904,0x24,6);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(iVar3 + -0x1c) = 6;
    *(int *)(iVar3 + -0x18) = iVar4;
  }
  local_2c = s_cState_MatAnim_003aa908;
  local_30 = iVar12;
  func_0010BEC4(iVar3 + -0x24,0,&local_30);
  puVar5 = *(undefined4 **)(iVar3 + -0xc);
  uVar11 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  uVar14 = puVar2[4];
  uVar13 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar11;
  puVar5 = *(undefined4 **)(iVar3 + -8);
  *puVar5 = uVar8;
  puVar5[1] = uVar9;
  puVar5 = *(undefined4 **)(iVar3 + -4);
  *puVar5 = uVar14;
  puVar5[1] = uVar13;
  local_2c = s_cState_Wait_003aa918;
  local_30 = iVar12;
  func_0010BEC4(iVar3 + -0x24,1,&local_30);
  iVar4 = *(int *)(iVar3 + -0xc);
  uVar9 = puVar2[1];
  uVar11 = puVar2[7];
  uVar8 = puVar2[6];
  *(undefined4 *)(iVar4 + 8) = *puVar2;
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar11;
  iVar4 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar4 + 8) = uVar14;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  local_2c = s_cState_TopIn_003aa924;
  local_30 = iVar12;
  func_0010BEC4(iVar3 + -0x24,2,&local_30);
  iVar4 = *(int *)(iVar3 + -0xc);
  uVar11 = puVar2[9];
  uVar8 = puVar2[10];
  uVar9 = puVar2[0xb];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[8];
  *(undefined4 *)(iVar4 + 0x14) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x10) = uVar8;
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar4 + 0x10) = uVar14;
  *(undefined4 *)(iVar4 + 0x14) = uVar13;
  local_2c = s_cState_InfoIn_003aa934;
  local_30 = iVar12;
  func_0010BEC4(iVar3 + -0x24,3,&local_30);
  iVar4 = *(int *)(iVar3 + -0xc);
  uVar11 = puVar2[0xd];
  uVar8 = puVar2[0xe];
  uVar9 = puVar2[0xf];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xc];
  *(undefined4 *)(iVar4 + 0x1c) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x18) = uVar8;
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  iVar4 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar4 + 0x18) = uVar14;
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  local_2c = s_cState_Out_003aa944;
  local_30 = iVar12;
  func_0010BEC4(iVar3 + -0x24,4,&local_30);
  iVar4 = *(int *)(iVar3 + -0xc);
  uVar11 = puVar2[0x11];
  uVar8 = puVar2[0x12];
  uVar9 = puVar2[0x13];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x10];
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x20) = uVar8;
  *(undefined4 *)(iVar4 + 0x24) = uVar9;
  iVar4 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar4 + 0x20) = uVar14;
  *(undefined4 *)(iVar4 + 0x24) = uVar13;
  local_2c = s_cState_WipeOpen_003aa950;
  local_30 = iVar12;
  func_0010BEC4(iVar3 + -0x24,5,&local_30);
  iVar12 = *(int *)(iVar3 + -0xc);
  uVar9 = puVar2[0x15];
  uVar11 = puVar2[0x16];
  uVar8 = puVar2[0x17];
  *(undefined4 *)(iVar12 + 0x28) = puVar2[0x14];
  *(undefined4 *)(iVar12 + 0x2c) = uVar9;
  iVar12 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar12 + 0x28) = uVar11;
  *(undefined4 *)(iVar12 + 0x2c) = uVar8;
  iVar12 = *(int *)(iVar3 + -4);
  *(undefined4 *)(iVar12 + 0x28) = uVar14;
  *(undefined4 *)(iVar12 + 0x2c) = uVar13;
  return iVar3 + -0x234;
}

