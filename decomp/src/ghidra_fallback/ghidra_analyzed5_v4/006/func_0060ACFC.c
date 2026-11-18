#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004DC1D8(undefined4 *param_1,uint *param_2);

// USA 0060ACFC <- EU 0060ACD4 (Ghidra, non-matching)

undefined4 func_0060ACFC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x9c0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004DC1D8(puVar1,param_1);
  }
  return 0;
}

