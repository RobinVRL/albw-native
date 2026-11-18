#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00193594(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603714;

// USA 00603714 <- EU 006036EC (Ghidra, non-matching)
// GLOBAL DAT_00603714 undefined4

undefined4 func_00603714(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603714);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00193594(puVar1,param_1);
  }
  return 0;
}

