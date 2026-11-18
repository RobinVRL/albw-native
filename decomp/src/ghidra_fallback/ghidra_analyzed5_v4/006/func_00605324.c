#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002444CC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605324;

// USA 00605324 <- EU 006052FC (Ghidra, non-matching)
// GLOBAL DAT_00605324 undefined4

undefined4 func_00605324(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605324);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002444CC(puVar1,param_1);
  }
  return 0;
}

