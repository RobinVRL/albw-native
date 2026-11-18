#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0058cfb8;
extern undefined4 *DAT_0058cfbc;
extern undefined4 DAT_0058cfc0;
extern uint *DAT_0058cfc4;
extern undefined4 *DAT_0058cfc8;
extern undefined4 DAT_0058cfcc;

// USA 0058CF40 <- EU 0058CF18 (Ghidra, non-matching)
// GLOBAL DAT_0058cfb8 uint *
// GLOBAL DAT_0058cfbc undefined4 *
// GLOBAL DAT_0058cfc0 undefined4
// GLOBAL DAT_0058cfc4 uint *
// GLOBAL DAT_0058cfc8 undefined4 *
// GLOBAL DAT_0058cfcc undefined4

undefined4 func_0058CF40(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0058cfb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cfb8), iVar1 != 0)) {
    *DAT_0058cfbc = DAT_0058cfc0;
  }
  if (DAT_0058cfbc != param_2) {
    if (((*DAT_0058cfc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cfc4), iVar1 != 0)) {
      *DAT_0058cfc8 = DAT_0058cfcc;
    }
    if (DAT_0058cfc8 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

