#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0049E510(undefined4 *param_1,undefined4 *param_2);

// USA 0049CE98 <- EU 0049CE70 (Ghidra, non-matching)

undefined4 * func_0049CE98(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010CF28(0x180,(int *)param_1[4],4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = func_0049E510(puVar1,param_1);
    return puVar1;
  }
  return (undefined4 *)0;
}

