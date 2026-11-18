#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559228;
extern undefined4 *DAT_0055922c;
extern undefined4 DAT_00559230;
extern uint *DAT_00559234;
extern undefined4 *DAT_00559238;
extern undefined4 DAT_0055923c;

// USA 005591B4 <- EU 0055918C (Ghidra, non-matching)
// GLOBAL DAT_00559228 uint *
// GLOBAL DAT_0055922c undefined4 *
// GLOBAL DAT_00559230 undefined4
// GLOBAL DAT_00559234 uint *
// GLOBAL DAT_00559238 undefined4 *
// GLOBAL DAT_0055923c undefined4

undefined4 func_005591B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559228 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559228), iVar1 != 0)) {
    *DAT_0055922c = DAT_00559230;
  }
  if (DAT_0055922c != param_2) {
    if (((*DAT_00559234 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559234), iVar1 != 0)) {
      *DAT_00559238 = DAT_0055923c;
    }
    if (DAT_00559238 != param_2) {
      return 0;
    }
  }
  return 1;
}

