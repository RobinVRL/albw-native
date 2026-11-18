#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00270DFC(undefined4 *param_1);
extern undefined4 *DAT_00270070;
extern undefined4 DAT_00270074;
extern undefined4 *DAT_00270078;
extern undefined *DAT_0027007c;
extern int DAT_00270090;
extern char s_cState_FadeIn_00270094[];
extern char s_cState_FadeOut_002700b0[];
extern char s_cState_Loop_002700a4[];
extern char s_cState_Manual_002700c0[];
extern char s_cState_Sleep_00270080[];

// USA 0026FCE8 <- EU 0026FD10 (Ghidra, non-matching)
// GLOBAL DAT_00270070 undefined4 *
// GLOBAL DAT_00270074 undefined4
// GLOBAL DAT_00270078 undefined4 *
// GLOBAL DAT_0027007c undefined *
// GLOBAL DAT_00270090 int
// GLOBAL s_cState_FadeIn_00270094 string
// GLOBAL s_cState_FadeOut_002700b0 string
// GLOBAL s_cState_Loop_002700a4 string
// GLOBAL s_cState_Manual_002700c0 string
// GLOBAL s_cState_Sleep_00270080 string

int func_0026FCE8(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = (undefined4 *)func_0010BAB4(0x54);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_00270DFC(puVar2);
  }
  *param_1 = puVar3;
  puVar2 = (undefined4 *)func_0010BAB4(0x54);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_00270DFC(puVar2);
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0xff;
  puVar4 = func_0010A794(param_1 + 3);
  puVar4[5] = 0;
  puVar3 = DAT_00270070;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[0xd] = 0;
  uVar7 = puVar3[1];
  uVar9 = puVar3[2];
  puVar4[0xe] = *puVar3;
  puVar4[0xf] = uVar7;
  puVar4[0x10] = uVar9;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  func_0010B3EC(puVar4 + 0x11,4,(int)(puVar4 + 0x14));
  puVar4[0x18] = DAT_00270074;
  *(undefined1 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)((int)puVar4 + 0x65) = 1;
  *(undefined1 *)((int)puVar4 + 0x66) = 0;
  *(undefined1 *)((int)puVar4 + 0x67) = 0;
  *(undefined1 *)((int)puVar4 + 6) = 5;
  puVar4[5] = puVar4 + -3;
  iVar5 = func_0010BA78(0x50);
  puVar4[6] = iVar5;
  puVar3 = DAT_00270078;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 5;
  puVar2 = (undefined4 *)(iVar5 + -8);
  do {
    uVar7 = puVar3[0x17];
    iVar8 = iVar8 + -1;
    puVar2[2] = puVar3[0x16];
    puVar2[3] = uVar7;
    uVar7 = puVar3[0x17];
    puVar2[4] = puVar3[0x16];
    puVar2[5] = uVar7;
    puVar2 = puVar2 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar11 = (uint)bVar1;
  puVar2 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[8] = puVar2;
  if (uVar11 != 0) {
    puVar6 = puVar2 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar3[5];
      *puVar2 = puVar3[4];
      puVar2[1] = uVar7;
      puVar6 = puVar2;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar7 = puVar3[5];
      puVar6[2] = puVar3[4];
      puVar6[3] = uVar7;
      uVar7 = puVar3[5];
      puVar6[4] = puVar3[4];
      puVar6[5] = uVar7;
      puVar6 = puVar6 + 4;
    }
  }
  puVar2 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x24;
    puVar2[1] = 5;
    iVar5 = func_00100118((int)(puVar2 + 2),DAT_0027007c,0x24,5);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 5;
  }
  iVar5 = DAT_00270090;
  local_24 = s_cState_Sleep_00270080;
  local_28 = DAT_00270090;
  func_0010BEC4((int)puVar4,0,&local_28);
  puVar2 = (undefined4 *)puVar4[6];
  uVar9 = puVar3[2];
  uVar10 = *puVar3;
  uVar7 = puVar3[3];
  uVar12 = *(undefined8 *)(puVar3 + 4);
  puVar2[1] = puVar3[1];
  *puVar2 = uVar10;
  puVar2 = (undefined4 *)puVar4[7];
  puVar2[1] = uVar7;
  *puVar2 = uVar9;
  puVar2 = (undefined4 *)puVar4[8];
  *puVar2 = (int)uVar12;
  puVar2[1] = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_FadeIn_00270094;
  local_28 = iVar5;
  func_0010BEC4((int)puVar4,1,&local_28);
  iVar8 = puVar4[6];
  uVar7 = puVar3[7];
  uVar9 = puVar3[8];
  uVar10 = puVar3[9];
  *(undefined4 *)(iVar8 + 8) = puVar3[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar7;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar9;
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 8) = (int)uVar12;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Loop_002700a4;
  local_28 = iVar5;
  func_0010BEC4((int)puVar4,2,&local_28);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0xb];
  uVar7 = puVar3[0xc];
  uVar9 = puVar3[0xd];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar7;
  *(undefined4 *)(iVar8 + 0x14) = uVar9;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x10) = (int)uVar12;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_FadeOut_002700b0;
  local_28 = iVar5;
  func_0010BEC4((int)puVar4,3,&local_28);
  iVar8 = puVar4[6];
  uVar9 = puVar3[0xf];
  uVar7 = puVar3[0x10];
  uVar10 = puVar3[0x11];
  *(undefined4 *)(iVar8 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar9;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar7;
  *(undefined4 *)(iVar8 + 0x1c) = uVar10;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x18) = (int)uVar12;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar12 >> 0x20);
  local_24 = s_cState_Manual_002700c0;
  local_28 = iVar5;
  func_0010BEC4((int)puVar4,4,&local_28);
  iVar5 = puVar4[6];
  uVar10 = puVar3[0x13];
  uVar7 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x12];
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar7;
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar12;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar12 >> 0x20);
  return (int)(puVar4 + -3);
}

