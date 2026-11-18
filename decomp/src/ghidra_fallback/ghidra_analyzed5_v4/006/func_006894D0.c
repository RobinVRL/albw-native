#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0025C060(undefined4 *param_1);

// USA 006894D0 <- EU 006894A8 (Ghidra, non-matching)

undefined4 * func_006894D0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010CF28(0x138,param_2,param_3);
  if ((puVar1 == (undefined4 *)0x0) || (puVar1 = func_0025C060(puVar1), puVar1 == (undefined4 *)0x0)
     ) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar1 + 4;
  }
  return puVar1;
}

