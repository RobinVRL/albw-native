#include "ghidra_types.h"

extern int func_00104368(void);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);

// USA 0010140C <- EU 0010140C (Ghidra, non-matching)

undefined4 func_0010140C(void)

{
  uint uVar1;
  
  uVar1 = func_00104368();
  if (((int)uVar1 < 0) && ((int)uVar1 < 0)) {
    return func_0010AC24(uVar1,0x101424);
  }
  return 0;
}

