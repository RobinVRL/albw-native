#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0019d3c4;

// USA 0019D3A4 <- EU 0019D3A4 (Ghidra, non-matching)
// GLOBAL DAT_0019d3c4 undefined *

int func_0019D3A4(int param_1)

{
  func_00100950(param_1,DAT_0019d3c4,0x2c,0x20);
  return param_1;
}

