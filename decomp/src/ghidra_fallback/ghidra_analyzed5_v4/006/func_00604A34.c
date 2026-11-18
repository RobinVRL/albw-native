#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0021D408(undefined4 *param_1,uint *param_2);

// USA 00604A34 <- EU 00604A0C (Ghidra, non-matching)

undefined4 func_00604A34(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x930);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0021D408(puVar1,param_1);
  }
  return 0;
}

