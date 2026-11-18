#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002BABF4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606958;

// USA 00606958 <- EU 00606930 (Ghidra, non-matching)
// GLOBAL DAT_00606958 undefined4

undefined4 func_00606958(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606958);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002BABF4(puVar1,param_1);
  }
  return 0;
}

