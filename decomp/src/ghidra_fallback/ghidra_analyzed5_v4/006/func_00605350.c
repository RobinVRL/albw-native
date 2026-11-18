#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0024550C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605350;

// USA 00605350 <- EU 00605328 (Ghidra, non-matching)
// GLOBAL DAT_00605350 undefined4

undefined4 func_00605350(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605350);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0024550C(puVar1,param_1);
  }
  return 0;
}

