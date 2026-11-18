#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0027EC18(undefined4 *param_1,uint *param_2);

// USA 00605C6C <- EU 00605C44 (Ghidra, non-matching)

undefined4 func_00605C6C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x440);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0027EC18(puVar1,param_1);
  }
  return 0;
}

