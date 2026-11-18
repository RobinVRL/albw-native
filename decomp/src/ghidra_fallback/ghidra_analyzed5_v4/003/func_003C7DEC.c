#include "ghidra_types.h"

extern int func_003C97F4(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined1 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, int param_9);
extern int DAT_003c7e28;

// USA 003C7DEC <- EU 003C7DC8 (Ghidra, non-matching)
// GLOBAL DAT_003c7e28 int

int func_003C7DEC(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 ** *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define auStack_14 ((undefined4 *)(albw_frame + 0xc))
  local_20 = &local_20;
  local_1c = 1;
  local_18 = *(int *)(DAT_003c7e28 + 0x10);
  iVar1 = func_003C97F4(&local_18,auStack_14,param_2,param_1,param_3,4,1,local_20,1);
  return iVar1;
}

