#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00194EF8(undefined4 *param_1,uint *param_2);

// USA 00603798 <- EU 00603770 (Ghidra, non-matching)

undefined4 func_00603798(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4d0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00194EF8(puVar1,param_1);
  }
  return 0;
}

