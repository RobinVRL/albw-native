#include "ghidra_types.h"

extern int func_003C7E50(int param_1,undefined4 param_2);
extern int func_003D302C(undefined4 param_1,undefined4 param_2);
extern int *DAT_003cdee0;

// USA 003CDED0 <- EU 003CDEAC (Ghidra, non-matching)
// GLOBAL DAT_003cdee0 int *

undefined4 func_003CDED0(void)

{
  int iVar1;
  
  iVar1 = func_003C7E50(*DAT_003cdee0,0xf000000b);
  if ((iVar1 < 0) && (iVar1 < 0)) {
    return func_003D302C(iVar1,0x3cded0);
  }
  return 0;
}

