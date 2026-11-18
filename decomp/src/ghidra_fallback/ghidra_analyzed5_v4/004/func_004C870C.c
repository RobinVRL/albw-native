#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00120024(undefined4 *param_1,int param_2);
extern int func_004A25E4(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_004A261C(int *param_1,int param_2,int *param_3);
extern int func_004A3B28(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4);
extern int func_004A6C60(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_004A6C98(int *param_1,int param_2,int *param_3);
extern int func_004A7548(undefined4 *param_1,int *param_2);
extern int func_004B070C(int param_1);
extern int *DAT_004c8a28;
extern int DAT_004c8acc;
extern undefined4 DAT_004c8ad0;
extern char s_Default_004c8a2c[];
extern char s_Join_Dark_004c8a34[];
extern char s_Join_NoDark_004c8a50[];
extern char s_LayoutBtm_004c8a80[];
extern char s_LayoutTop_004c8a74[];
extern char s_NoJoin_NoDark_004c8a40[];
extern char s_OnlyGetPause_004c8a8c[];
extern char s_PlayerJoin_Dark_004c8a9c[];
extern char s_PlayerJoin_NoDark_004c8aac[];
extern char s_PostEffect_004c8a68[];
extern char s_StopSword_004c8a5c[];
extern char s_StopWallIn_004c8ac0[];

// USA 004C870C <- EU 004C86E4 (Ghidra, non-matching)
// GLOBAL DAT_004c8a28 int *
// GLOBAL DAT_004c8acc int
// GLOBAL DAT_004c8ad0 undefined4
// GLOBAL s_Default_004c8a2c string
// GLOBAL s_Join_Dark_004c8a34 string
// GLOBAL s_Join_NoDark_004c8a50 string
// GLOBAL s_LayoutBtm_004c8a80 string
// GLOBAL s_LayoutTop_004c8a74 string
// GLOBAL s_NoJoin_NoDark_004c8a40 string
// GLOBAL s_OnlyGetPause_004c8a8c string
// GLOBAL s_PlayerJoin_Dark_004c8a9c string
// GLOBAL s_PlayerJoin_NoDark_004c8aac string
// GLOBAL s_PostEffect_004c8a68 string
// GLOBAL s_StopSword_004c8a5c string
// GLOBAL s_StopWallIn_004c8ac0 string

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_004C870C(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  puVar1 = (undefined4 *)func_0010BAB4(0x40);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    objStack_30[0] = 300;
    local_2c = 800;
    puVar2 = func_004A3B28(puVar1,*(undefined4 *)(*DAT_004c8a28 + 0x10),param_2,300);
  }
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  piVar3 = (int *)func_0010BAB4(0xc);
  piVar4 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar4 = func_004A261C(piVar3,0xc,(int *)0x0);
  }
  *(int **)(param_1 + 0x14) = piVar4;
  func_004A25E4((int)piVar4,s_Default_004c8a2c,0);
  func_004A25E4(*(int *)(param_1 + 0x14),s_Join_Dark_004c8a34,1);
  func_004A25E4(*(int *)(param_1 + 0x14),s_NoJoin_NoDark_004c8a40,2);
  func_004A25E4(*(int *)(param_1 + 0x14),s_Join_NoDark_004c8a50,3);
  func_004A25E4(*(int *)(param_1 + 0x14),s_StopSword_004c8a5c,4);
  func_004A25E4(*(int *)(param_1 + 0x14),s_PostEffect_004c8a68,5);
  func_004A25E4(*(int *)(param_1 + 0x14),s_LayoutTop_004c8a74,6);
  func_004A25E4(*(int *)(param_1 + 0x14),s_LayoutBtm_004c8a80,7);
  func_004A25E4(*(int *)(param_1 + 0x14),s_OnlyGetPause_004c8a8c,8);
  func_004A25E4(*(int *)(param_1 + 0x14),s_PlayerJoin_Dark_004c8a9c,9);
  func_004A25E4(*(int *)(param_1 + 0x14),s_PlayerJoin_NoDark_004c8aac,10);
  func_004A25E4(*(int *)(param_1 + 0x14),s_StopWallIn_004c8ac0,0xb);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28) = *(undefined4 *)(param_1 + 0x14);
  piVar4 = (int *)func_0010BAB4(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = func_004A261C(piVar4,0x19,(int *)0x0);
  }
  *(int **)(param_1 + 0x18) = piVar4;
  piVar3 = (int *)func_0010BAB4(0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = func_004A6C98(piVar3,0x19,(int *)0x0);
  }
  uVar6 = 0;
  *(int **)(param_1 + 0x34) = piVar3;
  do {
    uVar5 = func_004B070C(uVar6 & 0xff);
    func_004A25E4((int)piVar4,uVar5,uVar6);
    uVar5 = func_004B070C(uVar6 & 0xff);
    func_004A6C60((int)piVar3,uVar5,uVar6);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x19);
  piVar4 = (int *)func_0010BAB4(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = func_004A261C(piVar4,10,(int *)0x0);
  }
  *(int **)(param_1 + 0x1c) = piVar4;
  piVar3 = (int *)func_0010BAB4(0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = func_004A6C98(piVar3,10,(int *)0x0);
  }
  iVar8 = DAT_004c8acc;
  iVar7 = 0;
  *(int **)(param_1 + 0x38) = piVar3;
  do {
    piVar9 = (int *)(iVar8 + iVar7 * 8);
    (**(code **)(*piVar9 + 8))(piVar9);
    func_004A25E4((int)piVar4,piVar9[1],iVar7);
    (**(code **)(*piVar9 + 8))(piVar9);
    func_004A6C60((int)piVar3,piVar9[1],iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  piVar4 = (int *)func_0010BAB4(0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = func_004A261C(piVar4,0x40,(int *)0x0);
  }
  iVar8 = 0;
  *(int **)(param_1 + 0x20) = piVar4;
  do {
    func_00120024(objStack_30,(int)(char)iVar8);
    (**(code **)(objStack_30[0] + 8))(objStack_30);
    func_004A25E4((int)piVar4,local_2c,iVar8);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40);
  puVar2 = (undefined4 *)func_0010BAB4(4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_004c8ad0;
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  *(undefined4 **)(*(int *)(param_1 + 0x10) + 0x38) = puVar2;
  puVar1 = (undefined4 *)func_0010BAB4(0x28);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_004A7548(puVar1,param_2);
  }
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return;
}

