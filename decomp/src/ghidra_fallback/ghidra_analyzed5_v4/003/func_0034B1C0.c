#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_0034b1b0;

// USA 0034B1C0 <- EU 0034B19C (Ghidra, non-matching)
// GLOBAL DAT_0034b1b0 undefined4

undefined4 * func_0034B1C0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_0034b1b0;
  return puVar1;
}

