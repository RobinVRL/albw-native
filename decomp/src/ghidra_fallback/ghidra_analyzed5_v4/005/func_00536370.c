#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_005363e8;
extern undefined4 *DAT_005363ec;
extern undefined4 DAT_005363f0;
extern uint *DAT_005363f4;
extern undefined4 *DAT_005363f8;
extern undefined4 DAT_005363fc;

// USA 00536370 <- EU 00536348 (Ghidra, non-matching)
// GLOBAL DAT_005363e8 uint *
// GLOBAL DAT_005363ec undefined4 *
// GLOBAL DAT_005363f0 undefined4
// GLOBAL DAT_005363f4 uint *
// GLOBAL DAT_005363f8 undefined4 *
// GLOBAL DAT_005363fc undefined4

undefined4 func_00536370(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005363e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005363e8), iVar1 != 0)) {
    *DAT_005363ec = DAT_005363f0;
  }
  if (DAT_005363ec != param_2) {
    if (((*DAT_005363f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005363f4), iVar1 != 0)) {
      *DAT_005363f8 = DAT_005363fc;
    }
    if (DAT_005363f8 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

