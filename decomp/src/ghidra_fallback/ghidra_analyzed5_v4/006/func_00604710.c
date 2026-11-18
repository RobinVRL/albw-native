#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E70EC(undefined4 *param_1,uint *param_2);

// USA 00604710 <- EU 006046E8 (Ghidra, non-matching)

undefined4 func_00604710(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xaf0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001E70EC(puVar1,param_1);
  }
  return 0;
}

