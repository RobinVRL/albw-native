#include "ghidra_types.h"

extern int func_0066697C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0035c7ec;

// USA 0035C7B0 <- EU 0035C78C (Ghidra, non-matching)
// GLOBAL DAT_0035c7ec undefined4

undefined4 func_0035C7B0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x4cd) = 1;
  *(undefined1 *)(param_1 + 0x4cc) = 1;
  uVar1 = DAT_0035c7ec;
  if (*(uint *)(param_1 + 0x530) <= *(uint *)(param_1 + 0x52c)) {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_0035c7ec;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
    return func_0066697C((undefined4 *)(param_1 + 0x4f8),5);
  }
  *(uint *)(param_1 + 0x52c) = *(uint *)(param_1 + 0x52c) + 1;
  return 0;
}

