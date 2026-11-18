#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00556718;
extern undefined4 *DAT_0055671c;
extern undefined4 DAT_00556720;
extern uint *DAT_00556724;
extern undefined4 *DAT_00556728;
extern undefined4 DAT_0055672c;
extern uint *DAT_00556730;
extern undefined4 *DAT_00556734;
extern undefined4 DAT_00556738;

// USA 00556660 <- EU 00556638 (Ghidra, non-matching)
// GLOBAL DAT_00556718 uint *
// GLOBAL DAT_0055671c undefined4 *
// GLOBAL DAT_00556720 undefined4
// GLOBAL DAT_00556724 uint *
// GLOBAL DAT_00556728 undefined4 *
// GLOBAL DAT_0055672c undefined4
// GLOBAL DAT_00556730 uint *
// GLOBAL DAT_00556734 undefined4 *
// GLOBAL DAT_00556738 undefined4

undefined4 func_00556660(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00556718 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556718), iVar1 != 0)) {
    *DAT_0055671c = DAT_00556720;
  }
  if (DAT_0055671c != param_2) {
    if (((*DAT_00556724 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556724), iVar1 != 0)) {
      *DAT_00556728 = DAT_0055672c;
    }
    if (DAT_00556728 != param_2) {
      if (((*DAT_00556730 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556730), iVar1 != 0)) {
        *DAT_00556734 = DAT_00556738;
      }
      if (DAT_00556734 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

