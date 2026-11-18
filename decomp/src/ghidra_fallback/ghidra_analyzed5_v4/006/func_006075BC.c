#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002FB544(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006075bc;

// USA 006075BC <- EU 00607594 (Ghidra, non-matching)
// GLOBAL DAT_006075bc undefined4

undefined4 func_006075BC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006075bc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002FB544(puVar1,param_1);
  }
  return 0;
}

