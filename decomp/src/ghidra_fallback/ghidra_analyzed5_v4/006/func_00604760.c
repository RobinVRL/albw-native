#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00203918(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604760;

// USA 00604760 <- EU 00604738 (Ghidra, non-matching)
// GLOBAL DAT_00604760 undefined4

undefined4 func_00604760(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604760);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00203918(puVar1,param_1);
  }
  return 0;
}

