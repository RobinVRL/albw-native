#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002CBB94(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006071ec;

// USA 006071EC <- EU 006071C4 (Ghidra, non-matching)
// GLOBAL DAT_006071ec undefined4

undefined4 func_006071EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006071ec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002CBB94(puVar1,param_1);
  }
  return 0;
}

