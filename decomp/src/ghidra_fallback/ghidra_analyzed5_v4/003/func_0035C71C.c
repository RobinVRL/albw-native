#include "ghidra_types.h"

extern int func_0066697C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0035c730;

// USA 0035C71C <- EU 0035C6F8 (Ghidra, non-matching)
// GLOBAL DAT_0035c730 undefined4

undefined4 func_0035C71C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0035c730;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0035c730;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  return func_0066697C((undefined4 *)(param_1 + 0x4f8),0);
}

