#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0024e754;

// USA 0024E744 <- EU 0024E744 (Ghidra, non-matching)
// GLOBAL DAT_0024e754 undefined *

undefined4 func_0024E744(int param_1)

{
  return func_00100118(param_1,DAT_0024e754,4,6);
}

