#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 DAT_0013f548;

// USA 0013F4F4 <- EU 0013F4F4 (Ghidra, non-matching)
// GLOBAL DAT_0013f548 undefined4

undefined4 func_0013F4F4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x521) = 1;
  uVar1 = DAT_0013f548;
  *(undefined1 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1 + 0x51d) = 0;
  func_004CF478(*(int *)(param_1 + 0x410),0);
  *(undefined1 *)(*(int *)(param_1 + 0x418) + 0x61) = 0;
  return func_00151148(*(int *)(param_1 + 0x414),0);
}

