#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0026AB80(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006058ec;

// USA 006058EC <- EU 006058C4 (Ghidra, non-matching)
// GLOBAL DAT_006058ec undefined4

undefined4 func_006058EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006058ec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0026AB80(puVar1,param_1);
  }
  return 0;
}

