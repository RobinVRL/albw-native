#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00252C84(undefined4 *param_1,uint *param_2);

// USA 00605648 <- EU 00605620 (Ghidra, non-matching)

undefined4 func_00605648(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x8d0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00252C84(puVar1,param_1);
  }
  return 0;
}

