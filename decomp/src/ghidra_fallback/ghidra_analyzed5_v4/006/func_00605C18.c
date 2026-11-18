#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0027D79C(undefined4 *param_1,uint *param_2);

// USA 00605C18 <- EU 00605BF0 (Ghidra, non-matching)

undefined4 func_00605C18(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x5c0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0027D79C(puVar1,param_1);
  }
  return 0;
}

