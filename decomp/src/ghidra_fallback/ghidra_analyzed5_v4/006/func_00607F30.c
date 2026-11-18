#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003197C0(undefined4 *param_1,uint *param_2);

// USA 00607F30 <- EU 00607F08 (Ghidra, non-matching)

undefined4 func_00607F30(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x530);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003197C0(puVar1,param_1);
  }
  return 0;
}

