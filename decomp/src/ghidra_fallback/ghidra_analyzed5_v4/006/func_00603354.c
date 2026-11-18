#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00175108(undefined4 *param_1,uint *param_2);

// USA 00603354 <- EU 0060332C (Ghidra, non-matching)

undefined4 func_00603354(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x440);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00175108(puVar1,param_1);
  }
  return 0;
}

