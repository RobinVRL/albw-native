#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002B4BA0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060692c;

// USA 0060692C <- EU 00606904 (Ghidra, non-matching)
// GLOBAL DAT_0060692c undefined4

undefined4 func_0060692C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060692c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002B4BA0(puVar1,param_1);
  }
  return 0;
}

