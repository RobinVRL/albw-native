#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00196914(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006037c0;

// USA 006037C0 <- EU 00603798 (Ghidra, non-matching)
// GLOBAL DAT_006037c0 undefined4

undefined4 func_006037C0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006037c0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00196914(puVar1,param_1);
  }
  return 0;
}

