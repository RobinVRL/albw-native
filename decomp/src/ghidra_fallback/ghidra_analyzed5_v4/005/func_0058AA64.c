#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058ab1c;
extern undefined4 *DAT_0058ab20;
extern undefined4 DAT_0058ab24;
extern uint *DAT_0058ab28;
extern undefined4 *DAT_0058ab2c;
extern undefined4 DAT_0058ab30;
extern uint *DAT_0058ab34;
extern undefined4 *DAT_0058ab38;
extern undefined4 DAT_0058ab3c;

// USA 0058AA64 <- EU 0058AA3C (Ghidra, non-matching)
// GLOBAL DAT_0058ab1c uint *
// GLOBAL DAT_0058ab20 undefined4 *
// GLOBAL DAT_0058ab24 undefined4
// GLOBAL DAT_0058ab28 uint *
// GLOBAL DAT_0058ab2c undefined4 *
// GLOBAL DAT_0058ab30 undefined4
// GLOBAL DAT_0058ab34 uint *
// GLOBAL DAT_0058ab38 undefined4 *
// GLOBAL DAT_0058ab3c undefined4

undefined4 func_0058AA64(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058ab1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ab1c), iVar1 != 0)) {
    *DAT_0058ab20 = DAT_0058ab24;
  }
  if (DAT_0058ab20 != param_2) {
    if (((*DAT_0058ab28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ab28), iVar1 != 0)) {
      *DAT_0058ab2c = DAT_0058ab30;
    }
    if (DAT_0058ab2c != param_2) {
      if (((*DAT_0058ab34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ab34), iVar1 != 0)) {
        *DAT_0058ab38 = DAT_0058ab3c;
      }
      if (DAT_0058ab38 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

