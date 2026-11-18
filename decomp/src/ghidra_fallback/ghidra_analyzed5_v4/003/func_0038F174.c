#include "ghidra_types.h"

extern int func_0035D69C(undefined4 *param_1,int param_2);
extern undefined4 DAT_0038f16c;

// USA 0038F174 <- EU 0038F150 (Ghidra, non-matching)
// GLOBAL DAT_0038f16c undefined4

undefined4 * func_0038F174(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = func_0035D69C(param_1,param_2);
  *puVar1 = DAT_0038f16c;
  puVar1[7] = param_2;
  return puVar1;
}

