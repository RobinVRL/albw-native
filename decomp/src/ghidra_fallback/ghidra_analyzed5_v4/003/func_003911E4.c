#include "ghidra_types.h"

extern int func_003617C8(int param_1,undefined1 param_2);
extern int *DAT_003911d0;

// USA 003911E4 <- EU 003911C0 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003911d0 int *

undefined4 func_003911E4(void)

{
  return func_003617C8(*DAT_003911d0,1);
}

