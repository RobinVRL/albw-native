#include "ghidra_types.h"

extern int func_004A20EC(undefined4 *param_1,undefined4 param_2,undefined4 param_3);

// USA 003529A0 <- EU 0035297C (Ghidra, non-matching)

undefined4 * func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = func_004A20EC(param_1,param_2,param_3);
  puVar1[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0;
  return puVar1;
}

