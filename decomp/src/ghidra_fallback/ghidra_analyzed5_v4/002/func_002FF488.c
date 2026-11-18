#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);

// USA 002FF488 <- EU 002FF464 (Ghidra, non-matching)

undefined4 * func_002FF488(undefined4 *param_1)

{
  func_00110490(param_1,0x6c);
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0xf] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  return param_1;
}

