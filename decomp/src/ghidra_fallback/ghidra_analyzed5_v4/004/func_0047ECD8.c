#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00368300(int param_1,int *param_2,int *param_3);
extern int func_00368828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_003693A0(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00369560(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0036959C(undefined4 *param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0047ef1c;
extern int DAT_0047ef20;
extern int DAT_0047ef24;
extern undefined1 *DAT_0047ef28;
extern int DAT_0047ef2c;
extern uint DAT_0047ef40;
extern undefined *DAT_0047ef74;
extern int DAT_0047ef78;
extern char s_L_RupeeNum_00_0047ef64[];
extern char s_T_MedalNum_00_0047ef30[];
extern char s_T_PlayerName_00_0047ef44[];
extern char s_T_UserName_00_0047ef54[];

// USA 0047ECD8 <- EU 0047ECB0 (Ghidra, non-matching)
// GLOBAL DAT_0047ef1c int
// GLOBAL DAT_0047ef20 int
// GLOBAL DAT_0047ef24 int
// GLOBAL DAT_0047ef28 undefined1 *
// GLOBAL DAT_0047ef2c int
// GLOBAL DAT_0047ef40 uint
// GLOBAL DAT_0047ef74 undefined *
// GLOBAL DAT_0047ef78 int
// GLOBAL s_L_RupeeNum_00_0047ef64 string
// GLOBAL s_T_MedalNum_00_0047ef30 string
// GLOBAL s_T_PlayerName_00_0047ef44 string
// GLOBAL s_T_UserName_00_0047ef54 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */

int * func_0047ECD8(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(uint *)(albw_frame + 0x14))
  piVar2 = func_004B9A10(param_1,0);
  iVar3 = DAT_0047ef1c + 0x54;
  *piVar2 = DAT_0047ef1c;
  piVar2[0xe] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0xf8);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0036959C(puVar4,DAT_0047ef20);
  }
  piVar2[0x1d] = (int)puVar5;
  iVar3 = DAT_0047ef24;
  *(undefined2 *)(piVar2 + 0x1e) = 0;
  *(undefined2 *)((int)piVar2 + 0x7a) = 0xffff;
  puVar1 = DAT_0047ef28;
  piVar2[0x1f] = iVar3;
  piVar2[0x20] = 0;
  piVar2[0x21] = 0;
  piVar2[0x22] = 0;
  *puVar1 = 1;
  (**(code **)(*piVar2 + 0x38))(piVar2,DAT_0047ef20,0);
  piVar10 = (int *)piVar2[7];
  func_0016773C((int)piVar10,7);
  iVar3 = DAT_0047ef2c;
  uVar9 = 0;
  do {
    func_00166C20(piVar10,uVar9,(int *)(iVar3 + uVar9 * 8),0);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 3);
  piVar2[10] = (int)piVar10;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  func_002313DC((int)(piVar2 + 8));
  piVar2[0xd] = (int)piVar10;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x20] = (int)piVar10;
  *(undefined2 *)((int)piVar2 + 0x7a) = 2;
  *(undefined2 *)(piVar2 + 0x1e) = 0;
  uVar9 = DAT_0047ef40;
  local_34 = s_T_MedalNum_00_0047ef30;
  local_38 = DAT_0047ef40;
  objStack_40[1] = (uint)s_T_PlayerName_00_0047ef44;
  objStack_40[0] = DAT_0047ef40;
  func_003693A0(piVar2[0x1d],piVar10,(int *)objStack_40,(int *)&local_38);
  objStack_40[1] = (uint)s_T_UserName_00_0047ef54;
  objStack_40[0] = uVar9;
  func_00368300(piVar2[0x1d],piVar10,(int *)objStack_40);
  objStack_40[1] = (uint)s_L_RupeeNum_00_0047ef64;
  objStack_40[0] = uVar9;
  func_00369560(piVar2[0x1d],piVar10,(int *)objStack_40,(int)piVar2);
  iVar3 = func_0010CEE0(0x30,(int *)0x0,4);
  if ((iVar3 != 0) && (iVar3 = func_00100118(iVar3,DAT_0047ef74,0xc,4), iVar3 != 0)) {
    piVar2[0x22] = iVar3;
    piVar2[0x21] = 4;
  }
  iVar3 = DAT_0047ef78;
  uVar9 = 0;
  do {
    func_00166C20(piVar10,uVar9 + 3,(int *)(iVar3 + uVar9 * 8),0);
    if (uVar9 < (uint)piVar2[0x21]) {
      puVar6 = (undefined2 *)(piVar2[0x22] + uVar9 * 0xc);
    }
    else {
      puVar6 = (undefined2 *)piVar2[0x22];
    }
    if (uVar9 < 4) {
      puVar8 = &local_38 + uVar9;
    }
    else {
      puVar8 = &local_38;
    }
    *puVar6 = 0;
    *(int **)(puVar6 + 4) = piVar10;
    puVar6[1] = (short)(uVar9 + 3);
    if (uVar9 < (uint)piVar2[0x21]) {
      uVar7 = piVar2[0x22] + uVar9 * 0xc;
    }
    else {
      uVar7 = piVar2[0x22];
    }
    uVar9 = uVar9 + 1;
    *puVar8 = uVar7;
  } while ((int)uVar9 < 4);
  objStack_40[0] = local_2c;
  func_00368828(piVar2[0x1d],local_38,local_34,uStack_30,local_2c);
  *(undefined1 *)((int)piVar2 + 0xf) = 0x40;
  func_004B9958((int)piVar2,4);
  *puVar1 = 0;
  return piVar2;
}

