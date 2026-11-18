#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004DD410(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060ad24;

// USA 0060AD24 <- EU 0060ACFC (Ghidra, non-matching)
// GLOBAL DAT_0060ad24 undefined4

undefined4 func_0060AD24(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060ad24);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004DD410(puVar1,param_1);
  }
  return 0;
}

