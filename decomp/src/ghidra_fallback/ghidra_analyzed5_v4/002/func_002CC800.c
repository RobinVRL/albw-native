#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BD280();
extern int func_004BDB04(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00582250(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00622780(int param_1,int param_2,undefined1 param_3);
extern int func_00623368(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam002cd2d4;
extern int DAT_002ccbd0;
extern int DAT_002ccbd4;
extern int DAT_002ccbd8;
extern int *DAT_002ccbdc;
extern int DAT_002ccbe0;
extern int DAT_002ccbe4;
extern int *DAT_002ccbe8;
extern int DAT_002ccbec;
extern undefined DAT_002ccbf0;
extern int DAT_002ccc00;
extern undefined4 DAT_002ccc04;
extern int *DAT_002ccc08;
extern undefined *DAT_002ccc0c;
extern undefined4 DAT_002cd0b4;
extern int *DAT_002cd0b8;
extern undefined4 *DAT_002cd2d0;
extern char s_Actor_TurtleMother_0_kcl_002cd098[];
extern char s_Actor_TurtleMother_1_kcl_002cd0bc[];
extern char s_TurtleL_002cd2d8[];
extern char s_TurtleM_002cd2e0[];
extern char s_TurtleS_002cd2e8[];
extern char s_cState_CheckPlayer_002cd028[];
extern char s_cState_DockingWait_002cd054[];
extern char s_cState_EventEnd_002cd00c[];
extern char s_cState_Event_002ccffc[];
extern char s_cState_Hide_002cd01c[];
extern char s_cState_ReCheckPlayerCancel_002cd07c[];
extern char s_cState_TurtleDocking_002cd03c[];
extern char s_cState_Wait_002ccc10[];
extern char s_cState_Walk_002ccc1c[];
extern char s_cState_WalkingLake_002cd068[];
extern char s_cf_002cd098[];
extern char s_cf_002cd0bc[];

// USA 002CC800 <- EU 002CC7DC (Ghidra, non-matching)
// GLOBAL DAT_002ccbd0 int
// GLOBAL DAT_002ccbd4 int
// GLOBAL DAT_002ccbd8 int
// GLOBAL DAT_002ccbdc int *
// GLOBAL DAT_002ccbe0 int
// GLOBAL DAT_002ccbe4 int
// GLOBAL DAT_002ccbe8 int *
// GLOBAL DAT_002ccbec int
// GLOBAL DAT_002ccbf0 undefined
// GLOBAL DAT_002ccc00 int
// GLOBAL DAT_002ccc04 undefined4
// GLOBAL DAT_002ccc08 int *
// GLOBAL DAT_002ccc0c undefined *
// GLOBAL DAT_002cd0b4 undefined4
// GLOBAL DAT_002cd0b8 int *
// GLOBAL DAT_002cd2d0 undefined4 *
// GLOBAL UNK_002cd2d4 int
// GLOBAL s_cf_002cd098 string
// GLOBAL s_cf_002cd0bc string
// GLOBAL s_TurtleL_002cd2d8 string
// GLOBAL s_TurtleM_002cd2e0 string
// GLOBAL s_TurtleS_002cd2e8 string
// GLOBAL s_cState_CheckPlayer_002cd028 string
// GLOBAL s_cState_DockingWait_002cd054 string
// GLOBAL s_cState_EventEnd_002cd00c string
// GLOBAL s_cState_Event_002ccffc string
// GLOBAL s_cState_Hide_002cd01c string
// GLOBAL s_cState_ReCheckPlayerCancel_002cd07c string
// GLOBAL s_cState_TurtleDocking_002cd03c string
// GLOBAL s_cState_Wait_002ccc10 string
// GLOBAL s_cState_Walk_002ccc1c string
// GLOBAL s_cState_WalkingLake_002cd068 string

int * func_002CC800(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar23;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_124 (*(char * *)(albw_frame + 0xc))
  #define auStack_120 ((uint *)(albw_frame + 0x10))
  #define local_114 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_110 (*(undefined1 * *)(albw_frame + 0x20))
  #define uStack_10c (*(undefined4 *)(albw_frame + 0x24))
  #define local_108 ((undefined1 *)(albw_frame + 0x28))
  #define uStack_c9 (*(undefined1 *)(albw_frame + 0x67))
  #define local_c8 (*(int *)(albw_frame + 0x68))
  #define local_c4 (*(char * *)(albw_frame + 0x6c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_bc (*(undefined1 * *)(albw_frame + 0x74))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_b4 ((undefined1 *)(albw_frame + 0x7c))
  #define uStack_75 (*(undefined1 *)(albw_frame + 0xbb))
  #define afStack_74 ((float *)(albw_frame + 0xbc))
  #define local_68 (*(int * *)(albw_frame + 0xc8))
  #define local_50 ((uint *)(albw_frame + 0xe0))
  #define local_44 (*(int * *)(albw_frame + 0xec))
  #define local_40 (*(undefined4 *)(albw_frame + 0xf0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0xf4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_34 (*(undefined1 *)(albw_frame + 0xfc))
  #define local_33 (*(undefined1 *)(albw_frame + 0xfd))
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar4 = (int *)func_00623368(param_1,param_2,0,0xff,&local_40);
  iVar8 = DAT_002ccbd4;
  iVar13 = DAT_002ccbd0 + 0xb8;
  *piVar4 = DAT_002ccbd0;
  piVar4[200] = iVar13;
  piVar4[0x263] = 0;
  piVar4[0x264] = 0;
  piVar4[0x266] = iVar8;
  piVar4[0x267] = iVar8;
  piVar4[0x268] = iVar8;
  local_44 = piVar4 + 0x240;
  piVar4[0x269] = DAT_002ccbd8;
  *(undefined2 *)(piVar4 + 0x26a) = 0;
  *(undefined2 *)((int)piVar4 + 0x9aa) = 0;
  *(undefined2 *)(piVar4 + 0x26b) = 0;
  *(undefined2 *)((int)piVar4 + 0x9ae) = 0;
  *(undefined1 *)(piVar4 + 0x26c) = 0;
  *(undefined1 *)((int)piVar4 + 0x9b1) = 0;
  piVar4[0x26d] = 0;
  piVar4[0x26e] = 0;
  piVar17 = piVar4 + 0x26d;
  piVar16 = piVar4 + 0x26e;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0034CAA0(puVar5);
  }
  piVar12 = DAT_002ccbdc;
  piVar4[0x26f] = (int)puVar6;
  piVar9 = DAT_002ccbe8;
  iVar13 = piVar12[1];
  piVar4[0x272] = *piVar12;
  piVar4[0x273] = iVar13;
  piVar4[0x270] = DAT_002ccbe0;
  piVar4[0x271] = (int)piVar4;
  local_68 = piVar4 + 0xc0;
  *(undefined1 *)(piVar4 + 0x274) = 0;
  *(undefined1 *)((int)piVar4 + 0x9d1) = 0;
  *(undefined1 *)((int)piVar4 + 0x9d2) = 0;
  piVar4[0x275] = 0;
  piVar4[0x276] = 0;
  piVar4[0x277] = 0;
  iVar13 = DAT_002ccbe4;
  piVar4[0x278] = piVar4[0xfa];
  piVar4[0x369] = 0;
  bVar3 = func_00584B94(*piVar9,iVar13);
  if (((bVar3) && (bVar3 = func_00584B94(*piVar9,0x284), bVar3)) &&
     (bVar3 = func_00584B94(*piVar9,DAT_002ccbec), bVar3)) {
    *(undefined1 *)((int)piVar4 + 0x9b1) = 1;
  }
  iVar13 = DAT_002ccc00;
  local_c4 = &DAT_002ccbf0;
  local_c8 = DAT_002ccc00;
  func_004BE114(piVar4,6,0,0,DAT_002ccc04);
  if ((-1 < (int)param_2[0xa7]) && (-1 < (int)param_2[0xa8])) {
    puVar7 = (uint *)func_00582250(*DAT_002ccc08);
    uVar11 = param_2[0xa7];
    uVar14 = *puVar7;
    if (uVar11 < uVar14) {
      puVar7 = (uint *)puVar7[2];
    }
    uVar15 = 0;
    if (uVar11 < uVar14) {
      uVar11 = puVar7[uVar11];
    }
    else {
      uVar11 = 0;
    }
    piVar12 = *(int **)(uVar11 + 0x28);
    piVar9 = piVar12 + *(int *)(uVar11 + 0x20);
    if (piVar12 != piVar9) {
      do {
        iVar18 = *piVar12;
        piVar12 = piVar12 + 1;
        iVar19 = *(int *)(iVar18 + 0x1c);
        iVar20 = *(int *)(iVar18 + 0x20);
        piVar10 = piVar4 + 0x279;
        if (uVar15 < 0x50) {
          piVar10 = piVar4 + 0x279 + uVar15 * 3;
        }
        uVar15 = uVar15 + 1;
        *piVar10 = *(int *)(iVar18 + 0x18);
        piVar10[1] = iVar19;
        piVar10[2] = iVar20;
      } while (piVar12 != piVar9);
    }
    piVar4[0x369] = uVar15;
  }
  piVar4[0x36a] = iVar8;
  piVar4[0x36b] = iVar8;
  piVar4[0x36c] = iVar8;
  piVar4[0x36d] = 0;
  piVar4[0x36e] = iVar8;
  *(undefined1 *)((int)piVar4 + 0x966) = 0xb;
  piVar4[0x25d] = (int)piVar4;
  iVar8 = func_0010BA78(0xb0);
  piVar4[0x25e] = iVar8;
  piVar12 = DAT_002ccbdc;
  piVar4[0x25f] = iVar8 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar18 = 0xb;
  piVar9 = (int *)(iVar8 + -8);
  do {
    iVar8 = piVar12[0x31];
    iVar18 = iVar18 + -1;
    piVar9[2] = piVar12[0x30];
    piVar9[3] = iVar8;
    iVar8 = piVar12[0x31];
    piVar9[4] = piVar12[0x30];
    piVar9[5] = iVar8;
    piVar9 = piVar9 + 4;
  } while (iVar18 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar11 = (uint)bVar1;
  piVar9 = (int *)func_0010BA78(uVar11 << 3);
  piVar4[0x260] = (int)piVar9;
  if (uVar11 != 0) {
    piVar10 = piVar9 + -2;
    if ((bVar1 & 1) != 0) {
      iVar8 = piVar12[7];
      *piVar9 = piVar12[6];
      piVar9[1] = iVar8;
      piVar10 = piVar9;
    }
    for (iVar8 = (int)uVar11 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar18 = piVar12[7];
      piVar10[2] = piVar12[6];
      piVar10[3] = iVar18;
      iVar18 = piVar12[7];
      piVar10[4] = piVar12[6];
      piVar10[5] = iVar18;
      piVar10 = piVar10 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 0xb;
    iVar8 = func_00100118((int)(puVar6 + 2),DAT_002ccc0c,0x24,0xb);
  }
  if (iVar8 != 0) {
    piVar4[0x25a] = 0xb;
    piVar4[0x25b] = iVar8;
  }
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)((int)local_68 + 0x5a) = 0xb;
  local_c4 = s_cState_Wait_002ccc10;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),0,&local_c8);
  piVar9 = (int *)piVar4[0x25e];
  iVar8 = piVar12[5];
  iVar18 = piVar12[4];
  iVar19 = piVar12[3];
  iVar23 = piVar12[6];
  iVar21 = piVar12[7];
  *piVar9 = piVar12[2];
  piVar9[1] = iVar19;
  piVar9 = (int *)piVar4[0x25f];
  *piVar9 = iVar18;
  piVar9[1] = iVar8;
  piVar9 = (int *)piVar4[0x260];
  *piVar9 = iVar23;
  piVar9[1] = iVar21;
  local_c4 = s_cState_Walk_002ccc1c;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),1,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[9];
  iVar19 = piVar12[10];
  iVar20 = piVar12[0xb];
  *(int *)(iVar8 + 8) = piVar12[8];
  *(int *)(iVar8 + 0xc) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 8) = iVar19;
  *(int *)(iVar8 + 0xc) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 8) = iVar23;
  *(int *)(iVar8 + 0xc) = iVar21;
  local_c4 = s_cState_Event_002ccffc;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),2,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0xd];
  iVar19 = piVar12[0xe];
  iVar20 = piVar12[0xf];
  *(int *)(iVar8 + 0x10) = piVar12[0xc];
  *(int *)(iVar8 + 0x14) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x10) = iVar19;
  *(int *)(iVar8 + 0x14) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x10) = iVar23;
  *(int *)(iVar8 + 0x14) = iVar21;
  local_c4 = s_cState_EventEnd_002cd00c;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),8,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x11];
  iVar19 = piVar12[0x12];
  iVar20 = piVar12[0x13];
  iVar21 = piVar12[0x14];
  iVar23 = piVar12[0x15];
  *(int *)(iVar8 + 0x40) = piVar12[0x10];
  *(int *)(iVar8 + 0x44) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x40) = iVar19;
  *(int *)(iVar8 + 0x44) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x40) = iVar21;
  *(int *)(iVar8 + 0x44) = iVar23;
  local_c4 = s_cState_Hide_002cd01c;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),4,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x17];
  iVar19 = piVar12[0x18];
  iVar20 = piVar12[0x19];
  iVar21 = piVar12[0x1a];
  iVar23 = piVar12[0x1b];
  *(int *)(iVar8 + 0x20) = piVar12[0x16];
  *(int *)(iVar8 + 0x24) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x20) = iVar19;
  *(int *)(iVar8 + 0x24) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x20) = iVar21;
  *(int *)(iVar8 + 0x24) = iVar23;
  local_c4 = s_cState_CheckPlayer_002cd028;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),5,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x1e];
  iVar19 = piVar12[0x1f];
  iVar20 = piVar12[0x1d];
  uVar22 = *(undefined8 *)(piVar12 + 6);
  *(int *)(iVar8 + 0x28) = piVar12[0x1c];
  *(int *)(iVar8 + 0x2c) = iVar20;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x28) = iVar18;
  *(int *)(iVar8 + 0x2c) = iVar19;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x28) = (int)uVar22;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar22 >> 0x20);
  local_c4 = s_cState_TurtleDocking_002cd03c;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),6,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x21];
  iVar19 = piVar12[0x22];
  iVar20 = piVar12[0x23];
  *(int *)(iVar8 + 0x30) = piVar12[0x20];
  *(int *)(iVar8 + 0x34) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x30) = iVar19;
  *(int *)(iVar8 + 0x34) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x30) = (int)uVar22;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar22 >> 0x20);
  local_c4 = s_cState_DockingWait_002cd054;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),7,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x25];
  iVar19 = piVar12[0x26];
  iVar20 = piVar12[0x27];
  *(int *)(iVar8 + 0x38) = piVar12[0x24];
  *(int *)(iVar8 + 0x3c) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x38) = iVar19;
  *(int *)(iVar8 + 0x3c) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x38) = (int)uVar22;
  *(int *)(iVar8 + 0x3c) = (int)((ulonglong)uVar22 >> 0x20);
  local_c4 = s_cState_EventEnd_002cd00c;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),8,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x11];
  iVar19 = piVar12[0x12];
  iVar20 = piVar12[0x13];
  *(int *)(iVar8 + 0x40) = piVar12[0x10];
  *(int *)(iVar8 + 0x44) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x40) = iVar19;
  *(int *)(iVar8 + 0x44) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x40) = (int)uVar22;
  *(int *)(iVar8 + 0x44) = (int)((ulonglong)uVar22 >> 0x20);
  local_c4 = s_cState_WalkingLake_002cd068;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),9,&local_c8);
  iVar18 = piVar4[0x25e];
  iVar19 = piVar12[0x29];
  iVar20 = piVar12[0x2a];
  iVar8 = piVar12[0x2b];
  *(int *)(iVar18 + 0x48) = piVar12[0x28];
  *(int *)(iVar18 + 0x4c) = iVar19;
  iVar18 = piVar4[0x25f];
  *(int *)(iVar18 + 0x48) = iVar20;
  *(int *)(iVar18 + 0x4c) = iVar8;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x48) = (int)uVar22;
  *(int *)(iVar8 + 0x4c) = (int)((ulonglong)uVar22 >> 0x20);
  local_c4 = s_cState_ReCheckPlayerCancel_002cd07c;
  local_c8 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),10,&local_c8);
  iVar8 = piVar4[0x25e];
  iVar18 = piVar12[0x2d];
  iVar19 = piVar12[0x2e];
  iVar20 = piVar12[0x2f];
  *(int *)(iVar8 + 0x50) = piVar12[0x2c];
  *(int *)(iVar8 + 0x54) = iVar18;
  iVar8 = piVar4[0x25f];
  *(int *)(iVar8 + 0x50) = iVar19;
  *(int *)(iVar8 + 0x54) = iVar20;
  iVar8 = piVar4[0x260];
  *(int *)(iVar8 + 0x50) = (int)uVar22;
  *(int *)(iVar8 + 0x54) = (int)((ulonglong)uVar22 >> 0x20);
  piVar4[0x22b] = piVar4[0x22b] | 0x10;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  piVar4[0x26d] = (int)puVar6;
  uVar2 = DAT_002cd0b4;
  local_bc = local_b4;
  uStack_b8 = 0x40;
  uStack_75 = 0;
  local_b4[0] = 0;
  local_c0 = DAT_002cd0b4;
  func_00111A20((int)&local_c0,s_Actor_TurtleMother_0_kcl_002cd098,(uint *)&local_124);
  func_004EDB28(piVar4[0x26d],(int)&local_c0);
  local_50[0] = piVar4[0xb3];
  func_004EDAD0(*piVar17,local_50);
  piVar12 = DAT_002cd0b8;
  *(short *)(*piVar17 + 0x2c) = (short)piVar4[0x15];
  func_004A7F00(*piVar12,*piVar17,3);
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  piVar4[0x26e] = (int)puVar6;
  local_124 = s_Actor_TurtleMother_1_kcl_002cd0bc;
  local_110 = local_108;
  uStack_10c = 0x40;
  uStack_c9 = 0;
  local_108[0] = 0;
  local_114 = uVar2;
  func_00111A20((int)&local_114,s_Actor_TurtleMother_1_kcl_002cd0bc,auStack_120);
  func_004EDB28(piVar4[0x26e],(int)&local_114);
  local_50[0] = piVar4[0xb3];
  func_004EDAD0(*piVar16,local_50);
  *(short *)(*piVar16 + 0x2c) = (short)piVar4[0x15];
  func_004A7F00(*piVar12,*piVar16,3);
  piVar12 = piVar4 + 0x1e8;
  *(int **)(*piVar16 + 0x28) = piVar4 + 0x270;
  func_001151D8(afStack_74,(undefined4 *)(piVar4[0x1e8] + 0x104));
  if (piVar4[0x26d] != 0) {
    func_00435ED0(*(int *)(piVar4[0x26d] + 0x14),afStack_74);
    func_0043625C(*(int **)(*piVar17 + 0x14),piVar4 + 0xf4);
    func_004ED9C8(*piVar17);
  }
  if (piVar4[0x26e] != 0) {
    func_00435ED0(*(int *)(piVar4[0x26e] + 0x14),afStack_74);
    func_0043625C(*(int **)(*piVar16 + 0x14),piVar4 + 0xf4);
    func_004ED9C8(*piVar16);
  }
  func_004BDB04((int)piVar4);
  piVar4[0x22b] = piVar4[0x22b] & 0xfffffff7;
  if (*(char *)((int)local_44 + 0xb1) == '\0') {
    piVar4[0x261] = 10;
    *(undefined1 *)((int)piVar4 + 0x857) = 0;
    func_00622780((int)piVar4,5,0);
    *(undefined1 *)(piVar4[0x26d] + 0x44) = 1;
    *(undefined1 *)(piVar4[0x26e] + 0x44) = 0;
  }
  else {
    *(undefined1 *)((int)piVar4 + 0x853) = 3;
    func_004BD280((int)piVar4,3,0);
    func_00622780((int)piVar4,9,0);
    piVar4[0x261] = 9;
    *(undefined1 *)(piVar4[0x26d] + 0x44) = 0;
    *(undefined1 *)(piVar4[0x26e] + 0x44) = 1;
    *(undefined1 *)((int)piVar4 + 0x9d2) = 1;
  }
  (**(code **)(*(int *)piVar4[0x1e8] + 0x10))((int *)piVar4[0x1e8],0x24);
  func_004C03B8((int)piVar4,DAT_002cd2d0);
  func_004BC8D8((int)piVar4);
  iVar8 = iRam002cd2d4;
  piVar4[0x22b] = piVar4[0x22b] | 0x2c40;
  piVar4[0xeb] = iVar8;
  local_c4 = s_TurtleL_002cd2d8;
  local_c8 = iVar13;
  uVar11 = func_00564A78(*piVar12,&local_c8);
  piVar4[0x275] = uVar11;
  local_c4 = s_TurtleM_002cd2e0;
  local_c8 = iVar13;
  uVar11 = func_00564A78(*piVar12,&local_c8);
  piVar4[0x276] = uVar11;
  local_c4 = s_TurtleS_002cd2e8;
  local_c8 = iVar13;
  uVar11 = func_00564A78(*piVar12,&local_c8);
  piVar4[0x277] = uVar11;
  *(undefined1 *)((int)piVar4 + 0x857) = 0;
  return piVar4;
}

