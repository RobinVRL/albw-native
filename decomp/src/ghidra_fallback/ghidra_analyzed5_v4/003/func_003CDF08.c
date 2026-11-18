#include "ghidra_types.h"

extern int func_00102130(int param_1);
extern int func_003D302C(undefined4 param_1,undefined4 param_2);
extern int *DAT_003cdf14;

// USA 003CDF08 <- EU 003CDEE4 (Ghidra, non-matching)
// GLOBAL DAT_003cdf14 int *

undefined4 func_003CDF08(void)

{
  int iVar1;
  
  iVar1 = func_00102130(*DAT_003cdf14);
  if ((iVar1 < 0) && (iVar1 < 0)) {
    return func_003D302C(iVar1,0x3cdf04);
  }
  return 0;
}

