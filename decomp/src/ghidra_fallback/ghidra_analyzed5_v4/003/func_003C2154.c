#include "ghidra_types.h"


// USA 003C2154 <- EU 003C2130 (Ghidra, non-matching)

void func_003C2154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x1fc) = param_2;
  *(undefined4 *)(param_1 + 0x200) = param_3;
  *(undefined4 *)(param_1 + 0x204) = param_4;
  return;
}

