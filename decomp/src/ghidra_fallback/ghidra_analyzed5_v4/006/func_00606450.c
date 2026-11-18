#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00288698(undefined4 *param_1,uint *param_2);

// USA 00606450 <- EU 00606428 (Ghidra, non-matching)

undefined4 * func_00606450(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x540);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = func_00288698(puVar1,param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

