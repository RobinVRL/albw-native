#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d730;
extern undefined4 *DAT_0055d734;
extern undefined4 DAT_0055d738;
extern uint *DAT_0055d73c;
extern undefined4 *DAT_0055d740;
extern undefined4 DAT_0055d744;

// USA 0055D6BC <- EU 0055D694 (Ghidra, non-matching)
// GLOBAL DAT_0055d730 uint *
// GLOBAL DAT_0055d734 undefined4 *
// GLOBAL DAT_0055d738 undefined4
// GLOBAL DAT_0055d73c uint *
// GLOBAL DAT_0055d740 undefined4 *
// GLOBAL DAT_0055d744 undefined4

undefined4 func_0055D6BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d730 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d730), iVar1 != 0)) {
    *DAT_0055d734 = DAT_0055d738;
  }
  if (DAT_0055d734 != param_2) {
    if (((*DAT_0055d73c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d73c), iVar1 != 0)) {
      *DAT_0055d740 = DAT_0055d744;
    }
    if (DAT_0055d740 != param_2) {
      return 0;
    }
  }
  return 1;
}

