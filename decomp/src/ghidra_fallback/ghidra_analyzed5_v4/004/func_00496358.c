#include "ghidra_types.h"

extern int func_0049F3C4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0057D740(int *param_1);
extern undefined4 DAT_004963bc;
extern undefined4 *DAT_004963c0;

// USA 00496358 <- EU 00496330 (Ghidra, non-matching)
// GLOBAL DAT_004963bc undefined4
// GLOBAL DAT_004963c0 undefined4 *

undefined4 func_00496358(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 == 9) {
    uVar1 = param_1[0x5a] & 4;
  }
  else {
    if (param_2 != 0xc) {
      if ((param_2 == 0xf) && ((param_1[0x5a] & 2U) == 0)) {
        return 0;
      }
      goto code_r0x0049637c;
    }
    uVar1 = param_1[0x5a] & 1;
  }
  if (uVar1 == 0) {
    return 0;
  }
code_r0x0049637c:
  piVar2 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
  func_0057D740(piVar2);
  return func_0049F3C4(*DAT_004963c0,7,param_1 + 0x1d,0);
}

