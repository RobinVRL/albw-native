#include "ghidra_types.h"

extern undefined4 DAT_00516148;

// USA 0051614C <- EU 00516124 (Ghidra, non-matching)
// GLOBAL DAT_00516148 undefined4

void func_0051614C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00516148;
  *(undefined4 *)(param_1 + 0x458) = 0x3c;
  *(undefined4 *)(param_1 + 0x45c) = uVar1;
  *(undefined4 *)(param_1 + 0x454) = 0;
  return;
}

