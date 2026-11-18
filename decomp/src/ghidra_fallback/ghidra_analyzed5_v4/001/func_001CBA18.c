#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BDB04(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_0053F9B8(int param_1);
extern int func_00547640(int param_1,int param_2);
extern int func_00547730(int param_1,int param_2);
extern int func_006177C0(int param_1,int param_2,undefined1 param_3);
extern int func_00618444(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *puRam001cc1a0;
extern int DAT_001cbe68;
extern uint DAT_001cbe6c;
extern int DAT_001cbe70;
extern undefined4 DAT_001cbe74;
extern int DAT_001cbe78;
extern undefined DAT_001cbe7c;
extern uint DAT_001cbe88;
extern undefined4 *DAT_001cbe8c;
extern undefined *DAT_001cbe90;
extern int DAT_001cbe94;
extern int *DAT_001cc17c;
extern undefined4 *DAT_001cc180;
extern char s_Common_001cc184[];
extern char s_cState_Appear_001cbf08[];
extern char s_cState_DisappearWait_001cbef0[];
extern char s_cState_Disappear_001cbedc[];
extern char s_cState_EventEnd_001cbec0[];
extern char s_cState_EventFlagWait_001cc164[];
extern char s_cState_Event_001cbeb0[];
extern char s_cState_Hide_001cbed0[];
extern char s_cState_Wait_001cbe98[];
extern char s_cState_Walk_001cbea4[];
extern char s_cmn_debug_goal_on_001cc18c[];

// USA 001CBA18 <- EU 001CBA18 (Ghidra, non-matching)
// GLOBAL DAT_001cbe68 int
// GLOBAL DAT_001cbe6c uint
// GLOBAL DAT_001cbe70 int
// GLOBAL DAT_001cbe74 undefined4
// GLOBAL DAT_001cbe78 int
// GLOBAL DAT_001cbe7c undefined
// GLOBAL DAT_001cbe88 uint
// GLOBAL DAT_001cbe8c undefined4 *
// GLOBAL DAT_001cbe90 undefined *
// GLOBAL DAT_001cbe94 int
// GLOBAL DAT_001cc17c int *
// GLOBAL DAT_001cc180 undefined4 *
// GLOBAL UNK_001cc1a0 undefined1 *
// GLOBAL s_Common_001cc184 string
// GLOBAL s_cState_Appear_001cbf08 string
// GLOBAL s_cState_DisappearWait_001cbef0 string
// GLOBAL s_cState_Disappear_001cbedc string
// GLOBAL s_cState_EventEnd_001cbec0 string
// GLOBAL s_cState_EventFlagWait_001cc164 string
// GLOBAL s_cState_Event_001cbeb0 string
// GLOBAL s_cState_Hide_001cbed0 string
// GLOBAL s_cState_Wait_001cbe98 string
// GLOBAL s_cState_Walk_001cbea4 string
// GLOBAL s_cmn_debug_goal_on_001cc18c string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

int * func_001CBA18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_28 (*(uint * *)(albw_frame + 0x38))
  objStack_58[0] = (uint)&local_48;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_3b = 1;
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = (int *)func_00618444(param_1,param_2,0,0xff,(undefined4 *)objStack_58[0]);
  uVar9 = DAT_001cbe6c;
  iVar4 = DAT_001cbe68;
  *piVar3 = DAT_001cbe68;
  piVar3[200] = iVar4 + 0xb8;
  piVar3[0x264] = (int)(piVar3 + 0x266);
  piVar3[0x265] = 0x100;
  iVar4 = DAT_001cbe70;
  *(undefined1 *)(piVar3[0x264] + 0xff) = 0;
  *(undefined1 *)piVar3[0x264] = 0;
  iVar5 = DAT_001cbe78;
  piVar3[0x263] = DAT_001cbe78;
  piVar3[0x2a8] = 0x100;
  piVar3[0x2a6] = iVar4;
  piVar3[0x2a7] = (int)(piVar3 + 0x2a9);
  *(undefined1 *)((int)piVar3 + 0xba3) = 0;
  *(undefined1 *)piVar3[0x2a7] = 0;
  piVar3[0x2a6] = iVar5;
  local_4c = &DAT_001cbe7c;
  local_50 = uVar9;
  objStack_58[0] = DAT_001cbe88;
  func_004BE114(piVar3,6,0,0,DAT_001cbe88);
  *(undefined1 *)((int)piVar3 + 0x966) = 9;
  piVar3[0x25d] = (int)piVar3;
  iVar4 = func_0010BA78(0x90);
  piVar3[0x25e] = iVar4;
  puVar2 = DAT_001cbe8c;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar5 = 9;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar12 = puVar2[0x2b];
    iVar5 = iVar5 + -1;
    puVar6[2] = puVar2[0x2a];
    puVar6[3] = uVar12;
    uVar12 = puVar2[0x2b];
    puVar6[4] = puVar2[0x2a];
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  piVar3[0x260] = (int)puVar6;
  if (uVar10 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar12;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar12 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar12;
      uVar12 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 9;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_001cbe90,0x24,9);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 9;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_001cbe94;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 9;
  local_4c = s_cState_Wait_001cbe98;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),0,(int *)&local_50);
  puVar6 = (undefined4 *)piVar3[0x25e];
  uVar12 = puVar2[2];
  uVar14 = puVar2[3];
  uVar13 = puVar2[1];
  uVar17 = *(undefined8 *)(puVar2 + 4);
  *puVar6 = *puVar2;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)piVar3[0x25f];
  *puVar6 = uVar12;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)piVar3[0x260];
  *puVar6 = (int)uVar17;
  puVar6[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_Walk_001cbea4;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),1,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[7];
  uVar13 = puVar2[8];
  uVar14 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar13;
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 8) = (int)uVar17;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_Event_001cbeb0;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),2,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[0xb];
  uVar14 = puVar2[0xc];
  uVar12 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar13;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar14;
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x10) = (int)uVar17;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_EventEnd_001cbec0;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),3,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[0xf];
  uVar13 = puVar2[0x10];
  uVar14 = puVar2[0x11];
  uVar15 = puVar2[0x12];
  uVar16 = puVar2[0x13];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x18) = uVar13;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x18) = uVar15;
  *(undefined4 *)(iVar4 + 0x1c) = uVar16;
  local_4c = s_cState_Hide_001cbed0;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),4,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[0x15];
  uVar13 = puVar2[0x16];
  uVar14 = puVar2[0x17];
  uVar15 = puVar2[0x18];
  uVar16 = puVar2[0x19];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x20) = uVar15;
  *(undefined4 *)(iVar4 + 0x24) = uVar16;
  local_4c = s_cState_Disappear_001cbedc;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),5,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[0x1b];
  uVar13 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  uVar17 = *(undefined8 *)(puVar2 + 4);
  *(undefined4 *)(iVar4 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar4 + 0x2c) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x28) = uVar13;
  *(undefined4 *)(iVar4 + 0x2c) = uVar14;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x28) = (int)uVar17;
  *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_DisappearWait_001cbef0;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),6,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar14 = puVar2[0x1f];
  uVar12 = puVar2[0x20];
  uVar13 = puVar2[0x21];
  *(undefined4 *)(iVar4 + 0x30) = puVar2[0x1e];
  *(undefined4 *)(iVar4 + 0x34) = uVar14;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x30) = uVar12;
  *(undefined4 *)(iVar4 + 0x34) = uVar13;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x30) = (int)uVar17;
  *(int *)(iVar4 + 0x34) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_Appear_001cbf08;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),7,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[0x23];
  uVar13 = puVar2[0x24];
  uVar14 = puVar2[0x25];
  *(undefined4 *)(iVar4 + 0x38) = puVar2[0x22];
  *(undefined4 *)(iVar4 + 0x3c) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x38) = uVar13;
  *(undefined4 *)(iVar4 + 0x3c) = uVar14;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x38) = (int)uVar17;
  *(int *)(iVar4 + 0x3c) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_EventFlagWait_001cc164;
  local_50 = uVar9;
  func_0010BEC4((int)(piVar3 + 600),8,(int *)&local_50);
  iVar4 = piVar3[0x25e];
  uVar14 = puVar2[0x27];
  uVar12 = puVar2[0x28];
  uVar13 = puVar2[0x29];
  *(undefined4 *)(iVar4 + 0x40) = puVar2[0x26];
  *(undefined4 *)(iVar4 + 0x44) = uVar14;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x40) = uVar12;
  *(undefined4 *)(iVar4 + 0x44) = uVar13;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x40) = (int)uVar17;
  *(int *)(iVar4 + 0x44) = (int)((ulonglong)uVar17 >> 0x20);
  piVar3[0x261] = 8;
  func_004BDB04((int)piVar3);
  iVar4 = func_0053F9B8(*DAT_001cc17c);
  if (iVar4 == 0) {
    func_006177C0((int)piVar3,6,0);
  }
  else {
    func_006177C0((int)piVar3,0,0);
    piVar3[0x261] = 0;
  }
  func_004C03B8((int)piVar3,DAT_001cc180);
  func_004BC8D8((int)piVar3);
  uVar10 = func_00547640((int)local_28,(int)(piVar3 + 0x263));
  uVar8 = func_00547730((int)local_28,(int)(piVar3 + 0x2a6));
  if ((int)uVar10 < 0) {
    if (-1 < (int)uVar8) {
      *(undefined1 *)piVar3[0x264] = 0;
      goto LAB_001cc13c;
    }
  }
  else if (-1 < (int)uVar8) goto LAB_001cc13c;
  objStack_58[1] = (uint)s_Common_001cc184;
  objStack_58[0] = uVar9;
  puVar11 = (uint *)piVar3[0x264];
  (**(code **)(uVar9 + 8))(objStack_58);
  uVar10 = 0;
  do {
    if (*(char *)(objStack_58[1] + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_001cc08c;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_001cc08c:
  if (piVar3[0x265] <= (int)uVar10) {
    uVar10 = piVar3[0x265] - 1;
  }
  (**(code **)(objStack_58[0] + 8))(objStack_58);
  func_0010E3C4(puVar11,(uint *)objStack_58[1],uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  objStack_58[1] = (uint)s_cmn_debug_goal_on_001cc18c;
  objStack_58[0] = uVar9;
  puVar11 = (uint *)piVar3[0x2a7];
  (**(code **)(uVar9 + 8))(objStack_58);
  uVar9 = 0;
  do {
    if (*(char *)(objStack_58[1] + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_001cc10c;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_001cc10c:
  if (piVar3[0x2a8] <= (int)uVar9) {
    uVar9 = piVar3[0x2a8] - 1;
  }
  (**(code **)(objStack_58[0] + 8))(objStack_58);
  func_0010E3C4(puVar11,(uint *)objStack_58[1],uVar9);
  *(undefined1 *)((int)puVar11 + uVar9) = 0;
LAB_001cc13c:
  piVar3[0x22b] = piVar3[0x22b] | 0x450;
  *puRam001cc1a0 = 0;
  return piVar3;
}

