#include "ghidra_types.h"

extern int func_0010047C(uint *param_1,int param_2,uint param_3,uint param_4);

// USA 001004F0 <- EU 001004F0 (Ghidra, function missing from the decomp table)

undefined4 func_001004F0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_3 + 7U & 0xfffffff8);
  return func_0010047C(param_1,param_2,*puVar1,puVar1[1]);
}

