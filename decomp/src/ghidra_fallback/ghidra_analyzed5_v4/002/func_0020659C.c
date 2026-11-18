#include "ghidra_types.h"

extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);

// USA 0020659C <- EU 0020659C (Ghidra, non-matching)

void func_0020659C(int param_1)

{
  if (*(uint *)(param_1 + 0x914) <= *(uint *)(param_1 + 0x8bc)) {
    func_0065D4EC((undefined4 *)(param_1 + 0x8bc),8);
  }
  return;
}

