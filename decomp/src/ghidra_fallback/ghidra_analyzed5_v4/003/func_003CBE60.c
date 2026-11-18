#include "ghidra_types.h"


// USA 003CBE60 <- EU 003CBE3C (Ghidra, non-matching)

undefined1 * func_003CBE60(undefined1 *param_1)

{
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 2;
  return param_1;
}

