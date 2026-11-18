#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005364e0;
extern undefined4 *DAT_005364e4;
extern undefined4 DAT_005364e8;
extern uint *DAT_005364ec;
extern undefined4 *DAT_005364f0;
extern undefined4 DAT_005364f4;
extern uint *DAT_005364f8;
extern undefined4 *DAT_005364fc;
extern undefined4 DAT_00536500;

// USA 00536428 <- EU 00536400 (Ghidra, non-matching)
// GLOBAL DAT_005364e0 uint *
// GLOBAL DAT_005364e4 undefined4 *
// GLOBAL DAT_005364e8 undefined4
// GLOBAL DAT_005364ec uint *
// GLOBAL DAT_005364f0 undefined4 *
// GLOBAL DAT_005364f4 undefined4
// GLOBAL DAT_005364f8 uint *
// GLOBAL DAT_005364fc undefined4 *
// GLOBAL DAT_00536500 undefined4

undefined4 func_00536428(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005364e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005364e0), iVar1 != 0)) {
    *DAT_005364e4 = DAT_005364e8;
  }
  if (DAT_005364e4 != param_2) {
    if (((*DAT_005364ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005364ec), iVar1 != 0)) {
      *DAT_005364f0 = DAT_005364f4;
    }
    if (DAT_005364f0 != param_2) {
      if (((*DAT_005364f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005364f8), iVar1 != 0)) {
        *DAT_005364fc = DAT_00536500;
      }
      if (DAT_005364fc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

