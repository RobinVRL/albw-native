#include "ghidra_types.h"

extern int func_0035D69C(undefined4 *param_1,int param_2);
extern undefined4 DAT_0036d6f4;

// USA 0036D6F4 <- EU 0036D6D0 (Ghidra, non-matching)
// GLOBAL DAT_0036d6f4 undefined4

undefined4 * func_0036D6F4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0035D69C(param_1,param_2);
  uVar1 = DAT_0036d6f4;
  puVar2[7] = 0;
  *puVar2 = uVar1;
  puVar2[8] = 0;
  puVar2[9] = 0;
  return puVar2;
}

