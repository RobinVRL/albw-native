#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int *DAT_004b9608;

// USA 004B961C <- EU 004B95F4 (Ghidra, non-matching)
// GLOBAL DAT_004b9608 int *

undefined4 func_004B961C(int param_1)

{
  return func_0016656C(*DAT_004b9608,param_1);
}

