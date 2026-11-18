#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0039433C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609ad8;

// USA 00609AD8 <- EU 00609AB0 (Ghidra, non-matching)
// GLOBAL DAT_00609ad8 undefined4

undefined4 func_00609AD8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609ad8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0039433C(puVar1,param_1);
  }
  return 0;
}

