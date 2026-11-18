#include "ghidra_types.h"

extern int func_002D5D3C(void *param_1);
extern undefined4 DAT_00366130;

// USA 0036613C <- EU 00366118 (Ghidra, non-matching)
// GLOBAL DAT_00366130 undefined4

undefined4 * func_0036613C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00366130;
  *(undefined1 *)(param_1[0xb] + 199) = 1;
  puVar1 = func_002D5D3C(param_1);
  return puVar1;
}

