#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00198058(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603818;

// USA 00603818 <- EU 006037F0 (Ghidra, non-matching)
// GLOBAL DAT_00603818 undefined4

undefined4 func_00603818(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603818);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00198058(puVar1,param_1);
  }
  return 0;
}

