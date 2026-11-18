#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002836D0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605ffc;

// USA 00605FFC <- EU 00605FD4 (Ghidra, non-matching)
// GLOBAL DAT_00605ffc undefined4

undefined4 func_00605FFC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605ffc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002836D0(puVar1,param_1);
  }
  return 0;
}

