#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_003A55A0(undefined4 *param_1);
extern int func_0065EB40(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00230560;
extern undefined4 DAT_00230564;
extern undefined4 *DAT_00230568;
extern undefined4 DAT_0023056c;
extern undefined *DAT_00230570;
extern int DAT_00230580;
extern char s_cState_End_002305c0[];
extern char s_cState_Miss_002305cc[];
extern char s_cState_SwingBell_00230590[];
extern char s_cState_TakeOff_002305b0[];
extern char s_cState_UI_00230584[];
extern char s_cState_Wait_00230574[];
extern char s_cState_Warp_002305a4[];

// USA 00230174 <- EU 00230174 (Ghidra, non-matching)
// GLOBAL DAT_00230560 undefined4
// GLOBAL DAT_00230564 undefined4
// GLOBAL DAT_00230568 undefined4 *
// GLOBAL DAT_0023056c undefined4
// GLOBAL DAT_00230570 undefined *
// GLOBAL DAT_00230580 int
// GLOBAL s_cState_End_002305c0 string
// GLOBAL s_cState_Miss_002305cc string
// GLOBAL s_cState_SwingBell_00230590 string
// GLOBAL s_cState_TakeOff_002305b0 string
// GLOBAL s_cState_UI_00230584 string
// GLOBAL s_cState_Wait_00230574 string
// GLOBAL s_cState_Warp_002305a4 string

undefined4 * func_00230174(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = (undefined4 *)func_001663BC(param_1,DAT_00230560,0,1,1);
  *puVar2 = DAT_00230564;
  puVar2 = func_003A55A0(puVar2 + 0x42);
  puVar3 = func_0010A794(puVar2 + 0x52);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 1;
  *(undefined1 *)((int)puVar3 + 0x25) = 0;
  *(undefined1 *)((int)puVar3 + 0x26) = 0;
  puVar2 = DAT_00230568;
  puVar3[10] = 0;
  puVar11 = puVar3 + -0x94;
  puVar3[0xc] = 0;
  uVar8 = puVar2[0x23];
  puVar3[0xd] = puVar2[0x22];
  puVar3[0xe] = uVar8;
  puVar3[0xb] = DAT_0023056c;
  *(undefined1 *)((int)puVar3 + 6) = 7;
  puVar3[5] = puVar11;
  iVar4 = func_0010BA78(0x70);
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 7;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar8 = puVar2[1];
    puVar5[2] = *puVar2;
    puVar5[3] = uVar8;
    iVar7 = iVar7 + -1;
    uVar8 = puVar2[1];
    puVar5[4] = *puVar2;
    puVar5[5] = uVar8;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar12 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar3[8] = puVar5;
  if (uVar12 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar8;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar8 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar8;
      uVar8 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar8;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 7;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00230570,0x24,7);
  }
  if (iVar4 != 0) {
    puVar3[2] = 7;
    puVar3[3] = iVar4;
  }
  iVar4 = DAT_00230580;
  local_24 = s_cState_Wait_00230574;
  local_28 = DAT_00230580;
  func_0010BEC4((int)puVar3,0,&local_28);
  puVar5 = (undefined4 *)puVar3[6];
  uVar9 = puVar2[2];
  uVar8 = *puVar2;
  uVar10 = puVar2[3];
  uVar15 = puVar2[4];
  uVar13 = puVar2[5];
  puVar5[1] = puVar2[1];
  *puVar5 = uVar8;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar9;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar15;
  puVar5[1] = uVar13;
  local_24 = s_cState_UI_00230584;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_28);
  iVar7 = puVar3[6];
  uVar8 = puVar2[7];
  uVar9 = puVar2[8];
  uVar10 = puVar2[9];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar8;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar9;
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  local_24 = s_cState_SwingBell_00230590;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_28);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0xb];
  uVar10 = puVar2[0xc];
  uVar8 = puVar2[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar10;
  *(undefined4 *)(iVar7 + 0x14) = uVar8;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  local_24 = s_cState_Warp_002305a4;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_28);
  iVar7 = puVar3[6];
  uVar8 = puVar2[0xf];
  uVar9 = puVar2[0x10];
  uVar10 = puVar2[0x11];
  uVar13 = puVar2[0x12];
  uVar15 = puVar2[0x13];
  *(undefined4 *)(iVar7 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar8;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar9;
  *(undefined4 *)(iVar7 + 0x1c) = uVar10;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar13;
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  local_24 = s_cState_TakeOff_002305b0;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_28);
  iVar7 = puVar3[6];
  uVar10 = puVar2[0x15];
  uVar8 = puVar2[0x17];
  uVar9 = puVar2[0x16];
  uVar14 = *(undefined8 *)(puVar2 + 4);
  *(undefined4 *)(iVar7 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar7 + 0x24) = uVar10;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar9;
  *(undefined4 *)(iVar7 + 0x24) = uVar8;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x20) = (int)uVar14;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_End_002305c0;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_28);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x19];
  uVar8 = puVar2[0x1a];
  uVar10 = puVar2[0x1b];
  *(undefined4 *)(iVar7 + 0x28) = puVar2[0x18];
  *(undefined4 *)(iVar7 + 0x2c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar8;
  *(undefined4 *)(iVar7 + 0x2c) = uVar10;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x28) = (int)uVar14;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Miss_002305cc;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_28);
  iVar4 = puVar3[6];
  uVar8 = puVar2[0x1f];
  uVar9 = puVar2[0x1e];
  uVar10 = puVar2[0x1d];
  *(undefined4 *)(iVar4 + 0x30) = puVar2[0x1c];
  *(undefined4 *)(iVar4 + 0x34) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x30) = uVar9;
  *(undefined4 *)(iVar4 + 0x34) = uVar8;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x30) = (int)uVar14;
  *(int *)(iVar4 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
  func_0065EB40(puVar3,0);
  uVar8 = puVar2[0x20];
  uVar9 = puVar2[0x21];
  puVar3[0xc] = puVar11;
  puVar3[0xd] = uVar8;
  puVar3[0xe] = uVar9;
  puVar3[-5] = puVar3 + 0xb;
  return puVar11;
}

