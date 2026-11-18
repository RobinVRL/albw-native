#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b5f4;
extern undefined4 *DAT_0058b5f8;
extern undefined4 DAT_0058b5fc;
extern uint *DAT_0058b600;
extern undefined4 *DAT_0058b604;
extern undefined4 DAT_0058b608;
extern uint *DAT_0058b60c;
extern undefined4 *DAT_0058b610;
extern undefined4 DAT_0058b614;
extern uint *DAT_0058b618;
extern undefined4 *DAT_0058b61c;
extern undefined4 DAT_0058b620;

// USA 0058B4F8 <- EU 0058B4D0 (Ghidra, non-matching)
// GLOBAL DAT_0058b5f4 uint *
// GLOBAL DAT_0058b5f8 undefined4 *
// GLOBAL DAT_0058b5fc undefined4
// GLOBAL DAT_0058b600 uint *
// GLOBAL DAT_0058b604 undefined4 *
// GLOBAL DAT_0058b608 undefined4
// GLOBAL DAT_0058b60c uint *
// GLOBAL DAT_0058b610 undefined4 *
// GLOBAL DAT_0058b614 undefined4
// GLOBAL DAT_0058b618 uint *
// GLOBAL DAT_0058b61c undefined4 *
// GLOBAL DAT_0058b620 undefined4

undefined4 func_0058B4F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b5f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b5f4), iVar1 != 0)) {
    *DAT_0058b5f8 = DAT_0058b5fc;
  }
  if (DAT_0058b5f8 != param_2) {
    if (((*DAT_0058b600 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b600), iVar1 != 0)) {
      *DAT_0058b604 = DAT_0058b608;
    }
    if (DAT_0058b604 != param_2) {
      if (((*DAT_0058b60c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b60c), iVar1 != 0)) {
        *DAT_0058b610 = DAT_0058b614;
      }
      if (DAT_0058b610 != param_2) {
        if (((*DAT_0058b618 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b618), iVar1 != 0))
        {
          *DAT_0058b61c = DAT_0058b620;
        }
        if (DAT_0058b61c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

