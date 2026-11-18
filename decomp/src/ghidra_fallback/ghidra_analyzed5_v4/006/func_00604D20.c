#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0023CF98(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604d20;

// USA 00604D20 <- EU 00604CF8 (Ghidra, non-matching)
// GLOBAL DAT_00604d20 undefined4

undefined4 func_00604D20(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604d20);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0023CF98(puVar1,param_1);
  }
  return 0;
}

