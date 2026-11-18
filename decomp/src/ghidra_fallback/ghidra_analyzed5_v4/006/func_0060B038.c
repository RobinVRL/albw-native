#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004FE5CC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b038;

// USA 0060B038 <- EU 0060B010 (Ghidra, non-matching)
// GLOBAL DAT_0060b038 undefined4

undefined4 func_0060B038(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b038);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004FE5CC(puVar1,param_1);
  }
  return 0;
}

