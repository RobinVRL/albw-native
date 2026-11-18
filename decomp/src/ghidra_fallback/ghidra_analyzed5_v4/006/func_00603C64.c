#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BCE54(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603c64;

// USA 00603C64 <- EU 00603C3C (Ghidra, non-matching)
// GLOBAL DAT_00603c64 undefined4

undefined4 func_00603C64(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603c64);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001BCE54(puVar1,param_1);
  }
  return 0;
}

