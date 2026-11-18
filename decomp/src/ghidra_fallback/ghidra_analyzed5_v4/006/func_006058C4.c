#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00266208(undefined4 *param_1,uint *param_2);

// USA 006058C4 <- EU 0060589C (Ghidra, non-matching)

undefined4 func_006058C4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00266208(puVar1,param_1);
  }
  return 0;
}

