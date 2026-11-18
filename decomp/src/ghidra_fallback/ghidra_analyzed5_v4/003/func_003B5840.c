#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00566750(int param_1,int param_2);
extern int *DAT_003b5978;
extern uint *DAT_003b597c;
extern undefined4 DAT_003b5980;
extern int DAT_003b5998;
extern char s_Kandelaar_Attack_003b5984[];
extern char s_Rot_jnt_003b599c[];

// USA 003B5840 <- EU 003B581C (Ghidra, non-matching)
// GLOBAL DAT_003b5978 int *
// GLOBAL DAT_003b597c uint *
// GLOBAL DAT_003b5980 undefined4
// GLOBAL DAT_003b5998 int
// GLOBAL s_Kandelaar_Attack_003b5984 string
// GLOBAL s_Rot_jnt_003b599c string

undefined4 func_003B5840(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define aiStack_b8 ((int *)(albw_frame + 0x8))
  #define local_a0 (*(uint *)(albw_frame + 0x20))
  #define local_9c (*(undefined1 *)(albw_frame + 0x24))
  #define auStack_7c ((uint *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x98))
  #define local_20 (*(int *)(albw_frame + 0xa0))
  #define local_1c (*(char * *)(albw_frame + 0xa4))
  iVar7 = *(int *)(*DAT_003b5978 + 0x10);
  func_0019B04C(*DAT_003b597c);
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0016A2FC(puVar2,1,DAT_003b5980,1);
  }
  iVar1 = DAT_003b5998;
  *(undefined4 **)(param_1 + 0x28) = puVar3;
  local_1c = s_Kandelaar_Attack_003b5984;
  local_20 = iVar1;
  func_00169688(*(uint **)(param_1 + 0x28),0,&local_20,*(int *)(iVar7 + 0x428));
  func_0016A02C(*(int *)(param_1 + 0x28),-1,(int *)0xffffffff,0);
  func_002C2C9C(aiStack_b8,*(undefined4 *)(iVar7 + 0x58));
  local_9c = 1;
  local_a0 = local_a0 | 1;
  piVar4 = func_002C2D00(aiStack_b8);
  *(int **)(param_1 + 4) = piVar4;
  iVar7 = piVar4[9];
  local_1c = s_Rot_jnt_003b599c;
  local_20 = iVar1;
  uVar5 = func_00564A78(*(int *)(param_1 + 4),&local_20);
  puVar6 = (uint *)(*(int *)(iVar7 + 0xc) + uVar5 * 0x40);
  *puVar6 = *puVar6 | 0x10;
  *(int *)(*(int *)(param_1 + 4) + 0x16c) = param_1 + 0x1c;
  local_1c = s_Rot_jnt_003b599c;
  local_20 = iVar1;
  uVar5 = func_00564A78(*(int *)(param_1 + 4),&local_20);
  *(uint *)(param_1 + 0x30) = uVar5;
  *(uint *)(param_1 + 0x24) = uVar5;
  func_002C11E8((int *)auStack_7c,0xffffffff,10,0);
  local_28 = 0;
  func_001692F8(*(int *)(param_1 + 0x28),auStack_7c);
  func_00566750(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x50) + 8),
                *(int *)(*(int *)(param_1 + 4) + 0x24));
  return func_002D42E8(param_1);
}

