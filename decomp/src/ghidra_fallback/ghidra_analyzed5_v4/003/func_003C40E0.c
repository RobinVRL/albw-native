#include "ghidra_types.h"

extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern undefined4 DAT_003c4148;
extern int DAT_003c4160;
extern int *DAT_003c4164;
extern char s_SE_PL_HookShot_SHOT_003c414c[];

// USA 003C40E0 <- EU 003C40BC (Ghidra, non-matching)
// GLOBAL DAT_003c4148 undefined4
// GLOBAL DAT_003c4160 int
// GLOBAL DAT_003c4164 int *
// GLOBAL s_SE_PL_HookShot_SHOT_003c414c string

undefined4 func_003C40E0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_003A3568(*(int *)(param_1 + 0x48) + 0xbc8,0);
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x2d,10,1);
  local_10 = DAT_003c4160;
  uVar1 = DAT_003c4148;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003c4148;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  local_c = s_SE_PL_HookShot_SHOT_003c414c;
  return func_004EABB8(*DAT_003c4164,&local_10,(undefined4 *)0x0);
}

