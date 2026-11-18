#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0023DB44(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604d78;

// USA 00604D78 <- EU 00604D50 (Ghidra, non-matching)
// GLOBAL DAT_00604d78 undefined4

undefined4 func_00604D78(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604d78);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0023DB44(puVar1,param_1);
  }
  return 0;
}

