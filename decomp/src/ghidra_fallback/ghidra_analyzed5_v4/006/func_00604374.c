#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CCA48(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604374;

// USA 00604374 <- EU 0060434C (Ghidra, non-matching)
// GLOBAL DAT_00604374 undefined4

undefined4 func_00604374(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604374);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CCA48(puVar1,param_1);
  }
  return 0;
}

