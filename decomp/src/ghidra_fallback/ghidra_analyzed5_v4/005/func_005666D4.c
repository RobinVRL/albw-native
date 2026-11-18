#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...);

// USA 005666D4 <- EU 005666AC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

void func_005666D4(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_20 ((uint * *)(albw_frame + 0x20))
  local_34 = *(int *)(param_5 + 0xc) + param_4;
  local_38 = param_4;
  func_003FB500((uint *)local_20,&local_38,*(uint *)(param_5 + 0x4c),4);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  *param_3 = local_20[0];
  param_3[1] = uVar1;
  func_0010E3C4(local_20[0],*(uint **)(param_2 + 0x7c),*(int *)(param_2 + 0x80) + 7U >> 3);
  *(undefined1 *)(param_3 + 2) = 1;
  *param_1 = local_38;
  param_1[1] = 0;
  return;
}

