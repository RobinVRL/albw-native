#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00366114;

// USA 00366118 <- EU 003660F4 (Ghidra, non-matching)
// GLOBAL DAT_00366114 undefined4

undefined4 * func_00366118(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_00366114;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  *(undefined1 *)((int)puVar1 + 0x71) = 0;
  return puVar1;
}

