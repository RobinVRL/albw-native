#include "ghidra_types.h"


// USA 00255A4C <- EU 002559DC (Ghidra, function missing from the decomp table)

undefined4 func_00255A4C(int param_1)

{
  *(char *)(param_1 + 0xfc) = *(char *)(param_1 + 0xfc) + '\x01';
  *(char *)(param_1 + 0xfd) = *(char *)(param_1 + 0xfd) + '\x01';
  return 1;
}

