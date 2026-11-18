#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0013E298(undefined4 *param_1,uint *param_2);

// USA 00602E98 <- EU 00602E70 (Ghidra, non-matching)

undefined4 func_00602E98(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x630);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0013E298(puVar1,param_1);
  }
  return 0;
}

