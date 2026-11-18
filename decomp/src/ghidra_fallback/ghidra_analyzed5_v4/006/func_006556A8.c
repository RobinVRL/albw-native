#include "ghidra_types.h"

extern int func_004FB024(int param_1);
extern undefined4 DAT_006556b4;

// USA 006556A8 <- EU 00655680 (Ghidra, non-matching)
// GLOBAL DAT_006556b4 undefined4

undefined4 func_006556A8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_006556b4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_006556b4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined2 *)(param_1 + 0x8e2) = 200;
  *(undefined2 *)(param_1 + 0x8e6) = 0;
  *(undefined1 *)(param_1 + 0x8ec) = 0;
  *(undefined1 *)(param_1 + 0x916) = 1;
  return func_004FB024(param_1);
}

