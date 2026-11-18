#include "ghidra_types.h"

extern int func_003010C4(void);

// USA 00100986 <- EU 00100986 (Ghidra, function missing from the decomp table)

void func_00100986(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_003010C4();
  *puVar1 = param_1;
  return;
}

