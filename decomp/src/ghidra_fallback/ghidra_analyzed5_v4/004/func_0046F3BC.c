#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100A86(int param_1,int param_2,int param_3,int param_4,undefined *param_5);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00367C18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5, int param_6,int param_7);
extern int func_003681A4(int param_1,int *param_2,uint param_3,int *param_4,int param_5);
extern int func_00368300(int param_1,int *param_2,int *param_3);
extern int func_00368828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_00368978(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_003693A0(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00369560(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0036959C(undefined4 *param_1,int param_2);
extern int func_00427EC4(undefined4 *param_1,int param_2);
extern int func_0046EEE0(int param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0046f774;
extern int DAT_0046f778;
extern int DAT_0046f77c;
extern undefined1 *DAT_0046f780;
extern int DAT_0046f784;
extern uint DAT_0046f798;
extern undefined *DAT_0046f7bc;
extern undefined *DAT_0046f7d0;
extern undefined *DAT_0046f7d4;
extern int *DAT_0046f7e8;
extern undefined *DAT_0046f7ec;
extern int DAT_0046f7f0;
extern undefined4 DAT_0046f7f4;
extern undefined4 DAT_0046f7f8;
extern undefined4 DAT_0046f9a0;
extern undefined4 DAT_0046f9a4;
extern undefined4 DAT_0046f9a8;
extern undefined4 DAT_0046f9ac;
extern int *DAT_0046f9d0;
extern int *DAT_0046f9d4;
extern char s_L_RupeeNum_00_0046f7d8[];
extern char s_P_Heart__02d_0046f7c0[];
extern char s_P_PowerUpSword_00_0046f9b0[];
extern char s_T_MedalNum_00_0046f788[];
extern char s_T_NoInfo_00_0046f9c4[];
extern char s_T_PlayerName_00_0046f79c[];
extern char s_T_UserName_00_0046f7ac[];
extern char s_cf_0046f7c0[];

// USA 0046F3BC <- EU 0046F394 (Ghidra, non-matching)
// GLOBAL DAT_0046f774 int
// GLOBAL DAT_0046f778 int
// GLOBAL DAT_0046f77c int
// GLOBAL DAT_0046f780 undefined1 *
// GLOBAL DAT_0046f784 int
// GLOBAL DAT_0046f798 uint
// GLOBAL DAT_0046f7bc undefined *
// GLOBAL DAT_0046f7d0 undefined *
// GLOBAL DAT_0046f7d4 undefined *
// GLOBAL DAT_0046f7e8 int *
// GLOBAL DAT_0046f7ec undefined *
// GLOBAL DAT_0046f7f0 int
// GLOBAL DAT_0046f7f4 undefined4
// GLOBAL DAT_0046f7f8 undefined4
// GLOBAL DAT_0046f9a0 undefined4
// GLOBAL DAT_0046f9a4 undefined4
// GLOBAL DAT_0046f9a8 undefined4
// GLOBAL DAT_0046f9ac undefined4
// GLOBAL DAT_0046f9d0 int *
// GLOBAL DAT_0046f9d4 int *
// GLOBAL s_L_RupeeNum_00_0046f7d8 string
// GLOBAL s_cf_0046f7c0 string
// GLOBAL s_P_PowerUpSword_00_0046f9b0 string
// GLOBAL s_T_MedalNum_00_0046f788 string
// GLOBAL s_T_NoInfo_00_0046f9c4 string
// GLOBAL s_T_PlayerName_00_0046f79c string
// GLOBAL s_T_UserName_00_0046f7ac string

/* WARNING: Variable defined which should be unmapped: objStack_738 */
/* WARNING: Variable defined which should be unmapped: objStack_730 */

int * func_0046F3BC(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  _Alignas(8) unsigned char albw_frame[0x740];
  #define objStack_738 ((uint *)(albw_frame + 0x8))
  #define objStack_730 ((uint *)(albw_frame + 0x10))
  #define local_72c (*(char * *)(albw_frame + 0x14))
  #define auStack_728 ((uint *)(albw_frame + 0x18))
  #define auStack_714 ((undefined1 *)(albw_frame + 0x2c))
  #define local_708 (*(uint *)(albw_frame + 0x38))
  #define local_704 (*(char * *)(albw_frame + 0x3c))
  #define auStack_3b8 ((undefined1 *)(albw_frame + 0x388))
  #define local_38 (*(uint *)(albw_frame + 0x708))
  #define local_34 (*(char * *)(albw_frame + 0x70c))
  piVar3 = func_004B9A10(param_1,3);
  iVar5 = DAT_0046f774;
  piVar3[0xe] = DAT_0046f774 + 0x54;
  *piVar3 = iVar5;
  puVar4 = (undefined4 *)func_0010BAB4(0x84);
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = func_00427EC4(puVar4,0);
  }
  piVar3[0x1d] = iVar5;
  iVar5 = DAT_0046f778;
  *(undefined2 *)(piVar3 + 0x1e) = 0;
  *(undefined2 *)((int)piVar3 + 0x7a) = 0xffff;
  piVar3[0x1f] = iVar5;
  piVar3[0x20] = 0;
  *(undefined2 *)(piVar3 + 0x21) = 0;
  *(undefined2 *)((int)piVar3 + 0x86) = 0xffff;
  piVar3[0x22] = iVar5;
  piVar3[0x23] = 0;
  *(undefined2 *)(piVar3 + 0x24) = 0;
  *(undefined2 *)((int)piVar3 + 0x92) = 0xffff;
  piVar3[0x25] = iVar5;
  piVar3[0x26] = 0;
  piVar3[0x27] = 0;
  piVar3[0x28] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0xf8);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_0036959C(puVar6,DAT_0046f77c);
  }
  piVar3[0x29] = (int)puVar4;
  piVar3[0x2a] = 0;
  puVar1 = DAT_0046f780;
  piVar3[0x2b] = 0;
  *puVar1 = 1;
  (**(code **)(*piVar3 + 0x38))(piVar3,DAT_0046f77c);
  piVar15 = (int *)piVar3[7];
  func_0016773C((int)piVar15,9);
  iVar5 = DAT_0046f784;
  uVar13 = 0;
  do {
    func_00166C20(piVar15,uVar13,(int *)(iVar5 + uVar13 * 8),0);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 5);
  piVar3[0x20] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x7a) = 0;
  *(undefined2 *)(piVar3 + 0x1e) = 0;
  piVar3[10] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x22) = 1;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x2e) = 2;
  *(undefined2 *)(piVar3 + 0xb) = 2;
  piVar3[0x23] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x86) = 3;
  *(undefined2 *)(piVar3 + 0x21) = 0;
  piVar3[0x26] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x92) = 4;
  uVar13 = DAT_0046f798;
  *(undefined2 *)(piVar3 + 0x24) = 0;
  objStack_738[0] = uVar13;
  objStack_738[1] = (uint)s_T_MedalNum_00_0046f788;
  objStack_730[0] = uVar13;
  local_72c = s_T_PlayerName_00_0046f79c;
  func_003693A0(piVar3[0x29],piVar15,(int *)objStack_730,(int *)objStack_738);
  objStack_738[1] = (uint)s_T_UserName_00_0046f7ac;
  objStack_738[0] = uVar13;
  func_00368300(piVar3[0x29],piVar15,(int *)objStack_738);
  uVar12 = 0x14;
  func_00100118((int)auStack_728,DAT_0046f7bc,0x2c,0x14);
  uVar14 = 0;
