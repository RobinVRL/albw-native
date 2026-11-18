#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D9618(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060ab4c;

// USA 0060AB4C <- EU 0060AB24 (Ghidra, non-matching)
// GLOBAL DAT_0060ab4c undefined4

undefined4 func_0060AB4C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060ab4c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004D9618(puVar1,param_1);
  }
  return 0;
}

