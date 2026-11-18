#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c3f4;
extern undefined4 *DAT_0054c3f8;
extern undefined4 DAT_0054c3fc;
extern uint *DAT_0054c400;
extern undefined4 *DAT_0054c404;
extern undefined4 DAT_0054c408;
extern uint *DAT_0054c40c;
extern undefined4 *DAT_0054c410;
extern undefined4 DAT_0054c414;

// USA 0054C33C <- EU 0054C314 (Ghidra, non-matching)
// GLOBAL DAT_0054c3f4 uint *
// GLOBAL DAT_0054c3f8 undefined4 *
// GLOBAL DAT_0054c3fc undefined4
// GLOBAL DAT_0054c400 uint *
// GLOBAL DAT_0054c404 undefined4 *
// GLOBAL DAT_0054c408 undefined4
// GLOBAL DAT_0054c40c uint *
// GLOBAL DAT_0054c410 undefined4 *
// GLOBAL DAT_0054c414 undefined4

undefined4 func_0054C33C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c3f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c3f4), iVar1 != 0)) {
    *DAT_0054c3f8 = DAT_0054c3fc;
  }
  if (DAT_0054c3f8 != param_2) {
    if (((*DAT_0054c400 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c400), iVar1 != 0)) {
      *DAT_0054c404 = DAT_0054c408;
    }
    if (DAT_0054c404 != param_2) {
      if (((*DAT_0054c40c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c40c), iVar1 != 0)) {
        *DAT_0054c410 = DAT_0054c414;
      }
      if (DAT_0054c410 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

