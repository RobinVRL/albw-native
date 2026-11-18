#include "ghidra_types.h"

extern int func_0065D630(undefined4 *param_1,undefined1 param_2);

// USA 00207E30 <- EU 00207E30 (Ghidra, non-matching)

void func_00207E30(int param_1)

{
  if (0x5a < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x26);
  }
  return;
}

