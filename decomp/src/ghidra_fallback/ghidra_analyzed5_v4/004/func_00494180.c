#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 *DAT_00494168;

// USA 00494180 <- EU 00494158 (Ghidra, non-matching)
// GLOBAL DAT_00494168 undefined4 *

undefined4 func_00494180(undefined4 param_1)

{
  return func_0010CEE0(param_1,(int *)*DAT_00494168,4);
}

