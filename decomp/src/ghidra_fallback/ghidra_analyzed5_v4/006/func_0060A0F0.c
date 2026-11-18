#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003AD40C(undefined4 *param_1,uint *param_2);

// USA 0060A0F0 <- EU 0060A0C8 (Ghidra, non-matching)

undefined4 func_0060A0F0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4c0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003AD40C(puVar1,param_1);
  }
  return 0;
}

