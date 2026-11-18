#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00570bb0;
extern undefined4 *DAT_00570bb4;
extern undefined4 DAT_00570bb8;
extern uint *DAT_00570bbc;
extern undefined4 *DAT_00570bc0;
extern undefined4 DAT_00570bc4;

// USA 00570B3C <- EU 00570B14 (Ghidra, non-matching)
// GLOBAL DAT_00570bb0 uint *
// GLOBAL DAT_00570bb4 undefined4 *
// GLOBAL DAT_00570bb8 undefined4
// GLOBAL DAT_00570bbc uint *
// GLOBAL DAT_00570bc0 undefined4 *
// GLOBAL DAT_00570bc4 undefined4

undefined4 func_00570B3C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00570bb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570bb0), iVar1 != 0)) {
    *DAT_00570bb4 = DAT_00570bb8;
  }
  if (DAT_00570bb4 != param_2) {
    if (((*DAT_00570bbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570bbc), iVar1 != 0)) {
      *DAT_00570bc0 = DAT_00570bc4;
    }
    if (DAT_00570bc0 != param_2) {
      return 0;
    }
  }
  return 1;
}

