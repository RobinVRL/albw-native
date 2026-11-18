#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern undefined4 DAT_00143620;
extern undefined4 DAT_00143624;
extern undefined4 DAT_00143628;

// USA 001435B4 <- EU 001435B4 (Ghidra, non-matching)
// GLOBAL DAT_00143620 undefined4
// GLOBAL DAT_00143624 undefined4
// GLOBAL DAT_00143628 undefined4

undefined4 func_001435B4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x411) = 1;
  *(undefined1 *)(param_1 + 0x414) = 1;
  uVar1 = DAT_00143620;
  *(undefined4 *)(param_1 + 0x4a0) = 0x1a4;
  *(undefined4 *)(param_1 + 0x4a4) = uVar1;
  uVar1 = DAT_00143624;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0x1e;
  *(undefined4 *)(param_1 + 0x4b0) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x46c) + 0x158) = DAT_00143628;
  return func_004CF478(*(int *)(param_1 + 0x46c),1);
}

