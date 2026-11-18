#include "ghidra_types.h"

extern int func_00668424(undefined4 *param_1,undefined1 param_2);

// USA 00398E3C <- EU 00398E18 (Ghidra, non-matching)

undefined4 func_00398E3C(int param_1)

{
  *(undefined1 *)(param_1 + 0x3d) = 0;
  return func_00668424((undefined4 *)(param_1 + 0x10),0);
}

