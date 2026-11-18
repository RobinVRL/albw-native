#include "ghidra_types.h"

extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);

// USA 00206E20 <- EU 00206E20 (Ghidra, non-matching)

void func_00206E20(int param_1)

{
  if (0x77 < *(uint *)(param_1 + 0x8bc)) {
    func_0065D4EC((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}

