#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010DEB0(undefined4 *param_1);
extern undefined4 DAT_0010ef14;

// USA 0010EEE8 <- EU 0010EEE8 (Ghidra, non-matching)
// GLOBAL DAT_0010ef14 undefined4

undefined4 * func_0010EEE8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010DA7C(param_1,param_2,1);
  *puVar1 = DAT_0010ef14;
  puVar1[4] = 0;
  func_0010DEB0(puVar1 + 4);
  return puVar1;
}

