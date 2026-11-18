#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f9a8;
extern undefined4 *DAT_0057f9ac;
extern undefined4 DAT_0057f9b0;
extern uint *DAT_0057f9b4;
extern undefined4 *DAT_0057f9b8;
extern undefined4 DAT_0057f9bc;

// USA 0057F934 <- EU 0057F90C (Ghidra, non-matching)
// GLOBAL DAT_0057f9a8 uint *
// GLOBAL DAT_0057f9ac undefined4 *
// GLOBAL DAT_0057f9b0 undefined4
// GLOBAL DAT_0057f9b4 uint *
// GLOBAL DAT_0057f9b8 undefined4 *
// GLOBAL DAT_0057f9bc undefined4

undefined4 func_0057F934(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f9a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f9a8), iVar1 != 0)) {
    *DAT_0057f9ac = DAT_0057f9b0;
  }
  if (DAT_0057f9ac != param_2) {
    if (((*DAT_0057f9b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f9b4), iVar1 != 0)) {
      *DAT_0057f9b8 = DAT_0057f9bc;
    }
    if (DAT_0057f9b8 != param_2) {
      return 0;
    }
  }
  return 1;
}

