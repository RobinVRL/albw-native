#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002CAED0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606d50;

// USA 00606D50 <- EU 00606D28 (Ghidra, non-matching)
// GLOBAL DAT_00606d50 undefined4

undefined4 func_00606D50(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606d50);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002CAED0(puVar1,param_1);
  }
  return 0;
}

