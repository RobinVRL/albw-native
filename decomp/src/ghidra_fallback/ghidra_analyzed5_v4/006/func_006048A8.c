#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00216CDC(undefined4 *param_1,uint *param_2);

// USA 006048A8 <- EU 00604880 (Ghidra, non-matching)

undefined4 func_006048A8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xb50);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00216CDC(puVar1,param_1);
  }
  return 0;
}

