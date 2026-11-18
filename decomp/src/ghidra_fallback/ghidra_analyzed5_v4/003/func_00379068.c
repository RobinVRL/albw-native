#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00379074;

// USA 00379068 <- EU 00379044 (Ghidra, non-matching)
// GLOBAL DAT_00379074 undefined4

undefined4 * func_00379068(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_00379074;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  return puVar1;
}

