#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0021219C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604810;

// USA 00604810 <- EU 006047E8 (Ghidra, non-matching)
// GLOBAL DAT_00604810 undefined4

undefined4 func_00604810(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604810);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0021219C(puVar1,param_1);
  }
  return 0;
}

