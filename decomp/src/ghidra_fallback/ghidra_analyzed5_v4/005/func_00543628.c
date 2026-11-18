#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543724;
extern undefined4 *DAT_00543728;
extern undefined4 DAT_0054372c;
extern uint *DAT_00543730;
extern undefined4 *DAT_00543734;
extern undefined4 DAT_00543738;
extern uint *DAT_0054373c;
extern undefined4 *DAT_00543740;
extern undefined4 DAT_00543744;
extern uint *DAT_00543748;
extern undefined4 *DAT_0054374c;
extern undefined4 DAT_00543750;

// USA 00543628 <- EU 00543600 (Ghidra, non-matching)
// GLOBAL DAT_00543724 uint *
// GLOBAL DAT_00543728 undefined4 *
// GLOBAL DAT_0054372c undefined4
// GLOBAL DAT_00543730 uint *
// GLOBAL DAT_00543734 undefined4 *
// GLOBAL DAT_00543738 undefined4
// GLOBAL DAT_0054373c uint *
// GLOBAL DAT_00543740 undefined4 *
// GLOBAL DAT_00543744 undefined4
// GLOBAL DAT_00543748 uint *
// GLOBAL DAT_0054374c undefined4 *
// GLOBAL DAT_00543750 undefined4

undefined4 func_00543628(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543724 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543724), iVar1 != 0)) {
    *DAT_00543728 = DAT_0054372c;
  }
  if (DAT_00543728 != param_2) {
    if (((*DAT_00543730 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543730), iVar1 != 0)) {
      *DAT_00543734 = DAT_00543738;
    }
    if (DAT_00543734 != param_2) {
      if (((*DAT_0054373c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054373c), iVar1 != 0)) {
        *DAT_00543740 = DAT_00543744;
      }
      if (DAT_00543740 != param_2) {
        if (((*DAT_00543748 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543748), iVar1 != 0))
        {
          *DAT_0054374c = DAT_00543750;
        }
        if (DAT_0054374c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

