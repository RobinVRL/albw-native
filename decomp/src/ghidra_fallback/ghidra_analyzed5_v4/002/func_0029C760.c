#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_0066BD18(undefined4 *param_1,undefined1 param_2);
extern undefined *DAT_0029cb4c;
extern int DAT_0029cb50;
extern undefined *DAT_0029cb54;
extern int DAT_0029cb68;
extern char s_cState_Change_0029cb98[];
extern char s_cState_FadeOut2_0029cb88[];
extern char s_cState_FadeOut_0029cb78[];
extern char s_cState_FileChange_0029cbc0[];
extern char s_cState_PreFileChange_0029cba8[];
extern char s_cState_Sleep_0029cb58[];
extern char s_cState_Wait_0029cb6c[];

// USA 0029C760 <- EU 0029C73C (Ghidra, non-matching)
// GLOBAL DAT_0029cb4c undefined *
// GLOBAL DAT_0029cb50 int
// GLOBAL DAT_0029cb54 undefined *
// GLOBAL DAT_0029cb68 int
// GLOBAL s_cState_Change_0029cb98 string
// GLOBAL s_cState_FadeOut2_0029cb88 string
// GLOBAL s_cState_FadeOut_0029cb78 string
// GLOBAL s_cState_FileChange_0029cbc0 string
// GLOBAL s_cState_PreFileChange_0029cba8 string
// GLOBAL s_cState_Sleep_0029cb58 string
// GLOBAL s_cState_Wait_0029cb6c string

