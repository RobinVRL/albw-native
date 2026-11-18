#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003A035C(undefined4 *param_1,uint *param_2);

// USA 00609F10 <- EU 00609EE8 (Ghidra, non-matching)

undefined4 func_00609F10(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x350);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003A035C(puVar1,param_1);
  }
  return 0;
}

