#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002E6A38(undefined4 *param_1,uint *param_2);

// USA 00607504 <- EU 006074DC (Ghidra, non-matching)

undefined4 func_00607504(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xa80);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002E6A38(puVar1,param_1);
  }
  return 0;
}

