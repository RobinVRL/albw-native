#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0068c524;

// USA 0068C53C <- EU 0068C514 (Ghidra, non-matching)
// GLOBAL DAT_0068c524 undefined *

undefined4 func_0068C53C(int param_1)

{
  return func_00100118(param_1,DAT_0068c524,0xc,6);
}

