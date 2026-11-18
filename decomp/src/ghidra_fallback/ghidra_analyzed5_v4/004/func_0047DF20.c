#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100A86(int param_1,int param_2,int param_3,int param_4,undefined *param_5);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00367C18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5, int param_6,int param_7);
extern int func_003681A4(int param_1,int *param_2,uint param_3,int *param_4,int param_5);
extern int func_00368300(int param_1,int *param_2,int *param_3);
extern int func_00368828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_00368978(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_003693A0(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00369560(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0036959C(undefined4 *param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0047e294;
extern undefined4 DAT_0047e298;
extern int DAT_0047e29c;
extern undefined4 *DAT_0047e2a0;
extern undefined *DAT_0047e2a4;
extern uint DAT_0047e2b4;
extern int DAT_0047e71c;
extern undefined *DAT_0047e750;
extern undefined *DAT_0047e764;
extern undefined *DAT_0047e768;
extern int *DAT_0047e77c;
extern undefined *DAT_0047e780;
extern int DAT_0047e784;
extern int DAT_0047e788;
extern char s_L_RupeeNum_00_0047e76c[];
extern char s_P_Heart__02d_0047e754[];
extern char s_P_PowerUpSword_00_0047e78c[];
extern char s_T_MedalNum_00_0047e720[];
extern char s_T_PlayerName_00_0047e730[];
extern char s_T_UserName_00_0047e740[];
extern char s_cState_InInfo_0047e2b8[];
extern char s_cState_InfoWait_0047e2c8[];
extern char s_cState_Wait_0047e2a8[];
extern char s_cf_0047e754[];

// USA 0047DF20 <- EU 0047DEF8 (Ghidra, non-matching)
// GLOBAL DAT_0047e294 int
// GLOBAL DAT_0047e298 undefined4
// GLOBAL DAT_0047e29c int
// GLOBAL DAT_0047e2a0 undefined4 *
// GLOBAL DAT_0047e2a4 undefined *
// GLOBAL DAT_0047e2b4 uint
// GLOBAL DAT_0047e71c int
// GLOBAL DAT_0047e750 undefined *
// GLOBAL DAT_0047e764 undefined *
// GLOBAL DAT_0047e768 undefined *
// GLOBAL DAT_0047e77c int *
// GLOBAL DAT_0047e780 undefined *
// GLOBAL DAT_0047e784 int
// GLOBAL DAT_0047e788 int
// GLOBAL s_L_RupeeNum_00_0047e76c string
// GLOBAL s_cf_0047e754 string
// GLOBAL s_P_PowerUpSword_00_0047e78c string
// GLOBAL s_T_MedalNum_00_0047e720 string
// GLOBAL s_T_PlayerName_00_0047e730 string
// GLOBAL s_T_UserName_00_0047e740 string
// GLOBAL s_cState_InInfo_0047e2b8 string
// GLOBAL s_cState_InfoWait_0047e2c8 string
// GLOBAL s_cState_Wait_0047e2a8 string

/* WARNING: Variable defined which should be unmapped: objStack_738 */

int * func_0047DF20(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0x740];
  #define objStack_738 ((uint *)(albw_frame + 0x8))
  #define local_728 (*(uint *)(albw_frame + 0x18))
  #define local_724 (*(char * *)(albw_frame + 0x1c))
  #define local_720 (*(int *)(albw_frame + 0x20))
  #define local_71c ((uint *)(albw_frame + 0x24))
  #define local_710 (*(int *)(albw_frame + 0x30))
  #define local_70c (*(int *)(albw_frame + 0x34))
  #define local_708 (*(int *)(albw_frame + 0x38))
  #define auStack_704 ((undefined1 *)(albw_frame + 0x3c))
  #define auStack_3b8 ((undefined1 *)(albw_frame + 0x388))
  #define local_48 (*(uint *)(albw_frame + 0x6f8))
  #define local_44 (*(uint * *)(albw_frame + 0x6fc))
  piVar3 = func_004B9A10(param_1,0);
  iVar7 = DAT_0047e294;
  *piVar3 = DAT_0047e294;
  piVar3[0xe] = iVar7 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x1d);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  uVar19 = DAT_0047e298;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = uVar19;
  piVar3 = puVar4 + -0x1d;
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = uVar19;
  puVar4[0xe] = 0;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  *(undefined2 *)((int)puVar4 + 0x3e) = 0xffff;
  puVar4[0x10] = uVar19;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  *(undefined2 *)((int)puVar4 + 0x4a) = 0xffff;
  puVar4[0x13] = uVar19;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0xf8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0036959C(puVar5,DAT_0047e29c);
  }
  puVar4[0x17] = puVar6;
  puVar4[0x18] = 0;
  puVar4[5] = piVar3;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  iVar7 = func_0010BA78(0x30);
  puVar6 = DAT_0047e2a0;
  puVar4[6] = iVar7;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 3;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar19 = puVar6[1];
    puVar5[2] = *puVar6;
    puVar5[3] = uVar19;
    iVar11 = iVar11 + -1;
    uVar19 = puVar6[1];
    puVar5[4] = *puVar6;
    puVar5[5] = uVar19;
    puVar5 = puVar5 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar19;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar19 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar19;
      uVar19 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar19;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_0047e2a4;
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 3;
    *puVar5 = 0x24;
    iVar7 = func_00100118((int)(puVar5 + 2),puVar2,0x24,3);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 3;
  }
  uVar13 = DAT_0047e2b4;
  local_44 = (uint *)s_cState_Wait_0047e2a8;
  local_48 = DAT_0047e2b4;
  iVar7 = puVar4[3];
  puVar18 = *(uint **)(iVar7 + 4);
  (**(code **)(DAT_0047e2b4 + 8))(&local_48);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_44 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0047e10c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0047e10c:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar14) {
    uVar14 = iVar7 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar18,local_44,uVar14);
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar20 = puVar6[1];
  uVar19 = puVar6[4];
  uVar15 = puVar6[2];
  uVar12 = puVar6[5];
  uVar21 = puVar6[3];
  *puVar5 = *puVar6;
  puVar5[1] = uVar20;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar15;
  puVar5[1] = uVar21;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar19;
  puVar5[1] = uVar12;
  local_44 = (uint *)s_cState_InInfo_0047e2b8;
  local_48 = uVar13;
  if ((uint)puVar4[2] < 2) {
    iVar7 = puVar4[3];
  }
  else {
    iVar7 = puVar4[3] + 0x24;
  }
  puVar18 = *(uint **)(iVar7 + 4);
  (**(code **)(uVar13 + 8))(&local_48);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_44 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0047e1d0;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0047e1d0:
  if (*(int *)(iVar7 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar18,local_44,uVar14);
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  iVar7 = puVar4[6];
  uVar12 = puVar6[7];
  uVar19 = puVar6[5];
  uVar20 = puVar6[8];
  uVar15 = puVar6[4];
  uVar21 = puVar6[9];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar20;
  *(undefined4 *)(iVar7 + 0xc) = uVar21;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  local_44 = (uint *)s_cState_InfoWait_0047e2c8;
  local_48 = uVar13;
  if ((uint)puVar4[2] < 3) {
    iVar7 = puVar4[3];
  }
  else {
    iVar7 = puVar4[3] + 0x48;
  }
  puVar18 = *(uint **)(iVar7 + 4);
  (**(code **)(uVar13 + 8))(&local_48);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_44 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0047e2e4;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0047e2e4:
  if (*(int *)(iVar7 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar18,local_44,uVar14);
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  iVar7 = puVar4[6];
  uVar19 = puVar6[10];
  uVar12 = puVar6[4];
  uVar20 = puVar6[1];
  uVar15 = puVar6[0xb];
  uVar21 = puVar6[5];
  *(undefined4 *)(iVar7 + 0x10) = *puVar6;
  *(undefined4 *)(iVar7 + 0x14) = uVar20;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar19;
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = DAT_0047e29c;
  iVar11 = puVar4[8];
  *(undefined4 *)(iVar11 + 0x10) = uVar12;
  *(undefined4 *)(iVar11 + 0x14) = uVar21;
  (**(code **)(*piVar3 + 0x38))(piVar3,iVar7,0);
  piVar17 = (int *)puVar4[-0x16];
  func_0016773C((int)piVar17,10);
  iVar7 = DAT_0047e71c;
  uVar14 = 0;
  do {
    func_00166C20(piVar17,uVar14,(int *)(iVar7 + uVar14 * 8),0);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 6);
  puVar4[-0x13] = piVar17;
  *(undefined2 *)((int)puVar4 + -0x52) = 0;
  *(undefined2 *)(puVar4 + -0x15) = 0;
  func_002313DC((int)(puVar4 + -0x15));
  puVar4[-0x10] = piVar17;
  *(undefined2 *)((int)puVar4 + -0x46) = 1;
  *(undefined2 *)(puVar4 + -0x12) = 0;
  puVar4[0xb] = piVar17;
  *(undefined2 *)((int)puVar4 + 0x26) = 3;
  *(undefined2 *)(puVar4 + 9) = 0;
  puVar4[0xe] = piVar17;
  *(undefined2 *)((int)puVar4 + 0x32) = 2;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  func_002313DC((int)(puVar4 + 0xc));
  puVar4[0x11] = piVar17;
  *(undefined2 *)((int)puVar4 + 0x3e) = 4;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  puVar4[0x14] = piVar17;
  *(undefined2 *)((int)puVar4 + 0x4a) = 5;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  local_724 = s_T_MedalNum_00_0047e720;
  local_728 = uVar13;
  objStack_738[1] = (uint)s_T_PlayerName_00_0047e730;
  objStack_738[0] = uVar13;
  func_003693A0(puVar4[0x17],piVar17,(int *)objStack_738,(int *)&local_728);
  objStack_738[1] = (uint)s_T_UserName_00_0047e740;
  objStack_738[0] = uVar13;
  func_00368300(puVar4[0x17],piVar17,(int *)objStack_738);
  uVar19 = 0x14;
  func_00100118((int)&local_728,DAT_0047e750,0x2c,0x14);
  uVar14 = 0;
  do {
    puVar18 = &local_728 + uVar14 * 0xb;
    do {
      func_004994B0((int)puVar18,s_P_Heart__02d_0047e754,uVar14,uVar19);
      uVar14 = uVar14 + 1;
      if (0x13 < (int)uVar14) {
        objStack_738[0] = (uint)DAT_0047e764;
        objStack_738[0] = func_00100A86((int)auStack_3b8,(int)&local_728,0x2c,0x14,DAT_0047e764);
        objStack_738[1] = 0;
        objStack_738[2] = 0;
        func_00367C18(puVar4[0x17],piVar17,puVar4 + 0xf,puVar4 + 0x12,(int *)objStack_738[0],0,0);
        func_00100950((int)auStack_3b8,DAT_0047e768,0x2c,0x14);
        func_00100950((int)&local_728,DAT_0047e768,0x2c,0x14);
        objStack_738[1] = (uint)s_L_RupeeNum_00_0047e76c;
        objStack_738[0] = uVar13;
        func_00369560(puVar4[0x17],piVar17,(int *)objStack_738,(int)piVar3);
        objStack_738[0] = (uint)piVar3;
        func_003681A4(puVar4[0x17],piVar17,5,DAT_0047e77c,(int)piVar3);
        iVar7 = func_0010CEE0(0x30,(int *)0x0,4);
        if ((iVar7 != 0) && (iVar7 = func_00100118(iVar7,DAT_0047e780,0xc,4), iVar7 != 0)) {
          puVar4[0x16] = iVar7;
          puVar4[0x15] = 4;
        }
        iVar7 = DAT_0047e784;
        uVar14 = 0;
        do {
          func_00166C20(piVar17,uVar14 + 6,(int *)(iVar7 + uVar14 * 8),0);
          if (uVar14 < (uint)puVar4[0x15]) {
            puVar9 = (undefined2 *)(puVar4[0x16] + uVar14 * 0xc);
          }
          else {
            puVar9 = (undefined2 *)puVar4[0x16];
          }
          puVar18 = &local_728;
          if (uVar14 < 4) {
            puVar18 = &local_728 + uVar14;
          }
          *puVar9 = 0;
          *(int **)(puVar9 + 4) = piVar17;
          puVar9[1] = (short)(uVar14 + 6);
          if (uVar14 < (uint)puVar4[0x15]) {
            uVar10 = puVar4[0x16] + uVar14 * 0xc;
          }
          else {
            uVar10 = puVar4[0x16];
          }
          uVar14 = uVar14 + 1;
          *puVar18 = uVar10;
        } while ((int)uVar14 < 4);
        objStack_738[0] = local_71c[0];
        func_00368828(puVar4[0x17],local_728,local_724,local_720,local_71c[0]);
        local_728 = 0;
        local_724 = (char *)0x0;
        local_720 = 0;
        func_0010B3EC(&local_728,3,(int)local_71c);
        local_710 = 0;
        local_70c = 0;
        local_708 = 0;
        func_0010B3EC(&local_710,3,(int)auStack_704);
        iVar7 = DAT_0047e788;
        iVar11 = 0;
        iVar16 = DAT_0047e788 + 0x18;
        do {
          if ((int)local_728 < (int)local_724) {
            *(int *)(local_720 + local_728 * 4) = iVar7 + iVar11 * 8;
            local_728 = local_728 + 1;
          }
          if (local_710 < local_70c) {
            *(int *)(local_708 + local_710 * 4) = iVar16 + iVar11 * 8;
            local_710 = local_710 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        func_00368978(puVar4[0x17],piVar17,(int *)&local_728,&local_710);
        local_44 = (uint *)s_P_PowerUpSword_00_0047e78c;
        local_48 = uVar13;
        uVar19 = func_005229AC(piVar17,(int *)&local_48);
        puVar4[0x18] = uVar19;
        return piVar3;
      }
      puVar18 = &local_728;
    } while (0x13 < uVar14);
  } while( true );
}

