#include "ghidra_types.h"

extern int func_003E6A90(undefined4 *param_1);

// USA 003FE044 <- EU 003FE024 (Ghidra, non-matching)

undefined4 * func_003FE044(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = func_003E6A90(param_1 + 1);
  puVar1 = func_003E6A90(puVar1 + 4);
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return puVar1 + -5;
}

