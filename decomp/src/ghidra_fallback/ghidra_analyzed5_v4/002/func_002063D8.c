#include "ghidra_types.h"

extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);

// USA 002063D8 <- EU 002063D8 (Ghidra, non-matching)

void func_002063D8(int param_1)

{
  if (99 < *(int *)(param_1 + 0x8bc)) {
    func_0065D4EC((undefined4 *)(param_1 + 0x8bc),10);
  }
  return;
}

