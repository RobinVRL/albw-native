#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C948C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606bec;

// USA 00606BEC <- EU 00606BC4 (Ghidra, non-matching)
// GLOBAL DAT_00606bec undefined4

undefined4 func_00606BEC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606bec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002C948C(puVar1,param_1);
  }
  return 0;
}

