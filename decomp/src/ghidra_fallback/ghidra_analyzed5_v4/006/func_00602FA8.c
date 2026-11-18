#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00148C18(undefined4 *param_1,uint *param_2);

// USA 00602FA8 <- EU 00602F80 (Ghidra, non-matching)

undefined4 func_00602FA8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x730);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00148C18(puVar1,param_1);
  }
  return 0;
}

