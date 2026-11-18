#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0029A4F4(undefined4 *param_1,uint *param_2);

// USA 00606600 <- EU 006065D8 (Ghidra, non-matching)

undefined4 func_00606600(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x770);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0029A4F4(puVar1,param_1);
  }
  return 0;
}

