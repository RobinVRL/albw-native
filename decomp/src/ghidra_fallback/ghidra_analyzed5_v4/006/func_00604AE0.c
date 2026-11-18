#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0022CC80(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604ae0;

// USA 00604AE0 <- EU 00604AB8 (Ghidra, non-matching)
// GLOBAL DAT_00604ae0 undefined4

undefined4 func_00604AE0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604ae0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0022CC80(puVar1,param_1);
  }
  return 0;
}

