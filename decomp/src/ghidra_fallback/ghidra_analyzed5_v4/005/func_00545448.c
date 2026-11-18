#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_005454c0;
extern undefined4 *DAT_005454c4;
extern undefined4 DAT_005454c8;
extern uint *DAT_005454cc;
extern undefined4 *DAT_005454d0;
extern undefined4 DAT_005454d4;

// USA 00545448 <- EU 00545420 (Ghidra, non-matching)
// GLOBAL DAT_005454c0 uint *
// GLOBAL DAT_005454c4 undefined4 *
// GLOBAL DAT_005454c8 undefined4
// GLOBAL DAT_005454cc uint *
// GLOBAL DAT_005454d0 undefined4 *
// GLOBAL DAT_005454d4 undefined4

undefined4 func_00545448(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005454c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005454c0), iVar1 != 0)) {
    *DAT_005454c4 = DAT_005454c8;
  }
  if (DAT_005454c4 != param_2) {
    if (((*DAT_005454cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005454cc), iVar1 != 0)) {
      *DAT_005454d0 = DAT_005454d4;
    }
    if (DAT_005454d0 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

