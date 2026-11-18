#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0053B530(int param_1,uint param_2,uint param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00663954(undefined4 *param_1,undefined1 param_2);
extern int DAT_002cfd78;
extern uint DAT_002cfd7c;
extern undefined4 DAT_002cfd80;
extern int DAT_002cfd84;
extern int *DAT_002cfd88;
extern int DAT_002cfd8c;
extern int *DAT_002cfd90;
extern undefined4 *DAT_002cfd94;
extern undefined *DAT_002cfd98;
extern int DAT_002cfd9c;
extern int DAT_002cfdb0;
extern int *DAT_002d0198;
extern float DAT_002d0368;
extern int *DAT_002d036c;
extern char s_cState_Appear_002d0134[];
extern char s_cState_Carry_002d010c[];
extern char s_cState_Display_002cfda0[];
extern char s_cState_EventCamera_002d0150[];
extern char s_cState_Fall_002d0100[];
extern char s_cState_Flash_002d0164[];
extern char s_cState_Float_002cfdb4[];
extern char s_cState_Hide_002d011c[];
extern char s_cState_Move_002d0128[];
extern char s_cState_Rail_002d0144[];
extern char s_cState_Revert_002d0188[];
extern char s_cState_SenseTalk_002d0174[];

// USA 002CF96C <- EU 002CF948 (Ghidra, non-matching)
// GLOBAL DAT_002cfd78 int
// GLOBAL DAT_002cfd7c uint
// GLOBAL DAT_002cfd80 undefined4
// GLOBAL DAT_002cfd84 int
// GLOBAL DAT_002cfd88 int *
// GLOBAL DAT_002cfd8c int
// GLOBAL DAT_002cfd90 int *
// GLOBAL DAT_002cfd94 undefined4 *
// GLOBAL DAT_002cfd98 undefined *
// GLOBAL DAT_002cfd9c int
// GLOBAL DAT_002cfdb0 int
// GLOBAL DAT_002d0198 int *
// GLOBAL DAT_002d0368 float
// GLOBAL DAT_002d036c int *
// GLOBAL EXT_0000000c undefined
// GLOBAL s_cState_Appear_002d0134 string
// GLOBAL s_cState_Carry_002d010c string
// GLOBAL s_cState_Display_002cfda0 string
// GLOBAL s_cState_EventCamera_002d0150 string
// GLOBAL s_cState_Fall_002d0100 string
// GLOBAL s_cState_Flash_002d0164 string
// GLOBAL s_cState_Float_002cfdb4 string
// GLOBAL s_cState_Hide_002d011c string
// GLOBAL s_cState_Move_002d0128 string
// GLOBAL s_cState_Rail_002d0144 string
// GLOBAL s_cState_Revert_002d0188 string
// GLOBAL s_cState_SenseTalk_002d0174 string

/* WARNING: Variable defined which should be unmapped: objStack_a4 */

