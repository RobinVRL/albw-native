#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054f70c;
extern undefined4 *DAT_0054f710;
extern undefined4 DAT_0054f714;
extern uint *DAT_0054f718;
extern undefined4 *DAT_0054f71c;
extern undefined4 DAT_0054f720;
extern uint *DAT_0054f724;
extern undefined4 *DAT_0054f728;
extern undefined4 DAT_0054f72c;
extern uint *DAT_0054f730;
extern undefined4 *DAT_0054f734;
extern undefined4 DAT_0054f738;

// USA 0054F610 <- EU 0054F5E8 (Ghidra, non-matching)
// GLOBAL DAT_0054f70c uint *
// GLOBAL DAT_0054f710 undefined4 *
// GLOBAL DAT_0054f714 undefined4
// GLOBAL DAT_0054f718 uint *
// GLOBAL DAT_0054f71c undefined4 *
// GLOBAL DAT_0054f720 undefined4
// GLOBAL DAT_0054f724 uint *
// GLOBAL DAT_0054f728 undefined4 *
// GLOBAL DAT_0054f72c undefined4
// GLOBAL DAT_0054f730 uint *
// GLOBAL DAT_0054f734 undefined4 *
// GLOBAL DAT_0054f738 undefined4

undefined4 func_0054F610(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054f70c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f70c), iVar1 != 0)) {
    *DAT_0054f710 = DAT_0054f714;
  }
  if (DAT_0054f710 != param_2) {
    if (((*DAT_0054f718 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f718), iVar1 != 0)) {
      *DAT_0054f71c = DAT_0054f720;
    }
    if (DAT_0054f71c != param_2) {
      if (((*DAT_0054f724 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f724), iVar1 != 0)) {
        *DAT_0054f728 = DAT_0054f72c;
      }
      if (DAT_0054f728 != param_2) {
        if (((*DAT_0054f730 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f730), iVar1 != 0))
        {
          *DAT_0054f734 = DAT_0054f738;
        }
        if (DAT_0054f734 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

