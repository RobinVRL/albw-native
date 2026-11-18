#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0021C400(undefined4 *param_1,uint *param_2);

// USA 00604A0C <- EU 006049E4 (Ghidra, non-matching)

undefined4 func_00604A0C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x1380);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0021C400(puVar1,param_1);
  }
  return 0;
}

