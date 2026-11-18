#include "ghidra_types.h"

extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int DAT_003ba03c;
extern int *DAT_003ba040;
extern undefined4 DAT_003ba044;
extern char s_SE_PL_Sword_SWING_360_003ba024[];

// USA 003B9FA4 <- EU 003B9F80 (Ghidra, non-matching)
// GLOBAL DAT_003ba03c int
// GLOBAL DAT_003ba040 int *
// GLOBAL DAT_003ba044 undefined4
// GLOBAL s_SE_PL_Sword_SWING_360_003ba024 string

void func_003B9FA4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x1e,0,0);
  local_14 = s_SE_PL_Sword_SWING_360_003ba024;
  local_18 = DAT_003ba03c;
  func_004EABB8(*DAT_003ba040,&local_18,(undefined4 *)0x0);
  func_003A3568(*(int *)(param_1 + 0x48) + 0xbc8,2);
  uVar1 = DAT_003ba044;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003ba044;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x90) = 0;
  return;
}

