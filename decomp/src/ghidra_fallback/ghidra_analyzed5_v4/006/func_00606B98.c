#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C7794(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606b98;

// USA 00606B98 <- EU 00606B70 (Ghidra, non-matching)
// GLOBAL DAT_00606b98 undefined4

undefined4 func_00606B98(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606b98);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002C7794(puVar1,param_1);
  }
  return 0;
}

