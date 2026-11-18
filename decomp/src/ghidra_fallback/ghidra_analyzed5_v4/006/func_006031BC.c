#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001657FC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006031bc;

// USA 006031BC <- EU 00603194 (Ghidra, non-matching)
// GLOBAL DAT_006031bc undefined4

undefined4 func_006031BC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006031bc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001657FC(puVar1,param_1);
  }
  return 0;
}

