#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0038923C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609898;

// USA 00609898 <- EU 00609870 (Ghidra, non-matching)
// GLOBAL DAT_00609898 undefined4

undefined4 func_00609898(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609898);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0038923C(puVar1,param_1);
  }
  return 0;
}

