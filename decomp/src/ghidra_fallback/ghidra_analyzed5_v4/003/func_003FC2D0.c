#include "ghidra_types.h"

extern int func_003E6760(undefined4 *param_1);

// USA 003FC2D0 <- EU 003FC2B0 (Ghidra, non-matching)

int func_003FC2D0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_003E6760(param_1);
  puVar1 = func_003E6760(puVar1 + 1);
  puVar1 = func_003E6760(puVar1 + 1);
  puVar1 = func_003E6760(puVar1 + 1);
  return (int)(puVar1 + -3);
}

