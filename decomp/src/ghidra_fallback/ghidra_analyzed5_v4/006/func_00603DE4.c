#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001C2280(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603de4;

// USA 00603DE4 <- EU 00603DBC (Ghidra, non-matching)
// GLOBAL DAT_00603de4 undefined4

undefined4 func_00603DE4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603de4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001C2280(puVar1,param_1);
  }
  return 0;
}

