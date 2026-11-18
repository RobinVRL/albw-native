#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00347f00;

// USA 00347F08 <- EU 00347EE4 (Ghidra, non-matching)
// GLOBAL DAT_00347f00 undefined4

undefined4 * func_00347F08(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_00347f00;
  puVar1[0x1c] = 0;
  return puVar1;
}

