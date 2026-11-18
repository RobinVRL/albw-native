#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C4F30(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606b18;

// USA 00606B18 <- EU 00606AF0 (Ghidra, non-matching)
// GLOBAL DAT_00606b18 undefined4

undefined4 func_00606B18(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606b18);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002C4F30(puVar1,param_1);
  }
  return 0;
}

