#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001D941C(undefined4 *param_1,uint *param_2);

// USA 006044EC <- EU 006044C4 (Ghidra, non-matching)

undefined4 func_006044EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4a0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001D941C(puVar1,param_1);
  }
  return 0;
}

