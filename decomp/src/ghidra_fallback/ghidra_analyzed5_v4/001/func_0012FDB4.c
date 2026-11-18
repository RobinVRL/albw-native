#include "ghidra_types.h"

extern int func_0016BC34(int param_1,int param_2);
extern int *DAT_0012fdcc;

// USA 0012FDB4 <- EU 0012FDB4 (Ghidra, non-matching)
// GLOBAL DAT_0012fdcc int *

undefined4 func_0012FDB4(undefined4 param_1,int param_2)

{
  if (*DAT_0012fdcc != 0) {
    return func_0016BC34(*DAT_0012fdcc,param_2);
  }
  return 0;
}

