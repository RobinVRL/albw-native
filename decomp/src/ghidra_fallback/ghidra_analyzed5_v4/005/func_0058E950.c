#include "ghidra_types.h"

extern int func_004A1520();

// USA 0058E950 <- EU 0058E928 (Ghidra, non-matching)

undefined4 * func_0058E950(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_004A1520(param_1);
  return puVar1 + -1;
}

