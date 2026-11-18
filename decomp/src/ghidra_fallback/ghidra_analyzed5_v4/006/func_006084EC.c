#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00333984(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006084ec;

// USA 006084EC <- EU 006084C4 (Ghidra, non-matching)
// GLOBAL DAT_006084ec undefined4

undefined4 func_006084EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006084ec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00333984(puVar1,param_1);
  }
  return 0;
}

