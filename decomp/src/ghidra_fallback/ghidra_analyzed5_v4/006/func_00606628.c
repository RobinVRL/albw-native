#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0029ABC0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606628;

// USA 00606628 <- EU 00606600 (Ghidra, non-matching)
// GLOBAL DAT_00606628 undefined4

undefined4 func_00606628(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606628);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0029ABC0(puVar1,param_1);
  }
  return 0;
}

