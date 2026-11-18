#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00184D18(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006035bc;

// USA 006035BC <- EU 00603594 (Ghidra, non-matching)
// GLOBAL DAT_006035bc undefined4

undefined4 func_006035BC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006035bc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00184D18(puVar1,param_1);
  }
  return 0;
}

