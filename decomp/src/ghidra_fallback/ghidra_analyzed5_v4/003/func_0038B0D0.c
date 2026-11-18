#include "ghidra_types.h"

extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int *DAT_0038b124;
extern int DAT_0038b134;
extern char s_Arrow_pos_0038b128[];

// USA 0038B0D0 <- EU 0038B0AC (Ghidra, non-matching)
// GLOBAL DAT_0038b124 int *
// GLOBAL DAT_0038b134 int
// GLOBAL s_Arrow_pos_0038b128 string

undefined4 func_0038B0D0(int param_1)

{
  int *piVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define aiStack_50 ((int *)(albw_frame + 0x0))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_10 (*(int *)(albw_frame + 0x40))
  #define local_c (*(char * *)(albw_frame + 0x44))
  func_002C2C9C(aiStack_50,*(undefined4 *)(*(int *)(*DAT_0038b124 + 0x10) + 0x3c));
  local_34 = 1;
  local_38 = local_38 | 1;
  piVar1 = func_002C2D00(aiStack_50);
  local_10 = DAT_0038b134;
  *(int **)(param_1 + 4) = piVar1;
  local_c = s_Arrow_pos_0038b128;
  uVar2 = func_00564A78(*(int *)(*(int *)(param_1 + 0x1c) + 4),&local_10);
  *(uint *)(param_1 + 0x20) = uVar2;
  return func_002D42E8(param_1);
}