int func_0029C760(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  *param_1 = param_2;
  puVar3 = func_0010A794(param_1 + 1);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar2 = DAT_0029cb4c;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  iVar4 = func_00100118((int)(puVar3 + 0xd),puVar2,0xc,10);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + -4) = 0;
    *(int *)(iVar4 + -0x10) = iVar4;
    *(undefined4 *)(iVar4 + -0xc) = 10;
    *(undefined4 *)(iVar4 + -8) = 0;
  }
  iVar4 = func_003673F4((undefined4 *)(iVar4 + 0x78),3);
  *(undefined1 *)(iVar4 + 0x38) = 0;
  *(undefined1 *)(iVar4 + 0x39) = 0;
  *(undefined4 *)(iVar4 + -0x7c) = 0;
  *(undefined4 *)(iVar4 + -0x80) = 0;
  iVar5 = *(int *)(iVar4 + -0xb0);
  iVar8 = *(int *)(iVar4 + -0x84);
  if (0 < iVar8) {
    *(undefined4 *)(iVar4 + -0x7c) = 1;
    iVar6 = 0;
    if (iVar8 < 1) {
      iVar6 = -iVar8;
    }
    uVar9 = *(undefined4 *)(iVar5 + 0xe0);
    uVar12 = *(undefined4 *)(iVar5 + 0xe4);
    puVar3 = (undefined4 *)(*(int *)(iVar4 + -0x88) + iVar6 * 0xc);
    puVar3[2] = *(undefined4 *)(iVar5 + 0xe8);
    *puVar3 = uVar9;
    puVar3[1] = uVar12;
  }
  *(int *)(iVar4 + -0x98) = iVar4 + -0xb0;
  *(undefined1 *)(iVar4 + -0xa6) = 7;
  iVar8 = func_0010BA78(0x70);
  iVar5 = DAT_0029cb50;
  *(int *)(iVar4 + -0x94) = iVar8;
  *(uint *)(iVar4 + -0x90) = iVar8 + (uint)*(byte *)(iVar4 + -0xa6) * 8;
  iVar6 = 7;
  puVar3 = (undefined4 *)(iVar8 + -8);
  do {
    uVar9 = *(undefined4 *)(iVar5 + 100);
    iVar6 = iVar6 + -1;
    puVar3[2] = *(undefined4 *)(iVar5 + 0x60);
    puVar3[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar5 + 100);
    puVar3[4] = *(undefined4 *)(iVar5 + 0x60);
    puVar3[5] = uVar9;
    puVar3 = puVar3 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)(iVar4 + -0xa6);
  uVar11 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar11 << 3);
  *(undefined4 **)(iVar4 + -0x8c) = puVar3;
  if (uVar11 != 0) {
    puVar7 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(undefined4 *)(iVar5 + 0x74);
      *puVar3 = *(undefined4 *)(iVar5 + 0x70);
      puVar3[1] = uVar9;
      puVar7 = puVar3;
    }
    for (iVar8 = (int)uVar11 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar9 = *(undefined4 *)(iVar5 + 0x74);
      puVar7[2] = *(undefined4 *)(iVar5 + 0x70);
      puVar7[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar5 + 0x74);
      puVar7[4] = *(undefined4 *)(iVar5 + 0x70);
      puVar7[5] = uVar9;
      puVar7 = puVar7 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  puVar2 = DAT_0029cb54;
  iVar8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 7;
    *puVar3 = 0x24;
    iVar8 = func_00100118((int)(puVar3 + 2),puVar2,0x24,7);
  }
  if (iVar8 != 0) {
    *(int *)(iVar4 + -0xa0) = iVar8;
    *(undefined4 *)(iVar4 + -0xa4) = 7;
  }
  iVar8 = DAT_0029cb68;
  local_24 = s_cState_Sleep_0029cb58;
  local_28 = DAT_0029cb68;
  func_0010BEC4(iVar4 + -0xac,0,&local_28);
  puVar3 = *(undefined4 **)(iVar4 + -0x94);
  uVar9 = *(undefined4 *)(iVar5 + 100);
  uVar12 = *(undefined4 *)(iVar5 + 0x68);
  uVar10 = *(undefined4 *)(iVar5 + 0x6c);
  uVar14 = *(undefined4 *)(iVar5 + 0x70);
  uVar13 = *(undefined4 *)(iVar5 + 0x74);
  *puVar3 = *(undefined4 *)(iVar5 + 0x60);
  puVar3[1] = uVar9;
  puVar3 = *(undefined4 **)(iVar4 + -0x90);
  *puVar3 = uVar12;
  puVar3[1] = uVar10;
  puVar3 = *(undefined4 **)(iVar4 + -0x8c);
  *puVar3 = uVar14;
  puVar3[1] = uVar13;
  local_24 = s_cState_Wait_0029cb6c;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0xac,1,&local_28);
  iVar6 = *(int *)(iVar4 + -0x94);
  uVar12 = *(undefined4 *)(iVar5 + 0x7c);
  uVar10 = *(undefined4 *)(iVar5 + 0x80);
  uVar9 = *(undefined4 *)(iVar5 + 0x84);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 0x78);
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x90);
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar9;
  iVar6 = *(int *)(iVar4 + -0x8c);
  *(undefined4 *)(iVar6 + 8) = uVar14;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  local_24 = s_cState_FadeOut_0029cb78;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0xac,2,&local_28);
  iVar6 = *(int *)(iVar4 + -0x94);
  uVar9 = *(undefined4 *)(iVar5 + 0x8c);
  uVar10 = *(undefined4 *)(iVar5 + 0x90);
  uVar12 = *(undefined4 *)(iVar5 + 0x94);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar5 + 0x88);
  *(undefined4 *)(iVar6 + 0x14) = uVar9;
  iVar6 = *(int *)(iVar4 + -0x90);
  *(undefined4 *)(iVar6 + 0x10) = uVar10;
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x8c);
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  local_24 = s_cState_FadeOut2_0029cb88;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0xac,3,&local_28);
  iVar6 = *(int *)(iVar4 + -0x94);
  uVar9 = *(undefined4 *)(iVar5 + 0x9c);
  uVar10 = *(undefined4 *)(iVar5 + 0xa0);
  uVar12 = *(undefined4 *)(iVar5 + 0xa4);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar5 + 0x98);
  *(undefined4 *)(iVar6 + 0x1c) = uVar9;
  iVar6 = *(int *)(iVar4 + -0x90);
  *(undefined4 *)(iVar6 + 0x18) = uVar10;
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x8c);
  *(undefined4 *)(iVar6 + 0x18) = uVar14;
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  local_24 = s_cState_Change_0029cb98;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0xac,4,&local_28);
  iVar6 = *(int *)(iVar4 + -0x94);
  uVar9 = *(undefined4 *)(iVar5 + 0xb0);
  uVar10 = *(undefined4 *)(iVar5 + 0xb4);
  uVar12 = *(undefined4 *)(iVar5 + 0xac);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar5 + 0xa8);
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x90);
  *(undefined4 *)(iVar6 + 0x20) = uVar9;
  *(undefined4 *)(iVar6 + 0x24) = uVar10;
  iVar6 = *(int *)(iVar4 + -0x8c);
  *(undefined4 *)(iVar6 + 0x20) = uVar14;
  *(undefined4 *)(iVar6 + 0x24) = uVar13;
  local_24 = s_cState_PreFileChange_0029cba8;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0xac,5,&local_28);
  iVar6 = *(int *)(iVar4 + -0x94);
  uVar9 = *(undefined4 *)(iVar5 + 0xbc);
  uVar10 = *(undefined4 *)(iVar5 + 0xc0);
  uVar12 = *(undefined4 *)(iVar5 + 0xc4);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar5 + 0xb8);
  *(undefined4 *)(iVar6 + 0x2c) = uVar9;
  iVar6 = *(int *)(iVar4 + -0x90);
  *(undefined4 *)(iVar6 + 0x28) = uVar10;
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x8c);
  *(undefined4 *)(iVar6 + 0x28) = uVar14;
  *(undefined4 *)(iVar6 + 0x2c) = uVar13;
  local_24 = s_cState_FileChange_0029cbc0;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0xac,6,&local_28);
  iVar8 = *(int *)(iVar4 + -0x94);
  uVar10 = *(undefined4 *)(iVar5 + 0xcc);
  uVar9 = *(undefined4 *)(iVar5 + 0xd0);
  uVar12 = *(undefined4 *)(iVar5 + 0xd4);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar5 + 200);
  *(undefined4 *)(iVar8 + 0x34) = uVar10;
  iVar5 = *(int *)(iVar4 + -0x90);
  *(undefined4 *)(iVar5 + 0x30) = uVar9;
  *(undefined4 *)(iVar5 + 0x34) = uVar12;
  iVar5 = *(int *)(iVar4 + -0x8c);
  *(undefined4 *)(iVar5 + 0x30) = uVar14;
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  func_0066BD18((undefined4 *)(iVar4 + -0xac),0);
  return iVar4 + -0xb0;
}

