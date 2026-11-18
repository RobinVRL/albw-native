#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00151B98(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602ffc;

// USA 00602FFC <- EU 00602FD4 (Ghidra, non-matching)
// GLOBAL DAT_00602ffc undefined4

undefined4 func_00602FFC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602ffc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00151B98(puVar1,param_1);
  }
  return 0;
}

