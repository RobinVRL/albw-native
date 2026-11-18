#include "ghidra_types.h"

extern int func_0049F3C4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0057D740(int *param_1);
extern undefined4 DAT_004963bc;
extern undefined4 *DAT_004963c0;

// USA 004963A8 <- EU 00496380 (Ghidra, non-matching)
// GLOBAL DAT_004963bc undefined4
// GLOBAL DAT_004963c0 undefined4 *

undefined4 func_004963A8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
  func_0057D740(piVar1);
  return func_0049F3C4(*DAT_004963c0,7,param_1 + 0x1d,0);
}

