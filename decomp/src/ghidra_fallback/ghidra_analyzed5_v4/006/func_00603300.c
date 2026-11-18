#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001739B0(undefined4 *param_1,uint *param_2);

// USA 00603300 <- EU 006032D8 (Ghidra, non-matching)

undefined4 func_00603300(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4c0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001739B0(puVar1,param_1);
  }
  return 0;
}

