#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001A2054(undefined4 *param_1,uint *param_2);

// USA 006038F0 <- EU 006038C8 (Ghidra, non-matching)

undefined4 func_006038F0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x1240);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001A2054(puVar1,param_1);
  }
  return 0;
}

