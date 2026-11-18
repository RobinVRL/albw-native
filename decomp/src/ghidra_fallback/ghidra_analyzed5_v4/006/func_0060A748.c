#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D1E9C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a748;

// USA 0060A748 <- EU 0060A720 (Ghidra, non-matching)
// GLOBAL DAT_0060a748 undefined4

undefined4 func_0060A748(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a748);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004D1E9C(puVar1,param_1);
  }
  return 0;
}

