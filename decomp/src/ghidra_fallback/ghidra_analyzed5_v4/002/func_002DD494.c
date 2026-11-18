#include "ghidra_types.h"

extern int func_002D5D3C(void *param_1);
extern undefined4 DAT_002dd488;

// USA 002DD494 <- EU 002DD470 (Ghidra, non-matching)
// GLOBAL DAT_002dd488 undefined4

undefined4 * func_002DD494(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_002dd488;
  *(undefined1 *)(param_1[0x14] + 0x166) = 1;
  puVar1 = func_002D5D3C(param_1);
  return puVar1;
}

