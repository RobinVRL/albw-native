#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00691d28;
extern undefined4 *DAT_00691d2c;
extern undefined4 DAT_00691d30;
extern uint *DAT_00691d34;
extern undefined4 *DAT_00691d38;
extern undefined4 DAT_00691d3c;

// USA 00691CB4 <- EU 00691C8C (Ghidra, non-matching)
// GLOBAL DAT_00691d28 uint *
// GLOBAL DAT_00691d2c undefined4 *
// GLOBAL DAT_00691d30 undefined4
// GLOBAL DAT_00691d34 uint *
// GLOBAL DAT_00691d38 undefined4 *
// GLOBAL DAT_00691d3c undefined4

undefined4 func_00691CB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00691d28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00691d28), iVar1 != 0)) {
    *DAT_00691d2c = DAT_00691d30;
  }
  if (DAT_00691d2c != param_2) {
    if (((*DAT_00691d34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00691d34), iVar1 != 0)) {
      *DAT_00691d38 = DAT_00691d3c;
    }
    if (DAT_00691d38 != param_2) {
      return 0;
    }
  }
  return 1;
}

