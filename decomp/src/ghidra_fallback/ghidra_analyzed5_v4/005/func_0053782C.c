#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537928;
extern undefined4 *DAT_0053792c;
extern undefined4 DAT_00537930;
extern uint *DAT_00537934;
extern undefined4 *DAT_00537938;
extern undefined4 DAT_0053793c;
extern uint *DAT_00537940;
extern undefined4 *DAT_00537944;
extern undefined4 DAT_00537948;
extern uint *DAT_0053794c;
extern undefined4 *DAT_00537950;
extern undefined4 DAT_00537954;

// USA 0053782C <- EU 00537804 (Ghidra, non-matching)
// GLOBAL DAT_00537928 uint *
// GLOBAL DAT_0053792c undefined4 *
// GLOBAL DAT_00537930 undefined4
// GLOBAL DAT_00537934 uint *
// GLOBAL DAT_00537938 undefined4 *
// GLOBAL DAT_0053793c undefined4
// GLOBAL DAT_00537940 uint *
// GLOBAL DAT_00537944 undefined4 *
// GLOBAL DAT_00537948 undefined4
// GLOBAL DAT_0053794c uint *
// GLOBAL DAT_00537950 undefined4 *
// GLOBAL DAT_00537954 undefined4

undefined4 func_0053782C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537928 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537928), iVar1 != 0)) {
    *DAT_0053792c = DAT_00537930;
  }
  if (DAT_0053792c != param_2) {
    if (((*DAT_00537934 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537934), iVar1 != 0)) {
      *DAT_00537938 = DAT_0053793c;
    }
    if (DAT_00537938 != param_2) {
      if (((*DAT_00537940 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537940), iVar1 != 0)) {
        *DAT_00537944 = DAT_00537948;
      }
      if (DAT_00537944 != param_2) {
        if (((*DAT_0053794c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053794c), iVar1 != 0))
        {
          *DAT_00537950 = DAT_00537954;
        }
        if (DAT_00537950 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

