#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0023E834(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604da4;

// USA 00604DA4 <- EU 00604D7C (Ghidra, non-matching)
// GLOBAL DAT_00604da4 undefined4

undefined4 func_00604DA4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604da4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0023E834(puVar1,param_1);
  }
  return 0;
}

