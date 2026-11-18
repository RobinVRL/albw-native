#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c82c;
extern undefined4 *DAT_0053c830;
extern undefined4 DAT_0053c834;
extern uint *DAT_0053c838;
extern undefined4 *DAT_0053c83c;
extern undefined4 DAT_0053c840;
extern uint *DAT_0053c844;
extern undefined4 *DAT_0053c848;
extern undefined4 DAT_0053c84c;
extern uint *DAT_0053c850;
extern undefined4 *DAT_0053c854;
extern undefined4 DAT_0053c858;

// USA 0053C730 <- EU 0053C708 (Ghidra, non-matching)
// GLOBAL DAT_0053c82c uint *
// GLOBAL DAT_0053c830 undefined4 *
// GLOBAL DAT_0053c834 undefined4
// GLOBAL DAT_0053c838 uint *
// GLOBAL DAT_0053c83c undefined4 *
// GLOBAL DAT_0053c840 undefined4
// GLOBAL DAT_0053c844 uint *
// GLOBAL DAT_0053c848 undefined4 *
// GLOBAL DAT_0053c84c undefined4
// GLOBAL DAT_0053c850 uint *
// GLOBAL DAT_0053c854 undefined4 *
// GLOBAL DAT_0053c858 undefined4

undefined4 func_0053C730(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c82c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c82c), iVar1 != 0)) {
    *DAT_0053c830 = DAT_0053c834;
  }
  if (DAT_0053c830 != param_2) {
    if (((*DAT_0053c838 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c838), iVar1 != 0)) {
      *DAT_0053c83c = DAT_0053c840;
    }
    if (DAT_0053c83c != param_2) {
      if (((*DAT_0053c844 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c844), iVar1 != 0)) {
        *DAT_0053c848 = DAT_0053c84c;
      }
      if (DAT_0053c848 != param_2) {
        if (((*DAT_0053c850 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c850), iVar1 != 0))
        {
          *DAT_0053c854 = DAT_0053c858;
        }
        if (DAT_0053c854 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

