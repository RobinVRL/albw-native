#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c924;
extern undefined4 *DAT_0054c928;
extern undefined4 DAT_0054c92c;
extern uint *DAT_0054c930;
extern undefined4 *DAT_0054c934;
extern undefined4 DAT_0054c938;
extern uint *DAT_0054c93c;
extern undefined4 *DAT_0054c940;
extern undefined4 DAT_0054c944;

// USA 0054C86C <- EU 0054C844 (Ghidra, non-matching)
// GLOBAL DAT_0054c924 uint *
// GLOBAL DAT_0054c928 undefined4 *
// GLOBAL DAT_0054c92c undefined4
// GLOBAL DAT_0054c930 uint *
// GLOBAL DAT_0054c934 undefined4 *
// GLOBAL DAT_0054c938 undefined4
// GLOBAL DAT_0054c93c uint *
// GLOBAL DAT_0054c940 undefined4 *
// GLOBAL DAT_0054c944 undefined4

undefined4 func_0054C86C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c924 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c924), iVar1 != 0)) {
    *DAT_0054c928 = DAT_0054c92c;
  }
  if (DAT_0054c928 != param_2) {
    if (((*DAT_0054c930 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c930), iVar1 != 0)) {
      *DAT_0054c934 = DAT_0054c938;
    }
    if (DAT_0054c934 != param_2) {
      if (((*DAT_0054c93c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c93c), iVar1 != 0)) {
        *DAT_0054c940 = DAT_0054c944;
      }
      if (DAT_0054c940 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

