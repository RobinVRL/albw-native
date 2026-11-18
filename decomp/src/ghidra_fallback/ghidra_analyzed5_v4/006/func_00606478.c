#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002898AC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606478;

// USA 00606478 <- EU 00606450 (Ghidra, non-matching)
// GLOBAL DAT_00606478 undefined4

undefined4 func_00606478(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606478);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002898AC(puVar1,param_1);
  }
  return 0;
}

