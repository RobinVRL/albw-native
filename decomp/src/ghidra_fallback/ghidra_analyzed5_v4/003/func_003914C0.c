#include "ghidra_types.h"

extern int func_003617C8(int param_1,undefined1 param_2);
extern int *DAT_003914ac;

// USA 003914C0 <- EU 0039149C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003914ac int *

undefined4 func_003914C0(void)

{
  return func_003617C8(*DAT_003914ac,1);
}

