#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00505B6C(undefined4 *param_1,uint *param_2);

// USA 0060B184 <- EU 0060B15C (Ghidra, non-matching)

undefined4 func_0060B184(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x430);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00505B6C(puVar1,param_1);
  }
  return 0;
}

