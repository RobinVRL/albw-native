#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0049A188(undefined4 *param_1);

// USA 004964D4 <- EU 004964AC (Ghidra, non-matching)

undefined4 func_004964D4(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010CF28(0x394,param_2,4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0049A188(puVar1);
  }
  return 0;
}

