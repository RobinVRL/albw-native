#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0026D488(undefined4 *param_1,uint *param_2);

// USA 00605918 <- EU 006058F0 (Ghidra, non-matching)

undefined4 func_00605918(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x930);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0026D488(puVar1,param_1);
  }
  return 0;
}

