#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0050C740(undefined4 *param_1,uint *param_2);

// USA 0060B2CC <- EU 0060B2A4 (Ghidra, non-matching)

undefined4 func_0060B2CC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4b0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0050C740(puVar1,param_1);
  }
  return 0;
}

