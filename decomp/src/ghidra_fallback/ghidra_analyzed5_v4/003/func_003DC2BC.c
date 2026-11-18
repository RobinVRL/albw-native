#include "ghidra_types.h"


// USA 003DC2BC <- EU 003DC29C (Ghidra, non-matching)

undefined4 * func_003DC2BC(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0xff;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  return param_1;
}

