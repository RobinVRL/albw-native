#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0013AB5C(undefined4 *param_1,uint *param_2);

// USA 00602AF8 <- EU 00602AD0 (Ghidra, non-matching)

undefined4 func_00602AF8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x460);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0013AB5C(puVar1,param_1);
  }
  return 0;
}

