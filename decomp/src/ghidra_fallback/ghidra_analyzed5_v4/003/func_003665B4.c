#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_003665ac;

// USA 003665B4 <- EU 00366590 (Ghidra, non-matching)
// GLOBAL DAT_003665ac undefined4

undefined4 * func_003665B4(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_003665ac;
  puVar1[0x1c] = 0;
  return puVar1;
}

