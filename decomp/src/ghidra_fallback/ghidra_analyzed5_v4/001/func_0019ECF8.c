#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001A1040(int param_1,uint param_2);
extern int func_0036C42C(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_0019ef38;
extern int DAT_0019ef3c;
extern undefined DAT_0019ef40;
extern int DAT_0019ef68;
extern int *DAT_0019ef6c;
extern int DAT_0019ef70;
extern char s_SE_EN_BOSS_DIE_EXPLODE_0019ef50[];
extern char s__DeathBomb_0019ef43[];
extern undefined4 _DAT_0019ef40;

// USA 0019ECF8 <- EU 0019ECF8 (Ghidra, non-matching)
// GLOBAL DAT_0019ef38 int
// GLOBAL DAT_0019ef3c int
// GLOBAL DAT_0019ef40 undefined
// GLOBAL DAT_0019ef68 int
// GLOBAL DAT_0019ef6c int *
// GLOBAL DAT_0019ef70 int
// GLOBAL s_;DeathBomb_0019ef43 string
// GLOBAL s_SE_EN_BOSS_DIE_EXPLODE_0019ef50 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0019ECF8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  iVar3 = DAT_0019ef38;
  param_1[0x484] = DAT_0019ef3c;
  *(undefined1 *)((int)param_1 + 0x1222) = 0;
  param_1[0x485] = iVar3;
  param_1[0x47f] = 0;
  param_1[0x480] = iVar3;
  param_1[0x47e] = 0;
  param_1[0xf8] = iVar3;
  param_1[0xf5] = param_1[3];
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    param_1[iVar3 * 0x12 + 0x285] = param_1[0xf5];
    iVar2 = DAT_0019ef70;
    iVar3 = iVar1;
  } while (iVar1 != 4);
  if (*(char *)((int)param_1 + 0x1226) == '\0') {
    param_1[0x476] = 0x1e;
    param_1[0x477] = iVar2;
    param_1[0x475] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x26f) = 1;
    func_0036C42C((int)(param_1 + 0x232));
  }
  if ((char)param_1[0x489] != '\0') {
    func_00588C14((int)param_1,1,1);
  }
  *(undefined1 *)((int)param_1 + 0x121f) = 3;
  iVar3 = _DAT_0019ef40;
  param_1[0x482] = 0xbe;
  param_1[0x483] = iVar3;
  param_1[0x481] = 0;
  piVar4 = param_1 + 0x48c;
  if (param_1[0xd1] == 0) {
    *piVar4 = 0;
    param_1[0x48d] = 0;
  }
  else {
    iVar3 = *piVar4;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x48d])) {
      func_00110848(iVar3);
    }
    func_004A1B9C(&local_20,param_1[0xd1],(uint *)(s__DeathBomb_0019ef43 + 1));
    *piVar4 = local_20;
    param_1[0x48d] = iStack_1c;
  }
  iVar3 = *piVar4;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x48d])) {
    func_004A2F38(iVar3,param_1 + *(char *)((int)param_1 + 0x121f) * 3 + 0x45e);
  }
  local_24 = s_SE_EN_BOSS_DIE_EXPLODE_0019ef50;
  local_28 = DAT_0019ef68;
  func_0014DBF4(param_1,&local_28,param_1 + *(char *)((int)param_1 + 0x121f) * 3 + 0x45e,0);
  **(undefined4 **)(*DAT_0019ef6c + 0x3dbe8) = 0xffffffff;
  func_001A1040((int)param_1,6);
  if ((char)param_1[0x194] == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x16a];
  }
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x90000;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    *(uint *)(param_1[iVar3 * 0x12 + 0x287] + 0x164) =
         *(uint *)(param_1[iVar3 * 0x12 + 0x287] + 0x164) | 0x90000;
    iVar3 = iVar2;
  } while (iVar2 != 4);
  return;
}

