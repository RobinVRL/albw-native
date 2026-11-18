#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00579ca0;
extern undefined4 *DAT_00579ca4;
extern undefined4 DAT_00579ca8;
extern uint *DAT_00579cac;
extern undefined4 *DAT_00579cb0;
extern undefined4 DAT_00579cb4;
extern uint *DAT_00579cb8;
extern undefined4 *DAT_00579cbc;
extern undefined4 DAT_00579cc0;

// USA 00579BE8 <- EU 00579BC0 (Ghidra, non-matching)
// GLOBAL DAT_00579ca0 uint *
// GLOBAL DAT_00579ca4 undefined4 *
// GLOBAL DAT_00579ca8 undefined4
// GLOBAL DAT_00579cac uint *
// GLOBAL DAT_00579cb0 undefined4 *
// GLOBAL DAT_00579cb4 undefined4
// GLOBAL DAT_00579cb8 uint *
// GLOBAL DAT_00579cbc undefined4 *
// GLOBAL DAT_00579cc0 undefined4

undefined4 func_00579BE8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00579ca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579ca0), iVar1 != 0)) {
    *DAT_00579ca4 = DAT_00579ca8;
  }
  if (DAT_00579ca4 != param_2) {
    if (((*DAT_00579cac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579cac), iVar1 != 0)) {
      *DAT_00579cb0 = DAT_00579cb4;
    }
    if (DAT_00579cb0 != param_2) {
      if (((*DAT_00579cb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579cb8), iVar1 != 0)) {
        *DAT_00579cbc = DAT_00579cc0;
      }
      if (DAT_00579cbc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

