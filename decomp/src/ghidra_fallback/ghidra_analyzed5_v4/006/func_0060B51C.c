#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_005127AC(undefined4 *param_1,uint *param_2);

// USA 0060B51C <- EU 0060B4F4 (Ghidra, non-matching)

undefined4 func_0060B51C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x550);
  if (puVar1 != (undefined4 *)0x0) {
    return func_005127AC(puVar1,param_1);
  }
  return 0;
}

