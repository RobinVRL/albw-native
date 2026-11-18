#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053f050;
extern undefined4 *DAT_0053f054;
extern undefined4 DAT_0053f058;
extern uint *DAT_0053f05c;
extern undefined4 *DAT_0053f060;
extern undefined4 DAT_0053f064;

// USA 0053EFDC <- EU 0053EFB4 (Ghidra, non-matching)
// GLOBAL DAT_0053f050 uint *
// GLOBAL DAT_0053f054 undefined4 *
// GLOBAL DAT_0053f058 undefined4
// GLOBAL DAT_0053f05c uint *
// GLOBAL DAT_0053f060 undefined4 *
// GLOBAL DAT_0053f064 undefined4

undefined4 func_0053EFDC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053f050 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053f050), iVar1 != 0)) {
    *DAT_0053f054 = DAT_0053f058;
  }
  if (DAT_0053f054 != param_2) {
    if (((*DAT_0053f05c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053f05c), iVar1 != 0)) {
      *DAT_0053f060 = DAT_0053f064;
    }
    if (DAT_0053f060 != param_2) {
      return 0;
    }
  }
  return 1;
}

