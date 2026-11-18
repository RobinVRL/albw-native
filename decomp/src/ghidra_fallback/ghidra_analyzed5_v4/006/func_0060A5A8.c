#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004C1E5C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a5a8;

// USA 0060A5A8 <- EU 0060A580 (Ghidra, non-matching)
// GLOBAL DAT_0060a5a8 undefined4

undefined4 func_0060A5A8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a5a8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004C1E5C(puVar1,param_1);
  }
  return 0;
}

