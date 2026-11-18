#include "ghidra_types.h"

extern int func_0049481C(int param_1);
extern undefined4 DAT_0038f428;

// USA 0038F438 <- EU 0038F414 (Ghidra, non-matching)
// GLOBAL DAT_0038f428 undefined4

void * func_0038F438(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0049481C(param_1);
  *puVar1 = DAT_0038f428;
  return puVar1;
}

