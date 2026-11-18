#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0029F49C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606794;

// USA 00606794 <- EU 0060676C (Ghidra, non-matching)
// GLOBAL DAT_00606794 undefined4

undefined4 func_00606794(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606794);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0029F49C(puVar1,param_1);
  }
  return 0;
}

