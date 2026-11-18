#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001ACF30(undefined4 *param_1);
extern uint *DAT_0053a210;
extern undefined4 *DAT_0053a214;
extern undefined4 DAT_0053a218;

// USA 0053A1E4 <- EU 0053A1BC (Ghidra, non-matching)
// GLOBAL DAT_0053a210 uint *
// GLOBAL DAT_0053a214 undefined4 *
// GLOBAL DAT_0053a218 undefined4

void func_0053A1E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053a210 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a210), iVar1 != 0)) {
    *DAT_0053a214 = DAT_0053a218;
  }
  if (DAT_0053a214 != param_2) {
    func_001ACF30(param_2);
  }
  return;
}

