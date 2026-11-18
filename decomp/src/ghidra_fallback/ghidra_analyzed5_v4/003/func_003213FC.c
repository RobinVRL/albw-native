#include "ghidra_types.h"

extern int func_002973C4(int param_1,uint param_2);
extern int *DAT_003213e4;

// USA 003213FC <- EU 003213D8 (Ghidra, non-matching)
// GLOBAL DAT_003213e4 int *

undefined4 func_003213FC(undefined4 param_1,uint param_2)

{
  return func_002973C4(*DAT_003213e4,param_2);
}

