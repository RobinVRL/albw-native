#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100A86(int param_1,int param_2,int param_3,int param_4,undefined *param_5);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00367AD4(int param_1,int *param_2,uint param_3,int *param_4,int param_5,char param_6);
extern int func_00367C18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5, int param_6,int param_7);
extern int func_003681A4(int param_1,int *param_2,uint param_3,int *param_4,int param_5);
extern int func_00368300(int param_1,int *param_2,int *param_3);
extern int func_00368544(int param_1,int *param_2,uint param_3,int *param_4,int param_5,char param_6);
extern int func_003687C4(int param_1,int param_2);
extern int func_00368828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_00368978(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_003693A0(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00369560(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0036959C(undefined4 *param_1,int param_2);
extern int func_00427EC4(undefined4 *param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B95B8(int param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4, undefined2 param_5);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00470e60;
extern undefined4 DAT_00470e64;
extern int DAT_00470e68;
extern undefined4 *DAT_00470e6c;
extern undefined *DAT_00470e70;
extern uint DAT_00470e80;
extern undefined1 *DAT_004713a4;
extern int DAT_004713a8;
extern undefined *DAT_004713dc;
extern undefined *DAT_004713f0;
extern undefined *DAT_004713f4;
extern int *DAT_00471408;
extern int *DAT_0047140c;
extern int *DAT_00471410;
extern undefined *DAT_00471414;
extern int DAT_00471418;
extern undefined4 DAT_0047141c;
extern undefined4 DAT_00471420;
extern undefined4 DAT_00471424;
extern undefined4 DAT_00471428;
extern undefined4 DAT_0047142c;
extern undefined4 DAT_00471430;
extern char s_L_RupeeNum_00_004713f8[];
extern char s_P_Heart__02d_004713e0[];
extern char s_P_PowerUpSword_00_0047149c[];
extern char s_T_MedalNum_00_004713ac[];
extern char s_T_PlayerName_00_004713bc[];
extern char s_T_UserName_00_004713cc[];
extern char s_cState_BoardChange_00470ec0[];
extern char s_cState_ChangeWait_00470e84[];
extern char s_cState_DecidePause_00470ee8[];
extern char s_cState_Idle_00470e74[];
extern char s_cState_ItemRefresh_00470ed4[];
extern char s_cState_ItemSelect_00470eac[];
extern char s_cState_WaitFrame_00470e98[];
extern char s_cf_004713e0[];

// USA 00470A94 <- EU 00470A6C (Ghidra, non-matching)
// GLOBAL DAT_00470e60 int
// GLOBAL DAT_00470e64 undefined4
// GLOBAL DAT_00470e68 int
// GLOBAL DAT_00470e6c undefined4 *
// GLOBAL DAT_00470e70 undefined *
// GLOBAL DAT_00470e80 uint
// GLOBAL DAT_004713a4 undefined1 *
// GLOBAL DAT_004713a8 int
// GLOBAL DAT_004713dc undefined *
// GLOBAL DAT_004713f0 undefined *
// GLOBAL DAT_004713f4 undefined *
// GLOBAL DAT_00471408 int *
// GLOBAL DAT_0047140c int *
// GLOBAL DAT_00471410 int *
// GLOBAL DAT_00471414 undefined *
// GLOBAL DAT_00471418 int
// GLOBAL DAT_0047141c undefined4
// GLOBAL DAT_00471420 undefined4
// GLOBAL DAT_00471424 undefined4
// GLOBAL DAT_00471428 undefined4
// GLOBAL DAT_0047142c undefined4
// GLOBAL DAT_00471430 undefined4
// GLOBAL s_L_RupeeNum_00_004713f8 string
// GLOBAL s_cf_004713e0 string
// GLOBAL s_P_PowerUpSword_00_0047149c string
// GLOBAL s_T_MedalNum_00_004713ac string
// GLOBAL s_T_PlayerName_00_004713bc string
// GLOBAL s_T_UserName_00_004713cc string
// GLOBAL s_cState_BoardChange_00470ec0 string
// GLOBAL s_cState_ChangeWait_00470e84 string
// GLOBAL s_cState_DecidePause_00470ee8 string
// GLOBAL s_cState_Idle_00470e74 string
// GLOBAL s_cState_ItemRefresh_00470ed4 string
// GLOBAL s_cState_ItemSelect_00470eac string
// GLOBAL s_cState_WaitFrame_00470e98 string

/* WARNING: Variable defined which should be unmapped: objStack_748 */
/* WARNING: Type propagation algorithm not settling */

int * func_00470A94(undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x750];
  #define objStack_748 ((uint *)(albw_frame + 0x8))
  #define local_738 (*(uint *)(albw_frame + 0x18))
  #define local_734 (*(char * *)(albw_frame + 0x1c))
  #define local_730 ((int *)(albw_frame + 0x20))
  #define local_720 (*(int *)(albw_frame + 0x30))
  #define local_71c (*(int *)(albw_frame + 0x34))
  #define local_718 (*(int *)(albw_frame + 0x38))
  #define auStack_714 ((undefined1 *)(albw_frame + 0x3c))
  #define auStack_3c8 ((undefined1 *)(albw_frame + 0x388))
  #define local_58 (*(uint *)(albw_frame + 0x6f8))
  #define local_54 (*(char * *)(albw_frame + 0x6fc))
  piVar2 = func_004B9A10(param_1,1);
  iVar7 = DAT_00470e60;
  *piVar2 = DAT_00470e60;
  piVar2[0xe] = iVar7 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x1d);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  piVar2 = puVar3 + -0x1d;
  puVar3[8] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x84);
  uVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    uVar5 = func_00427EC4(puVar4,1);
  }
  puVar3[9] = uVar5;
  uVar5 = DAT_00470e64;
  *(undefined2 *)(puVar3 + 10) = 0;
  *(undefined2 *)((int)puVar3 + 0x2a) = 0xffff;
  puVar3[0xb] = uVar5;
  puVar3[0xc] = 0;
  *(undefined2 *)(puVar3 + 0xd) = 0;
  *(undefined2 *)((int)puVar3 + 0x36) = 0xffff;
  puVar3[0xe] = uVar5;
  puVar3[0xf] = 0;
  *(undefined2 *)(puVar3 + 0x10) = 0;
  *(undefined2 *)((int)puVar3 + 0x42) = 0xffff;
  puVar3[0x11] = uVar5;
  puVar3[0x12] = 0;
  *(undefined2 *)(puVar3 + 0x13) = 0;
  *(undefined2 *)((int)puVar3 + 0x4e) = 0xffff;
  puVar3[0x14] = uVar5;
  puVar3[0x15] = 0;
  *(undefined2 *)(puVar3 + 0x16) = 0;
  *(undefined2 *)((int)puVar3 + 0x5a) = 0xffff;
  puVar3[0x17] = uVar5;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0xf8);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_0036959C(puVar6,DAT_00470e68);
  }
  puVar3[0x1b] = puVar4;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  *(undefined1 *)(puVar3 + 0x1e) = 4;
  puVar3[0x1f] = 0;
  puVar3[5] = piVar2;
  *(undefined1 *)((int)puVar3 + 6) = 7;
  iVar7 = func_0010BA78(0x70);
  puVar4 = DAT_00470e6c;
  puVar3[6] = iVar7;
  puVar3[7] = iVar7 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar11 = 7;
  puVar6 = (undefined4 *)(iVar7 + -8);
  do {
    uVar5 = puVar4[0xb];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar4[10];
    puVar6[3] = uVar5;
    uVar5 = puVar4[0xb];
    puVar6[4] = puVar4[10];
    puVar6[5] = uVar5;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar6;
  if (uVar14 != 0) {
    puVar8 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar4[5];
      *puVar6 = puVar4[4];
      puVar6[1] = uVar5;
      puVar8 = puVar6;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar5 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar5;
      uVar5 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar5;
      puVar8 = puVar8 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 7;
    iVar7 = func_00100118((int)(puVar6 + 2),DAT_00470e70,0x24,7);
  }
  if (iVar7 != 0) {
    puVar3[3] = iVar7;
    puVar3[2] = 7;
  }
  uVar14 = DAT_00470e80;
  local_54 = s_cState_Idle_00470e74;
  local_58 = DAT_00470e80;
  func_0010BEC4((int)puVar3,0,(int *)&local_58);
  puVar6 = (undefined4 *)puVar3[6];
  uVar12 = puVar4[1];
  uVar17 = puVar4[2];
  uVar5 = puVar4[3];
  uVar19 = puVar4[4];
  uVar18 = puVar4[5];
  *puVar6 = *puVar4;
  puVar6[1] = uVar12;
  puVar6 = (undefined4 *)puVar3[7];
  puVar6[1] = uVar5;
  *puVar6 = uVar17;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar19;
  puVar6[1] = uVar18;
  local_54 = s_cState_ChangeWait_00470e84;
  local_58 = uVar14;
  func_0010BEC4((int)puVar3,1,(int *)&local_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[7];
  uVar12 = puVar4[8];
  uVar17 = puVar4[9];
  *(undefined4 *)(iVar7 + 8) = puVar4[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar5;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 8) = uVar19;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  local_54 = s_cState_WaitFrame_00470e98;
  local_58 = uVar14;
  func_0010BEC4((int)puVar3,2,(int *)&local_58);
  iVar7 = puVar3[6];
  uVar20 = *(undefined8 *)(puVar4 + 10);
  uVar5 = puVar4[0xc];
  uVar12 = puVar4[0xd];
  *(int *)(iVar7 + 0x10) = (int)uVar20;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar5;
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar19;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  local_54 = s_cState_ItemSelect_00470eac;
  local_58 = uVar14;
  func_0010BEC4((int)puVar3,3,(int *)&local_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[0xe];
  uVar12 = puVar4[0xf];
  *(int *)(iVar7 + 0x18) = (int)uVar20;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar5;
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar19;
  *(undefined4 *)(iVar7 + 0x1c) = uVar18;
  local_54 = s_cState_BoardChange_00470ec0;
  local_58 = uVar14;
  func_0010BEC4((int)puVar3,5,(int *)&local_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[0x11];
  uVar17 = puVar4[0x12];
  uVar12 = puVar4[0x13];
  *(undefined4 *)(iVar7 + 0x28) = puVar4[0x10];
  *(undefined4 *)(iVar7 + 0x2c) = uVar5;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar17;
  *(undefined4 *)(iVar7 + 0x2c) = uVar12;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x28) = uVar19;
  *(undefined4 *)(iVar7 + 0x2c) = uVar18;
  local_54 = s_cState_ItemRefresh_00470ed4;
  local_58 = uVar14;
  func_0010BEC4((int)puVar3,4,(int *)&local_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[0x15];
  uVar12 = puVar4[0x16];
  uVar17 = puVar4[0x17];
  *(undefined4 *)(iVar7 + 0x20) = puVar4[0x14];
  *(undefined4 *)(iVar7 + 0x24) = uVar5;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar12;
  *(undefined4 *)(iVar7 + 0x24) = uVar17;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x20) = uVar19;
  *(undefined4 *)(iVar7 + 0x24) = uVar18;
  local_54 = s_cState_DecidePause_00470ee8;
  local_58 = uVar14;
  func_0010BEC4((int)puVar3,6,(int *)&local_58);
  uVar5 = puVar4[0x1a];
  uVar17 = puVar4[0x19];
  iVar7 = puVar3[6];
  uVar12 = puVar4[0x1b];
  *(undefined4 *)(iVar7 + 0x30) = puVar4[0x18];
  *(undefined4 *)(iVar7 + 0x34) = uVar17;
  iVar7 = DAT_00470e68;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x30) = uVar5;
  *(undefined4 *)(iVar11 + 0x34) = uVar12;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x30) = uVar19;
  *(undefined4 *)(iVar11 + 0x34) = uVar18;
  *DAT_004713a4 = 1;
  (**(code **)(*piVar2 + 0x38))(piVar2,iVar7,0);
  piVar16 = (int *)puVar3[-0x16];
  func_0016773C((int)piVar16,0xc);
  iVar7 = DAT_004713a8;
  uVar13 = 0;
  do {
    piVar15 = (int *)(iVar7 + uVar13 * 8);
    (**(code **)(*piVar15 + 8))(piVar15);
    objStack_748[1] = piVar15[1];
    objStack_748[0] = uVar14;
    func_00166C20(piVar16,uVar13,(int *)objStack_748,0);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 8);
  puVar3[0xc] = piVar16;
  *(undefined2 *)((int)puVar3 + 0x2a) = 0;
  *(undefined2 *)(puVar3 + 10) = 0;
  puVar3[-0x13] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x52) = 1;
  *(undefined2 *)(puVar3 + -0x15) = 0;
  puVar3[-0x10] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x46) = 2;
  *(undefined2 *)(puVar3 + -0x12) = 0;
  puVar3[0xf] = piVar16;
  *(undefined2 *)((int)puVar3 + 0x36) = 3;
  *(undefined2 *)(puVar3 + 0xd) = 0;
  puVar3[0x12] = piVar16;
  *(undefined2 *)((int)puVar3 + 0x42) = 4;
  *(undefined2 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = piVar16;
  *(undefined2 *)((int)puVar3 + 0x5a) = 5;
  *(undefined2 *)(puVar3 + 0x16) = 4;
  local_734 = s_T_MedalNum_00_004713ac;
  local_738 = uVar14;
  objStack_748[1] = (uint)s_T_PlayerName_00_004713bc;
  objStack_748[0] = uVar14;
  func_003693A0(puVar3[0x1b],piVar16,(int *)objStack_748,(int *)&local_738);
  objStack_748[1] = (uint)s_T_UserName_00_004713cc;
  objStack_748[0] = uVar14;
  func_00368300(puVar3[0x1b],piVar16,(int *)objStack_748);
  uVar5 = 0x14;
  func_00100118((int)&local_738,DAT_004713dc,0x2c,0x14);
  uVar13 = 0;
  do {
    puVar9 = &local_738 + uVar13 * 0xb;
    do {
      func_004994B0((int)puVar9,s_P_Heart__02d_004713e0,uVar13,uVar5);
      uVar13 = uVar13 + 1;
      if (0x13 < (int)uVar13) {
        objStack_748[0] = (uint)DAT_004713f0;
        objStack_748[0] = func_00100A86((int)auStack_3c8,(int)&local_738,0x2c,0x14,DAT_004713f0);
        objStack_748[1] = 0;
        objStack_748[2] = 0;
        func_00367C18(puVar3[0x1b],piVar16,puVar3 + 0xd,puVar3 + 0x10,(int *)objStack_748[0],0,0);
        func_00100950((int)auStack_3c8,DAT_004713f4,0x2c,0x14);
        func_00100950((int)&local_738,DAT_004713f4,0x2c,0x14);
        objStack_748[1] = (uint)s_L_RupeeNum_00_004713f8;
        objStack_748[0] = uVar14;
        func_00369560(puVar3[0x1b],piVar16,(int *)objStack_748,(int)piVar2);
        objStack_748[0] = (uint)piVar2;
        func_003681A4(puVar3[0x1b],piVar16,3,DAT_00471408,(int)piVar2);
        objStack_748[1] = 0;
        objStack_748[0] = (uint)piVar2;
        func_00368544(puVar3[0x1b],piVar16,2,DAT_0047140c,(int)piVar2,'\0');
        objStack_748[1] = 2;
        objStack_748[0] = (uint)piVar2;
        func_00367AD4(puVar3[0x1b],piVar16,2,DAT_00471410,(int)piVar2,'\x02');
        func_003687C4(puVar3[0x1b],0);
        iVar7 = func_0010CEE0(0x30,(int *)0x0,4);
        if ((iVar7 != 0) && (iVar7 = func_00100118(iVar7,DAT_00471414,0xc,4), iVar7 != 0)) {
          puVar3[0x1a] = iVar7;
          puVar3[0x19] = 4;
        }
        iVar7 = DAT_00471418;
        uVar13 = 0;
        do {
          func_00166C20(piVar16,uVar13 + 8,(int *)(iVar7 + uVar13 * 8),0);
          if (uVar13 < (uint)puVar3[0x19]) {
            puVar10 = (undefined2 *)(puVar3[0x1a] + uVar13 * 0xc);
          }
          else {
            puVar10 = (undefined2 *)puVar3[0x1a];
          }
          piVar15 = local_730;
          if (uVar13 < 4) {
            piVar15 = local_730 + uVar13;
          }
          *puVar10 = 0;
          *(int **)(puVar10 + 4) = piVar16;
          puVar10[1] = (short)(uVar13 + 8);
          if (uVar13 < (uint)puVar3[0x19]) {
            iVar11 = puVar3[0x1a] + uVar13 * 0xc;
          }
          else {
            iVar11 = puVar3[0x1a];
          }
          uVar13 = uVar13 + 1;
          *piVar15 = iVar11;
        } while ((int)uVar13 < 4);
        objStack_748[0] = local_730[3];
        func_00368828(puVar3[0x1b],local_730[0],local_730[1],local_730[2],local_730[3]);
        local_738 = 0;
        local_734 = (char *)0x0;
        local_730[0] = 0;
        func_0010B3EC(&local_738,3,(int)(local_730 + 1));
        if ((int)local_738 < (int)local_734) {
          *(undefined4 *)(local_730[0] + local_738 * 4) = DAT_0047141c;
          local_738 = local_738 + 1;
        }
        if ((int)local_738 < (int)local_734) {
          *(undefined4 *)(local_730[0] + local_738 * 4) = DAT_00471420;
          local_738 = local_738 + 1;
        }
        if ((int)local_738 < (int)local_734) {
          *(undefined4 *)(local_730[0] + local_738 * 4) = DAT_00471424;
          local_738 = local_738 + 1;
        }
        local_720 = 0;
        local_71c = 0;
        local_718 = 0;
        func_0010B3EC(&local_720,3,(int)auStack_714);
        if (local_720 < local_71c) {
          *(undefined4 *)(local_718 + local_720 * 4) = DAT_00471428;
          local_720 = local_720 + 1;
        }
        if (local_720 < local_71c) {
          *(undefined4 *)(local_718 + local_720 * 4) = DAT_0047142c;
          local_720 = local_720 + 1;
        }
        if (local_720 < local_71c) {
          *(undefined4 *)(local_718 + local_720 * 4) = DAT_00471430;
          local_720 = local_720 + 1;
        }
        func_00368978(puVar3[0x1b],piVar16,(int *)&local_738,&local_720);
        objStack_748[1] = (uint)s_P_PowerUpSword_00_0047149c;
        objStack_748[0] = uVar14;
        uVar5 = func_005229AC(piVar16,(int *)objStack_748);
        puVar3[0x1d] = uVar5;
        puVar3[-0x17] = puVar3[-0x17] & 0xfffffeff;
        *(undefined1 *)(puVar3 + 0x1e) = 4;
        objStack_748[0] = 0;
        func_004B95B8((int)piVar2,2,2,0,0);
        *DAT_004713a4 = 0;
        return piVar2;
      }
      puVar9 = &local_738;
    } while (0x13 < uVar13);
  } while( true );
}

