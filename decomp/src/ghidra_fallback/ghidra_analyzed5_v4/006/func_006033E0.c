#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0017D61C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006033e0;

// USA 006033E0 <- EU 006033B8 (Ghidra, non-matching)
// GLOBAL DAT_006033e0 undefined4

undefined4 func_006033E0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006033e0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0017D61C(puVar1,param_1);
  }
  return 0;
}

