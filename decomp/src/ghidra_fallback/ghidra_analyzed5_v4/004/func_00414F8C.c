#include "ghidra_types.h"


// USA 00414F8C <- EU 00414F6C (Ghidra, non-matching)

undefined4 * func_00414F8C(undefined4 *param_1)

{
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

