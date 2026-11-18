#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001A4BF0(undefined4 *param_1,uint *param_2);

// USA 00603944 <- EU 0060391C (Ghidra, non-matching)

undefined4 func_00603944(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x900);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001A4BF0(puVar1,param_1);
  }
  return 0;
}

