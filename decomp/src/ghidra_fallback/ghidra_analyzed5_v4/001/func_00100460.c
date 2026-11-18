#include "ghidra_types.h"

extern int func_00100404(uint *param_1,undefined4 param_2,uint param_3,uint param_4);

// USA 00100460 <- EU 00100460 (Ghidra, function missing from the decomp table)

undefined4 func_00100460(uint *param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_3 + 7U & 0xfffffff8);
  return func_00100404(param_1,puVar1 + 2,*puVar1,puVar1[1]);
}

