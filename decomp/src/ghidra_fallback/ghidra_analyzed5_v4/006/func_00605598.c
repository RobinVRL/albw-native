#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0024EA18(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605598;

// USA 00605598 <- EU 00605570 (Ghidra, non-matching)
// GLOBAL DAT_00605598 undefined4

undefined4 func_00605598(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605598);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0024EA18(puVar1,param_1);
  }
  return 0;
}

