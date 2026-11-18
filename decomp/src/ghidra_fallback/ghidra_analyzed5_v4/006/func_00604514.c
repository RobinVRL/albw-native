#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001D9E98(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604514;

// USA 00604514 <- EU 006044EC (Ghidra, non-matching)
// GLOBAL DAT_00604514 undefined4

undefined4 func_00604514(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604514);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001D9E98(puVar1,param_1);
  }
  return 0;
}

