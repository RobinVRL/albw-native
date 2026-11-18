#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00197614(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006037ec;

// USA 006037EC <- EU 006037C4 (Ghidra, non-matching)
// GLOBAL DAT_006037ec undefined4

undefined4 func_006037EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006037ec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00197614(puVar1,param_1);
  }
  return 0;
}

