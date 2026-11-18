#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001732B4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006032d4;

// USA 006032D4 <- EU 006032AC (Ghidra, non-matching)
// GLOBAL DAT_006032d4 undefined4

undefined4 func_006032D4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006032d4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001732B4(puVar1,param_1);
  }
  return 0;
}