LAB_0046f56c:
  puVar7 = auStack_728 + uVar14 * 0xb;
  while( true ) {
    func_004994B0((int)puVar7,s_P_Heart__02d_0046f7c0,uVar14,uVar12);
    uVar14 = uVar14 + 1;
    if (0x13 < (int)uVar14) break;
    puVar7 = auStack_728;
    if (uVar14 < 0x14) goto LAB_0046f56c;
  }
  objStack_738[0] = (uint)DAT_0046f7d0;
  objStack_738[0] = func_00100A86((int)auStack_3b8,(int)auStack_728,0x2c,0x14,DAT_0046f7d0);
  objStack_738[1] = 0;
  objStack_730[0] = 0;
  func_00367C18(piVar3[0x29],piVar15,piVar3 + 0x21,piVar3 + 0x24,(int *)objStack_738[0],0,0);
  func_00100950((int)auStack_3b8,DAT_0046f7d4,0x2c,0x14);
  func_00100950((int)auStack_728,DAT_0046f7d4,0x2c,0x14);
  objStack_738[1] = (uint)s_L_RupeeNum_00_0046f7d8;
  objStack_738[0] = uVar13;
  func_00369560(piVar3[0x29],piVar15,(int *)objStack_738,(int)piVar3);
  objStack_738[0] = (uint)piVar3;
  func_003681A4(piVar3[0x29],piVar15,5,DAT_0046f7e8,(int)piVar3);
  iVar5 = func_0010CEE0(0x30,(int *)0x0,4);
  if ((iVar5 != 0) && (iVar5 = func_00100118(iVar5,DAT_0046f7ec,0xc,4), iVar5 != 0)) {
    piVar3[0x28] = iVar5;
    piVar3[0x27] = 4;
  }
  iVar5 = DAT_0046f7f0;
  uVar14 = 0;
  do {
    func_00166C20(piVar15,uVar14 + 5,(int *)(iVar5 + uVar14 * 8),0);
    if (uVar14 < (uint)piVar3[0x27]) {
      puVar8 = (undefined2 *)(piVar3[0x28] + uVar14 * 0xc);
    }
    else {
      puVar8 = (undefined2 *)piVar3[0x28];
    }
    puVar7 = objStack_730;
    if (uVar14 < 4) {
      puVar7 = objStack_730 + uVar14;
    }
    *puVar8 = 0;
    *(int **)(puVar8 + 4) = piVar15;
    puVar8[1] = (short)(uVar14 + 5);
    if (uVar14 < (uint)piVar3[0x27]) {
      uVar9 = piVar3[0x28] + uVar14 * 0xc;
    }
    else {
      uVar9 = piVar3[0x28];
    }
    uVar14 = uVar14 + 1;
    *puVar7 = uVar9;
  } while ((int)uVar14 < 4);
  objStack_738[0] = auStack_728[1];
  func_00368828(piVar3[0x29],objStack_730[0],local_72c,auStack_728[0],auStack_728[1]);
  objStack_738[0] = 0;
  objStack_738[1] = 0;
  objStack_730[0] = 0;
  func_0010B3EC(objStack_738,3,(int)&local_72c);
  if ((int)objStack_738[0] < (int)objStack_738[1]) {
    *(undefined4 *)(objStack_730[0] + objStack_738[0] * 4) = DAT_0046f7f4;
    objStack_738[0] = objStack_738[0] + 1;
  }
  if ((int)objStack_738[0] < (int)objStack_738[1]) {
    *(undefined4 *)(objStack_730[0] + objStack_738[0] * 4) = DAT_0046f7f8;
    objStack_738[0] = objStack_738[0] + 1;
  }
  if ((int)objStack_738[0] < (int)objStack_738[1]) {
    *(undefined4 *)(objStack_730[0] + objStack_738[0] * 4) = DAT_0046f9a0;
    objStack_738[0] = objStack_738[0] + 1;
  }
  auStack_728[2] = 0;
  auStack_728[3] = 0;
  auStack_728[4] = 0;
  func_0010B3EC(auStack_728 + 2,3,(int)auStack_714);
  if ((int)auStack_728[2] < (int)auStack_728[3]) {
    *(undefined4 *)(auStack_728[4] + auStack_728[2] * 4) = DAT_0046f9a4;
    auStack_728[2] = auStack_728[2] + 1;
  }
  if ((int)auStack_728[2] < (int)auStack_728[3]) {
    *(undefined4 *)(auStack_728[4] + auStack_728[2] * 4) = DAT_0046f9a8;
    auStack_728[2] = auStack_728[2] + 1;
  }
  if ((int)auStack_728[2] < (int)auStack_728[3]) {
    *(undefined4 *)(auStack_728[4] + auStack_728[2] * 4) = DAT_0046f9ac;
    auStack_728[2] = auStack_728[2] + 1;
  }
  func_00368978(piVar3[0x29],piVar15,(int *)objStack_738,(int *)(auStack_728 + 2));
  local_704 = s_P_PowerUpSword_00_0046f9b0;
  local_708 = uVar13;
  iVar5 = func_005229AC(piVar15,(int *)&local_708);
  piVar3[0x2a] = iVar5;
  local_34 = s_T_NoInfo_00_0046f9c4;
  local_38 = uVar13;
  piVar10 = (int *)func_005229AC((int *)piVar3[7],(int *)&local_38);
  piVar15 = DAT_0046f9d0;
  if (piVar10 != (int *)0x0) {
    piVar11 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    piVar2 = DAT_0046f9d4;
    do {
      if (piVar11 == piVar15) {
        if (piVar10 != (int *)0x0) {
          piVar15 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
          do {
            if (piVar15 == piVar2) goto LAB_0046f968;
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)0x0);
        }
        break;
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_0046f968:
  piVar3[0x2b] = (int)piVar10;
  *(undefined1 *)((int)piVar3 + 0xf) = 0x13;
  func_0046EEE0((int)piVar3);
  *DAT_0046f780 = 0;
  return piVar3;
}

