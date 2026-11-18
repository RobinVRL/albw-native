#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0049546C(undefined4 *param_1);

// USA 0049AE90 <- EU 0049AE68 (Ghidra, non-matching)

undefined4 func_0049AE90(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010CF28(0x4d4,param_2,4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0049546C(puVar1);
  }
  return 0;
}

