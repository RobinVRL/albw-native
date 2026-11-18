#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 *DAT_004909ec;

// USA 00490A04 <- EU 004909DC (Ghidra, non-matching)
// GLOBAL DAT_004909ec undefined4 *

undefined4 func_00490A04(undefined4 param_1)

{
  return func_0010CEE0(param_1,(int *)*DAT_004909ec,4);
}

