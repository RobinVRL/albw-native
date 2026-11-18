#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005485c4;
extern undefined4 *DAT_005485c8;
extern undefined4 DAT_005485cc;
extern uint *DAT_005485d0;
extern undefined4 *DAT_005485d4;
extern undefined4 DAT_005485d8;
extern uint *DAT_005485dc;
extern undefined4 *DAT_005485e0;
extern undefined4 DAT_005485e4;

// USA 0054850C <- EU 005484E4 (Ghidra, non-matching)
// GLOBAL DAT_005485c4 uint *
// GLOBAL DAT_005485c8 undefined4 *
// GLOBAL DAT_005485cc undefined4
// GLOBAL DAT_005485d0 uint *
// GLOBAL DAT_005485d4 undefined4 *
// GLOBAL DAT_005485d8 undefined4
// GLOBAL DAT_005485dc uint *
// GLOBAL DAT_005485e0 undefined4 *
// GLOBAL DAT_005485e4 undefined4

undefined4 func_0054850C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005485c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005485c4), iVar1 != 0)) {
    *DAT_005485c8 = DAT_005485cc;
  }
  if (DAT_005485c8 != param_2) {
    if (((*DAT_005485d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005485d0), iVar1 != 0)) {
      *DAT_005485d4 = DAT_005485d8;
    }
    if (DAT_005485d4 != param_2) {
      if (((*DAT_005485dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005485dc), iVar1 != 0)) {
        *DAT_005485e0 = DAT_005485e4;
      }
      if (DAT_005485e0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

