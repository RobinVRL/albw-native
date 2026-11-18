#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002CA184(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606c18;

// USA 00606C18 <- EU 00606BF0 (Ghidra, non-matching)
// GLOBAL DAT_00606c18 undefined4

undefined4 func_00606C18(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606c18);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002CA184(puVar1,param_1);
  }
  return 0;
}

