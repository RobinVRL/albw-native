#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 *DAT_0049095c;

// USA 00490974 <- EU 0049094C (Ghidra, non-matching)
// GLOBAL DAT_0049095c undefined4 *

undefined4 func_00490974(undefined4 param_1)

{
  return func_0010CEE0(param_1,(int *)*DAT_0049095c,4);
}

