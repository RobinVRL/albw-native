#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00174264(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603328;

// USA 00603328 <- EU 00603300 (Ghidra, non-matching)
// GLOBAL DAT_00603328 undefined4

undefined4 func_00603328(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603328);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00174264(puVar1,param_1);
  }
  return 0;
}

