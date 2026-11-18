#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552004;
extern undefined4 *DAT_00552008;
extern undefined4 DAT_0055200c;
extern uint *DAT_00552010;
extern undefined4 *DAT_00552014;
extern undefined4 DAT_00552018;
extern uint *DAT_0055201c;
extern undefined4 *DAT_00552020;
extern undefined4 DAT_00552024;

// USA 00551F4C <- EU 00551F24 (Ghidra, non-matching)
// GLOBAL DAT_00552004 uint *
// GLOBAL DAT_00552008 undefined4 *
// GLOBAL DAT_0055200c undefined4
// GLOBAL DAT_00552010 uint *
// GLOBAL DAT_00552014 undefined4 *
// GLOBAL DAT_00552018 undefined4
// GLOBAL DAT_0055201c uint *
// GLOBAL DAT_00552020 undefined4 *
// GLOBAL DAT_00552024 undefined4

undefined4 func_00551F4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552004 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552004), iVar1 != 0)) {
    *DAT_00552008 = DAT_0055200c;
  }
  if (DAT_00552008 != param_2) {
    if (((*DAT_00552010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552010), iVar1 != 0)) {
      *DAT_00552014 = DAT_00552018;
    }
    if (DAT_00552014 != param_2) {
      if (((*DAT_0055201c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055201c), iVar1 != 0)) {
        *DAT_00552020 = DAT_00552024;
      }
      if (DAT_00552020 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