int func_002CF96C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 extraout_r1;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a4 ((uint *)(albw_frame + 0xc))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(char * *)(albw_frame + 0x1c))
  #define aiStack_90 ((int *)(albw_frame + 0x20))
  piVar3 = func_00150E40(param_1,param_2);
  iVar6 = DAT_002cfd78;
  *piVar3 = DAT_002cfd78;
  piVar3[200] = iVar6 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  objStack_a4[0] = 0;
  objStack_a4[1] = 0;
  uVar5 = func_0014E428((int)(puVar4 + -0x103),1,0,0,1,0,0);
  puVar4[9] = uVar5;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0x1c] = 0xc0000000;
  puVar4[0x1b] = 0;
  uVar15 = DAT_002cfd7c;
  uVar20 = (ulonglong)DAT_002cfd7c;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = uVar15;
  puVar4[0x20] = uVar15;
  puVar4[0x21] = uVar15;
  puVar4[0x22] = uVar15;
  puVar4[0x23] = uVar15;
  puVar4[0x24] = 0;
  *(undefined1 *)(puVar4 + 0x25) = 0;
  *(undefined1 *)((int)puVar4 + 0x95) = 0;
  *(undefined1 *)((int)puVar4 + 0x96) = 0;
  *(undefined1 *)((int)puVar4 + 0x97) = 0;
  puVar4[0x26] = 0;
  iVar6 = func_003673F4(puVar4 + 0x27,3);
  puVar4 = func_002E1BB4((undefined4 *)(iVar6 + 0x38),0);
  puVar14 = puVar4 + -0x138;
  piVar3 = puVar4 + -0x2c;
  puVar4[2] = 0;
  if (puVar4[-0x2c] != 0) {
    iVar6 = *(int *)(puVar4[-0x84] + 0x1c8);
    uVar5 = func_0014E904((int)puVar14,10,1);
    puVar22 = puVar4 + -0x2b;
    puVar4[-0x2b] = uVar5;
    puVar7 = (undefined4 *)func_0010BAB4(0xa8);
    puVar8 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = func_0016A2FC(puVar7,1,DAT_002cfd80,1);
    }
    puVar4[-0x2a] = puVar8;
    iVar12 = DAT_002cfd84;
    if ((puVar4[-0x2b] != 0 && puVar8 != (undefined4 *)0x0) && (iVar6 != 0)) {
      uVar15 = 0;
      do {
        func_00169688((uint *)puVar4[-0x2b],uVar15,(int *)(iVar12 + uVar15 * 8),iVar6);
        uVar5 = (undefined4)uVar20;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 10);
      func_0016A02C(puVar4[-0x2b],-1,(int *)0xffffffff,0);
      func_00169608((uint *)puVar4[-0x2a],0,DAT_002cfd88,iVar6);
      func_0016A02C(puVar4[-0x2a],-1,(int *)0xffffffff,0);
      puVar9 = (uint *)func_002C11E8(aiStack_90,0,0,0);
      func_0016898C(puVar4[-0x2b],puVar9);
      puVar9 = (uint *)func_002C11E8(aiStack_90,0,0,0);
      func_0016898C(puVar4[-0x2a],puVar9);
      bVar2 = func_00584B94(*DAT_002cfd90,DAT_002cfd8c);
      if (bVar2) {
        iVar6 = *(int *)(puVar4[-0x2a] + 0x14);
        if (*(float *)(iVar6 + 8) != *(float *)(iVar6 + 0x14)) {
          *(float *)(iVar6 + 8) = *(float *)(iVar6 + 0x14);
          *(undefined1 *)(iVar6 + 0x26) = 1;
        }
      }
      puVar16 = puVar4 + -0x35;
      *(undefined4 *)(*(int *)(puVar4[-0x2a] + 0x14) + 0x10) = uVar5;
      *(undefined1 *)((int)puVar4 + -0xce) = 0xc;
      puVar4[-0x30] = puVar14;
      iVar6 = func_0010BA78(0xc0);
      puVar4[-0x2f] = iVar6;
      puVar8 = DAT_002cfd94;
      puVar4[-0x2e] = iVar6 + (uint)*(byte *)((int)puVar4 + -0xce) * 8;
      iVar12 = 0xc;
      puVar7 = (undefined4 *)(iVar6 + -8);
      do {
        uVar5 = puVar8[0x33];
        iVar12 = iVar12 + -1;
        puVar7[2] = puVar8[0x32];
        puVar7[3] = uVar5;
        uVar5 = puVar8[0x33];
        puVar7[4] = puVar8[0x32];
        puVar7[5] = uVar5;
        puVar7 = puVar7 + 4;
      } while (iVar12 != 0);
      bVar1 = *(byte *)((int)puVar4 + -0xce);
      uVar15 = (uint)bVar1;
      puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
      puVar4[-0x2d] = puVar7;
      if (uVar15 != 0) {
        puVar10 = puVar7 + -2;
        if ((bVar1 & 1) != 0) {
          uVar5 = puVar8[5];
          *puVar7 = puVar8[4];
          puVar7[1] = uVar5;
          puVar10 = puVar7;
        }
        for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar5 = puVar8[5];
          puVar10[2] = puVar8[4];
          puVar10[3] = uVar5;
          uVar5 = puVar8[5];
          puVar10[4] = puVar8[4];
          puVar10[5] = uVar5;
          puVar10 = puVar10 + 4;
        }
      }
      piVar13 = (int *)0x6c;
      puVar7 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
      iVar6 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0x24;
        puVar7[1] = 0xc;
        piVar13 = (int *)&PrefetchAbort;
        iVar6 = func_00100118((int)(puVar7 + 2),DAT_002cfd98,0x24,0xc);
      }
      if (iVar6 != 0) {
        puVar4[-0x32] = iVar6;
        puVar4[-0x33] = 0xc;
      }
      iVar6 = DAT_002cfd9c;
      puVar4[-99] = puVar16;
      iVar12 = DAT_002cfdb0;
      *(undefined2 *)(iVar6 + (int)puVar14) = 0xc;
      local_94 = s_cState_Display_002cfda0;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,0,&local_98);
      puVar7 = (undefined4 *)puVar4[-0x2f];
      uVar5 = puVar8[2];
      uVar19 = puVar8[1];
      uVar18 = puVar8[3];
      uVar21 = *(undefined8 *)(puVar8 + 4);
      *puVar7 = *puVar8;
      puVar7[1] = uVar19;
      puVar7 = (undefined4 *)puVar4[-0x2e];
      *puVar7 = uVar5;
      puVar7[1] = uVar18;
      puVar7 = (undefined4 *)puVar4[-0x2d];
      *puVar7 = (int)uVar21;
      puVar7[1] = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Float_002cfdb4;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,1,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar18 = puVar8[7];
      uVar19 = puVar8[8];
      uVar5 = puVar8[9];
      *(undefined4 *)(iVar6 + 8) = puVar8[6];
      *(undefined4 *)(iVar6 + 0xc) = uVar18;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 8) = uVar19;
      *(undefined4 *)(iVar6 + 0xc) = uVar5;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 8) = (int)uVar21;
      *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Fall_002d0100;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,2,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0xb];
      uVar18 = puVar8[0xc];
      uVar19 = puVar8[0xd];
      *(undefined4 *)(iVar6 + 0x10) = puVar8[10];
      *(undefined4 *)(iVar6 + 0x14) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x10) = uVar18;
      *(undefined4 *)(iVar6 + 0x14) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x10) = (int)uVar21;
      *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Carry_002d010c;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,3,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0xf];
      uVar18 = puVar8[0x10];
      uVar19 = puVar8[0x11];
      *(undefined4 *)(iVar6 + 0x18) = puVar8[0xe];
      *(undefined4 *)(iVar6 + 0x1c) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x18) = uVar18;
      *(undefined4 *)(iVar6 + 0x1c) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x18) = (int)uVar21;
      *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Hide_002d011c;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,4,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x13];
      uVar18 = puVar8[0x14];
      uVar19 = puVar8[0x15];
      *(undefined4 *)(iVar6 + 0x20) = puVar8[0x12];
      *(undefined4 *)(iVar6 + 0x24) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x20) = uVar18;
      *(undefined4 *)(iVar6 + 0x24) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x20) = (int)uVar21;
      *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Move_002d0128;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,5,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x17];
      uVar18 = puVar8[0x18];
      uVar19 = puVar8[0x19];
      *(undefined4 *)(iVar6 + 0x28) = puVar8[0x16];
      *(undefined4 *)(iVar6 + 0x2c) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x28) = uVar18;
      *(undefined4 *)(iVar6 + 0x2c) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x28) = (int)uVar21;
      *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Appear_002d0134;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,6,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x1b];
      uVar18 = puVar8[0x1c];
      uVar19 = puVar8[0x1d];
      *(undefined4 *)(iVar6 + 0x30) = puVar8[0x1a];
      *(undefined4 *)(iVar6 + 0x34) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x30) = uVar18;
      *(undefined4 *)(iVar6 + 0x34) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x30) = (int)uVar21;
      *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Rail_002d0144;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,7,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x1f];
      uVar18 = puVar8[0x20];
      uVar19 = puVar8[0x21];
      *(undefined4 *)(iVar6 + 0x38) = puVar8[0x1e];
      *(undefined4 *)(iVar6 + 0x3c) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x38) = uVar18;
      *(undefined4 *)(iVar6 + 0x3c) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x38) = (int)uVar21;
      *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_EventCamera_002d0150;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,8,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x23];
      uVar18 = puVar8[0x24];
      uVar19 = puVar8[0x25];
      *(undefined4 *)(iVar6 + 0x40) = puVar8[0x22];
      *(undefined4 *)(iVar6 + 0x44) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x40) = uVar18;
      *(undefined4 *)(iVar6 + 0x44) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x40) = (int)uVar21;
      *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Flash_002d0164;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,9,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x27];
      uVar18 = puVar8[0x28];
      uVar19 = puVar8[0x29];
      *(undefined4 *)(iVar6 + 0x48) = puVar8[0x26];
      *(undefined4 *)(iVar6 + 0x4c) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x48) = uVar18;
      *(undefined4 *)(iVar6 + 0x4c) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x48) = (int)uVar21;
      *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_SenseTalk_002d0174;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,10,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x2b];
      uVar18 = puVar8[0x2c];
      uVar19 = puVar8[0x2d];
      *(undefined4 *)(iVar6 + 0x50) = puVar8[0x2a];
      *(undefined4 *)(iVar6 + 0x54) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x50) = uVar18;
      *(undefined4 *)(iVar6 + 0x54) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x50) = (int)uVar21;
      *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar21 >> 0x20);
      local_94 = s_cState_Revert_002d0188;
      local_98 = iVar12;
      func_0010BEC4((int)puVar16,0xb,&local_98);
      iVar6 = puVar4[-0x2f];
      uVar5 = puVar8[0x2f];
      uVar18 = puVar8[0x30];
      uVar19 = puVar8[0x31];
      *(undefined4 *)(iVar6 + 0x58) = puVar8[0x2e];
      *(undefined4 *)(iVar6 + 0x5c) = uVar5;
      iVar6 = puVar4[-0x2e];
      *(undefined4 *)(iVar6 + 0x58) = uVar18;
      *(undefined4 *)(iVar6 + 0x5c) = uVar19;
      iVar6 = puVar4[-0x2d];
      *(int *)(iVar6 + 0x58) = (int)uVar21;
      *(int *)(iVar6 + 0x5c) = (int)((ulonglong)uVar21 >> 0x20);
      if (*(short *)((int)param_2 + 0x2a) == 0) {
        func_00663954(puVar16,4);
      }
      else {
        iVar6 = func_0053B530(*DAT_002d0198,param_2[0xa7],param_2[0xa8]);
        if (iVar6 != 0) {
          puVar8 = (undefined4 *)func_0010BAB4(0x88);
          piVar11 = (int *)0x0;
          if (puVar8 != (undefined4 *)0x0) {
            piVar11 = func_002758CC(puVar8,(int *)param_2);
          }
          puVar4[-0x29] = piVar11;
          if ((*(short *)((int)param_2 + 0x32) == 0) && ((short)param_2[0xd] == 0)) {
            *(undefined1 *)((int)puVar4 + -0x3e) = 1;
          }
        }
        if ((short)param_2[0xb] != 0) {
          iVar6 = func_0054D964((int)puVar14,0);
          puVar4[-0x28] = iVar6;
          puVar7 = (undefined4 *)func_0010BAB4(0x48);
          puVar8 = (undefined4 *)0x0;
          if (puVar7 != (undefined4 *)0x0) {
            puVar8 = func_004EDC9C(puVar7);
          }
          puVar4[-0x27] = puVar8;
          piVar11 = puVar4 + -0x27;
          if (puVar4[-0x28] == 0 || puVar8 == (undefined4 *)0x0) {
            *(undefined1 *)((int)puVar4 + -0x209) = 1;
            return (int)puVar14;
          }
          uVar21 = *(undefined8 *)(puVar4 + -0x44);
          uVar5 = puVar4[-0x42];
          puVar8[6] = puVar4[-0x28];
          objStack_a4[0] = puVar4[-0x85];
          func_004EDAD0(*piVar11,objStack_a4);
          fVar17 = ALBW_AS_F32(((ulonglong)uVar21 >> 0x20)) + DAT_002d0368;
          *(undefined2 *)(*piVar11 + 0x2c) = *(undefined2 *)(puVar4 + -0x123);
          iVar6 = puVar4[-0x28];
          *(int *)(iVar6 + 4) = (int)uVar21;
          *(float *)(iVar6 + 8) = fVar17;
          *(undefined4 *)(iVar6 + 0xc) = uVar5;
          func_004356B4((int *)puVar4[-0x28]);
          func_004A7F00(*DAT_002d036c,*piVar11,2);
        }
        if (puVar4[-0x29] == 0) {
          func_00663954(puVar16,0);
        }
        else {
          func_00663954(puVar16,7);
        }
      }
      puVar4[-0x80] = puVar4[-0x80] | 2;
      iVar6 = puVar4[-0x2c];
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar6 + 0x80),puVar4[-0x3e],(float *)(puVar4 + -0x44));
      iVar6 = *piVar3;
      puVar8 = puVar4 + -0x26;
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      func_001151EC(puVar8,(undefined4 *)(iVar6 + 0x80));
      func_00169A80((int *)puVar4[-0x2b],extraout_r1,puVar8,piVar13);
      func_00168E9C((int *)*puVar22,*piVar3,(int *)0x0);
      func_00168E9C((int *)puVar4[-0x2a],*piVar3,(int *)0x0);
      func_004CEAF0(*piVar3);
      return (int)puVar14;
    }
  }
  *(undefined1 *)((int)puVar4 + -0x209) = 1;
  return (int)puVar14;
}

