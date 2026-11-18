#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0031A208(int param_1);
extern int func_0037BCCC(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00582250(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006652A4(undefined4 *param_1,undefined1 param_2);
extern undefined4 uRam0031b1bc;
extern int *DAT_0031ad58;
extern int DAT_0031ad5c;
extern int DAT_0031ad60;
extern undefined4 DAT_0031ad64;
extern undefined4 DAT_0031ad68;
extern uint DAT_0031ad6c;
extern undefined4 *DAT_0031ad70;
extern undefined DAT_0031ad74;
extern int DAT_0031ad90;
extern undefined4 DAT_0031ad94;
extern undefined4 DAT_0031ad98;
extern int DAT_0031ad9c;
extern undefined *DAT_0031ada0;
extern int DAT_0031ada4;
extern int DAT_0031b1b0;
extern int *DAT_0031b1b4;
extern int *DAT_0031b1b8;
extern char s_cState_Erase_0031adb4[];
extern char s_cState_EventWait_0031b19c[];
extern char s_cState_FallWater_0031b14c[];
extern char s_cState_GoDownWater_0031b188[];
extern char s_cState_GoUpWater_0031b174[];
extern char s_cState_JumpReturnLake_0031adc4[];
extern char s_cState_ParentChase_0031b138[];
extern char s_cState_StartEvent_0031b160[];
extern char s_cState_Wait_0031ada8[];

// USA 0031A96C <- EU 0031A948 (Ghidra, non-matching)
// GLOBAL DAT_0031ad58 int *
// GLOBAL DAT_0031ad5c int
// GLOBAL DAT_0031ad60 int
// GLOBAL DAT_0031ad64 undefined4
// GLOBAL DAT_0031ad68 undefined4
// GLOBAL DAT_0031ad6c uint
// GLOBAL DAT_0031ad70 undefined4 *
// GLOBAL DAT_0031ad74 undefined
// GLOBAL DAT_0031ad90 int
// GLOBAL DAT_0031ad94 undefined4
// GLOBAL DAT_0031ad98 undefined4
// GLOBAL DAT_0031ad9c int
// GLOBAL DAT_0031ada0 undefined *
// GLOBAL DAT_0031ada4 int
// GLOBAL DAT_0031b1b0 int
// GLOBAL DAT_0031b1b4 int *
// GLOBAL DAT_0031b1b8 int *
// GLOBAL UNK_0031b1bc undefined4
// GLOBAL s_cState_Erase_0031adb4 string
// GLOBAL s_cState_EventWait_0031b19c string
// GLOBAL s_cState_FallWater_0031b14c string
// GLOBAL s_cState_GoDownWater_0031b188 string
// GLOBAL s_cState_GoUpWater_0031b174 string
// GLOBAL s_cState_JumpReturnLake_0031adc4 string
// GLOBAL s_cState_ParentChase_0031b138 string
// GLOBAL s_cState_StartEvent_0031b160 string
// GLOBAL s_cState_Wait_0031ada8 string

/* WARNING: Variable defined which should be unmapped: objStack_a8 */

int func_0031A96C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a8 ((uint *)(albw_frame + 0x8))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(char * *)(albw_frame + 0x1c))
  #define aiStack_90 ((int *)(albw_frame + 0x20))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x84))
  #define local_28 (*(uint * *)(albw_frame + 0x88))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = func_00150E40(param_1,param_2);
  piVar9 = DAT_0031ad58;
  piVar3[0x104] = DAT_0031ad5c;
  iVar11 = *piVar9;
  iVar17 = piVar9[1];
  uVar14 = 0;
  piVar3[0x105] = (int)(piVar3 + 0x103);
  piVar3[0x106] = iVar11;
  piVar3[0x107] = iVar17;
  iVar11 = DAT_0031ad60;
  *piVar3 = DAT_0031ad60;
  piVar3[200] = iVar11 + 0x54;
  piVar3[0x103] = iVar11 + 0xb8;
  puVar4 = func_0010A794(piVar3 + 0x108);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar15 = DAT_0031ad64;
  puVar4[9] = 0;
  uVar18 = DAT_0031ad68;
  puVar4[0xb] = uVar15;
  puVar5 = DAT_0031ad70;
  puVar4[0xc] = uVar18;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  uVar16 = DAT_0031ad6c;
  uVar15 = puVar5[1];
  uVar18 = puVar5[2];
  uVar21 = (ulonglong)DAT_0031ad6c;
  puVar4[0xe] = *puVar5;
  puVar4[0xf] = uVar15;
  puVar4[0x10] = uVar18;
  puVar4[0x11] = 0;
  iVar11 = DAT_0031ad90;
  uVar15 = *puVar5;
  uVar18 = puVar5[1];
  puVar4[0x14] = puVar5[2];
  puVar4[0x12] = uVar15;
  puVar4[0x13] = uVar18;
  puVar4[0x15] = 0;
  puVar4[0x16] = uVar16;
  local_94 = &DAT_0031ad74;
  objStack_a8[0] = 1;
  local_98 = iVar11;
  iVar17 = func_002BE9D4(puVar4 + 0x17,&local_98,0,0,1);
  puVar5 = func_004EDC9C((undefined4 *)(iVar17 + 0x2cc));
  puVar5[0x12] = 0;
  iVar6 = func_0037BCCC(puVar5 + 0x13);
  *(undefined1 *)(iVar6 + 0x30) = 0;
  *(undefined4 *)(iVar6 + 0x38) = 0;
  iVar17 = piVar9[0x2f];
  iVar13 = iVar6 + -0x794;
  *(int *)(iVar6 + 0x3c) = piVar9[0x2e];
  *(int *)(iVar6 + 0x40) = iVar17;
  *(undefined4 *)(iVar6 + 0x34) = DAT_0031ad94;
  iVar17 = piVar9[3];
  *(int *)(iVar6 + 0x4c) = piVar9[2];
  *(int *)(iVar6 + 0x50) = iVar17;
  *(undefined4 *)(iVar6 + 0x44) = DAT_0031ad98;
  *(int *)(iVar6 + 0x48) = iVar13;
  *(undefined1 *)(iVar6 + 0x54) = 0;
  objStack_a8[1] = 0;
  objStack_a8[0] = 1;
  objStack_a8[2] = 0;
  uVar15 = func_0014E428(iVar13,0,0,0,1,0,0);
  *(undefined4 *)(iVar6 + -0x340) = uVar15;
  uVar15 = func_0014E904(iVar13,7,1);
  iVar17 = DAT_0031ad9c;
  piVar3 = (int *)(iVar6 + -0x350);
  *(undefined4 *)(iVar6 + -0x350) = uVar15;
  do {
    func_00169688(*(uint **)(iVar6 + -0x350),uVar14,(int *)(iVar17 + uVar14 * 8),
                  *(int *)(*(int *)(iVar6 + -0x4c4) + 0x1c8));
    func_00133870(*piVar3,uVar14,*(int *)(iVar6 + -0x340));
    uVar15 = (undefined4)uVar21;
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 7);
  func_0016A02C(*(int *)(iVar6 + -0x350),-1,(int *)0xffffffff,0);
  piVar12 = (int *)0x0;
  puVar7 = (uint *)func_002C11E8(aiStack_90,0,10,0);
  iVar17 = *piVar3;
  func_0016898C(iVar17,puVar7);
  uVar18 = *(undefined4 *)(*piVar3 + 0xc);
  *(undefined4 *)(*(int *)(*piVar3 + 0x14) + 0x10) = uVar15;
  func_00169A80(*(int **)(iVar6 + -0x350),uVar18,iVar17,piVar12);
  *(undefined1 *)(iVar6 + -0x36e) = 9;
  *(int *)(iVar6 + -0x360) = iVar13;
  iVar17 = func_0010BA78(0x90);
  *(int *)(iVar6 + -0x35c) = iVar17;
  *(uint *)(iVar6 + -0x358) = iVar17 + (uint)*(byte *)(iVar6 + -0x36e) * 8;
  iVar10 = 9;
  piVar3 = (int *)(iVar17 + -8);
  do {
    iVar17 = piVar9[0x2d];
    iVar10 = iVar10 + -1;
    piVar3[2] = piVar9[0x2c];
    piVar3[3] = iVar17;
    iVar17 = piVar9[0x2d];
    piVar3[4] = piVar9[0x2c];
    piVar3[5] = iVar17;
    piVar3 = piVar3 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar6 + -0x36e);
  uVar16 = (uint)bVar1;
  piVar3 = (int *)func_0010BA78(uVar16 << 3);
  *(int **)(iVar6 + -0x354) = piVar3;
  if (uVar16 != 0) {
    piVar12 = piVar3 + -2;
    if ((bVar1 & 1) != 0) {
      iVar17 = piVar9[9];
      *piVar3 = piVar9[8];
      piVar3[1] = iVar17;
      piVar12 = piVar3;
    }
    for (iVar17 = (int)uVar16 >> 1; iVar17 != 0; iVar17 = iVar17 + -1) {
      iVar10 = piVar9[9];
      piVar12[2] = piVar9[8];
      piVar12[3] = iVar10;
      iVar10 = piVar9[9];
      piVar12[4] = piVar9[8];
      piVar12[5] = iVar10;
      piVar12 = piVar12 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar17 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 9;
    iVar17 = func_00100118((int)(puVar5 + 2),DAT_0031ada0,0x24,9);
  }
  if (iVar17 != 0) {
    *(undefined4 *)(iVar6 + -0x36c) = 9;
    *(int *)(iVar6 + -0x368) = iVar17;
  }
  iVar17 = DAT_0031ada4;
  *(int *)(iVar6 + -0x440) = iVar6 + -0x374;
  *(undefined2 *)(iVar17 + iVar13) = 9;
  local_94 = s_cState_Wait_0031ada8;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,0,&local_98);
  piVar3 = *(int **)(iVar6 + -0x35c);
  iVar17 = piVar9[6];
  iVar10 = piVar9[4];
  iVar19 = piVar9[7];
  uVar22 = *(undefined8 *)(piVar9 + 8);
  piVar3[1] = piVar9[5];
  *piVar3 = iVar10;
  piVar3 = *(int **)(iVar6 + -0x358);
  *piVar3 = iVar17;
  piVar3[1] = iVar19;
  puVar5 = *(undefined4 **)(iVar6 + -0x354);
  *puVar5 = (int)uVar22;
  puVar5[1] = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_Erase_0031adb4;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,1,&local_98);
  iVar19 = *(int *)(iVar6 + -0x35c);
  iVar17 = piVar9[0xc];
  iVar20 = piVar9[0xd];
  iVar10 = piVar9[0xb];
  *(int *)(iVar19 + 8) = piVar9[10];
  *(int *)(iVar19 + 0xc) = iVar10;
  iVar10 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar10 + 8) = iVar17;
  *(int *)(iVar10 + 0xc) = iVar20;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 8) = (int)uVar22;
  *(int *)(iVar17 + 0xc) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_JumpReturnLake_0031adc4;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,2,&local_98);
  iVar10 = *(int *)(iVar6 + -0x35c);
  iVar17 = piVar9[0xf];
  iVar20 = piVar9[0x10];
  iVar19 = piVar9[0x11];
  *(int *)(iVar10 + 0x10) = piVar9[0xe];
  *(int *)(iVar10 + 0x14) = iVar17;
  iVar17 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar17 + 0x10) = iVar20;
  *(int *)(iVar17 + 0x14) = iVar19;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 0x10) = (int)uVar22;
  *(int *)(iVar17 + 0x14) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_ParentChase_0031b138;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,3,&local_98);
  iVar10 = *(int *)(iVar6 + -0x35c);
  iVar17 = piVar9[0x13];
  iVar19 = piVar9[0x14];
  iVar20 = piVar9[0x15];
  *(int *)(iVar10 + 0x18) = piVar9[0x12];
  *(int *)(iVar10 + 0x1c) = iVar17;
  iVar17 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar17 + 0x18) = iVar19;
  *(int *)(iVar17 + 0x1c) = iVar20;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 0x18) = (int)uVar22;
  *(int *)(iVar17 + 0x1c) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_FallWater_0031b14c;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,4,&local_98);
  iVar10 = *(int *)(iVar6 + -0x35c);
  iVar17 = piVar9[0x17];
  iVar19 = piVar9[0x18];
  iVar20 = piVar9[0x19];
  *(int *)(iVar10 + 0x20) = piVar9[0x16];
  *(int *)(iVar10 + 0x24) = iVar17;
  iVar17 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar17 + 0x20) = iVar19;
  *(int *)(iVar17 + 0x24) = iVar20;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 0x20) = (int)uVar22;
  *(int *)(iVar17 + 0x24) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_StartEvent_0031b160;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,5,&local_98);
  iVar10 = *(int *)(iVar6 + -0x35c);
  iVar17 = piVar9[0x1b];
  iVar19 = piVar9[0x1c];
  iVar20 = piVar9[0x1d];
  *(int *)(iVar10 + 0x28) = piVar9[0x1a];
  *(int *)(iVar10 + 0x2c) = iVar17;
  iVar17 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar17 + 0x28) = iVar19;
  *(int *)(iVar17 + 0x2c) = iVar20;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 0x28) = (int)uVar22;
  *(int *)(iVar17 + 0x2c) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_GoUpWater_0031b174;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,6,&local_98);
  iVar17 = *(int *)(iVar6 + -0x35c);
  iVar19 = piVar9[0x1f];
  iVar10 = piVar9[0x20];
  iVar20 = piVar9[0x21];
  *(int *)(iVar17 + 0x30) = piVar9[0x1e];
  *(int *)(iVar17 + 0x34) = iVar19;
  iVar17 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar17 + 0x30) = iVar10;
  *(int *)(iVar17 + 0x34) = iVar20;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 0x30) = (int)uVar22;
  *(int *)(iVar17 + 0x34) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_GoDownWater_0031b188;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,7,&local_98);
  iVar17 = *(int *)(iVar6 + -0x35c);
  iVar20 = piVar9[0x23];
  iVar10 = piVar9[0x24];
  iVar19 = piVar9[0x25];
  *(int *)(iVar17 + 0x38) = piVar9[0x22];
  *(int *)(iVar17 + 0x3c) = iVar20;
  iVar17 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar17 + 0x38) = iVar10;
  *(int *)(iVar17 + 0x3c) = iVar19;
  iVar17 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar17 + 0x38) = (int)uVar22;
  *(int *)(iVar17 + 0x3c) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_EventWait_0031b19c;
  local_98 = iVar11;
  func_0010BEC4(iVar6 + -0x374,8,&local_98);
  iVar10 = *(int *)(iVar6 + -0x35c);
  iVar19 = piVar9[0x27];
  iVar11 = piVar9[0x29];
  iVar17 = piVar9[0x28];
  *(int *)(iVar10 + 0x40) = piVar9[0x26];
  *(int *)(iVar10 + 0x44) = iVar19;
  iVar10 = *(int *)(iVar6 + -0x358);
  *(int *)(iVar10 + 0x40) = iVar17;
  *(int *)(iVar10 + 0x44) = iVar11;
  iVar11 = *(int *)(iVar6 + -0x354);
  *(int *)(iVar11 + 0x40) = (int)uVar22;
  *(int *)(iVar11 + 0x44) = (int)((ulonglong)uVar22 >> 0x20);
  func_006652A4((undefined4 *)(iVar6 + -0x374),0);
  iVar11 = func_0054D964(iVar13,0);
  *(int *)(iVar6 + -4) = iVar11;
  objStack_a8[1] = CONCAT22((*(undefined2 *)((char *)&objStack_a8[1] + 2)),0xe4);
  *(undefined2 *)(iVar11 + 0x28) = 0xe4;
  func_004356B4(*(int **)(iVar6 + -4));
  *(undefined4 *)(iVar6 + -0x34) = *(undefined4 *)(iVar6 + -4);
  objStack_a8[0] = *(uint *)(iVar6 + -0x4c8);
  func_004EDAD0(iVar6 + -0x4c,objStack_a8);
  *(undefined2 *)(DAT_0031b1b0 + iVar13) = *(undefined2 *)(iVar6 + -0x740);
  func_004A7F00(*DAT_0031b1b4,iVar6 + -0x4c,0);
  *(uint *)(iVar6 + -0x4b4) = *(uint *)(iVar6 + -0x4b4) | 2;
  if ((*(short *)(iVar6 + -0x75e) != 0) && (bVar2 = func_00588BF0(iVar13,0), bVar2)) {
    func_006652A4((undefined4 *)(iVar6 + -0x374),3);
  }
  puVar7 = local_28;
  iVar11 = piVar9[0x2a];
  iVar17 = piVar9[0x2b];
  *(int *)(iVar6 + 0x38) = iVar13;
  *(int *)(iVar6 + 0x3c) = iVar11;
  *(int *)(iVar6 + 0x40) = iVar17;
  *(undefined4 **)(iVar6 + -0x304) = (undefined4 *)(iVar6 + 0x44);
  *(undefined4 **)(iVar6 + -0x60) = (undefined4 *)(iVar6 + 0x34);
  if ((-1 < (int)local_28[0xa7]) && (-1 < (int)local_28[0xa8])) {
    puVar8 = (uint *)func_00582250(*DAT_0031b1b8);
    if (puVar7[0xa7] < *puVar8) {
      iVar11 = *(int *)(puVar8[2] + puVar7[0xa7] * 4);
    }
    else {
      iVar11 = 0;
    }
    piVar9 = *(int **)(iVar11 + 0x28);
    iVar11 = *(int *)(iVar11 + 0x20);
    if (piVar9 != piVar9 + iVar11) {
      piVar3 = piVar9;
      do {
        piVar12 = piVar3 + 1;
        iVar17 = *piVar3;
        uVar15 = *(undefined4 *)(iVar17 + 0x1c);
        uVar18 = *(undefined4 *)(iVar17 + 0x20);
        *(undefined4 *)(iVar6 + -0x33c) = *(undefined4 *)(iVar17 + 0x18);
        *(undefined4 *)(iVar6 + -0x338) = uVar15;
        *(undefined4 *)(iVar6 + -0x334) = uVar18;
        piVar3 = piVar12;
      } while (piVar12 != piVar9 + iVar11);
    }
  }
  func_004ECF6C(iVar13);
  *(undefined4 *)(iVar6 + -1000) = uRam0031b1bc;
  func_0031A208(iVar13);
  return iVar13;
}

