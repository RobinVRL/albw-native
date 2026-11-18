#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005442e8;
extern undefined4 *DAT_005442ec;
extern undefined4 DAT_005442f0;
extern uint *DAT_005442f4;
extern undefined4 *DAT_005442f8;
extern undefined4 DAT_005442fc;
extern uint *DAT_00544300;
extern undefined4 *DAT_00544304;
extern undefined4 DAT_00544308;
extern uint *DAT_0054430c;
extern undefined4 *DAT_00544310;
extern undefined4 DAT_00544314;

// USA 005441EC <- EU 005441C4 (Ghidra, non-matching)
// GLOBAL DAT_005442e8 uint *
// GLOBAL DAT_005442ec undefined4 *
// GLOBAL DAT_005442f0 undefined4
// GLOBAL DAT_005442f4 uint *
// GLOBAL DAT_005442f8 undefined4 *
// GLOBAL DAT_005442fc undefined4
// GLOBAL DAT_00544300 uint *
// GLOBAL DAT_00544304 undefined4 *
// GLOBAL DAT_00544308 undefined4
// GLOBAL DAT_0054430c uint *
// GLOBAL DAT_00544310 undefined4 *
// GLOBAL DAT_00544314 undefined4

undefined4 func_005441EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005442e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005442e8), iVar1 != 0)) {
    *DAT_005442ec = DAT_005442f0;
  }
  if (DAT_005442ec != param_2) {
    if (((*DAT_005442f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005442f4), iVar1 != 0)) {
      *DAT_005442f8 = DAT_005442fc;
    }
    if (DAT_005442f8 != param_2) {
      if (((*DAT_00544300 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544300), iVar1 != 0)) {
        *DAT_00544304 = DAT_00544308;
      }
      if (DAT_00544304 != param_2) {
        if (((*DAT_0054430c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054430c), iVar1 != 0))
        {
          *DAT_00544310 = DAT_00544314;
        }
        if (DAT_00544310 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

