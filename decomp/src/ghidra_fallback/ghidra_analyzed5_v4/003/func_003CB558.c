#include "ghidra_types.h"


// USA 003CB558 <- EU 003CB534 (Ghidra, non-matching)

undefined4 * func_003CB558(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 3;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2f] = 0;
  return param_1;
}

