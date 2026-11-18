#include "ghidra_types.h"

extern int func_0066B6C4(undefined4 *param_1,undefined1 param_2);

// USA 0050BE60 <- EU 0050BE3C (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_0050BE60(int param_1)

{
  if (0xef < *(int *)(param_1 + 0x44c)) {
    func_0066B6C4((undefined4 *)(param_1 + 0x44c),2);
  }
  return;
}

