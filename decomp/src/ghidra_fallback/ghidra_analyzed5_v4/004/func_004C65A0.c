#include "ghidra_types.h"

extern int func_003D0ECC(undefined4 *param_1,int param_2);

// USA 004C65A0 <- EU 004C6578 (Ghidra, non-matching)

undefined4 * func_004C65A0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_003D0ECC(param_1,1);
  *(undefined1 *)(puVar1 + 0x22f) = 0;
  return puVar1;
}

