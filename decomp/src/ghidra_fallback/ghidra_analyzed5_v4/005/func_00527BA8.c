#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527ca4;
extern undefined4 *DAT_00527ca8;
extern undefined4 DAT_00527cac;
extern uint *DAT_00527cb0;
extern undefined4 *DAT_00527cb4;
extern undefined4 DAT_00527cb8;
extern uint *DAT_00527cbc;
extern undefined4 *DAT_00527cc0;
extern undefined4 DAT_00527cc4;
extern uint *DAT_00527cc8;
extern undefined4 *DAT_00527ccc;
extern undefined4 DAT_00527cd0;

// USA 00527BA8 <- EU 00527B80 (Ghidra, non-matching)
// GLOBAL DAT_00527ca4 uint *
// GLOBAL DAT_00527ca8 undefined4 *
// GLOBAL DAT_00527cac undefined4
// GLOBAL DAT_00527cb0 uint *
// GLOBAL DAT_00527cb4 undefined4 *
// GLOBAL DAT_00527cb8 undefined4
// GLOBAL DAT_00527cbc uint *
// GLOBAL DAT_00527cc0 undefined4 *
// GLOBAL DAT_00527cc4 undefined4
// GLOBAL DAT_00527cc8 uint *
// GLOBAL DAT_00527ccc undefined4 *
// GLOBAL DAT_00527cd0 undefined4

undefined4 func_00527BA8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527ca4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527ca4), iVar1 != 0)) {
    *DAT_00527ca8 = DAT_00527cac;
  }
  if (DAT_00527ca8 != param_2) {
    if (((*DAT_00527cb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527cb0), iVar1 != 0)) {
      *DAT_00527cb4 = DAT_00527cb8;
    }
    if (DAT_00527cb4 != param_2) {
      if (((*DAT_00527cbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527cbc), iVar1 != 0)) {
        *DAT_00527cc0 = DAT_00527cc4;
      }
      if (DAT_00527cc0 != param_2) {
        if (((*DAT_00527cc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527cc8), iVar1 != 0))
        {
          *DAT_00527ccc = DAT_00527cd0;
        }
        if (DAT_00527ccc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

