#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054d838;
extern undefined4 *DAT_0054d83c;
extern undefined4 DAT_0054d840;
extern uint *DAT_0054d844;
extern undefined4 *DAT_0054d848;
extern undefined4 DAT_0054d84c;
extern uint *DAT_0054d850;
extern undefined4 *DAT_0054d854;
extern undefined4 DAT_0054d858;

// USA 0054D780 <- EU 0054D758 (Ghidra, non-matching)
// GLOBAL DAT_0054d838 uint *
// GLOBAL DAT_0054d83c undefined4 *
// GLOBAL DAT_0054d840 undefined4
// GLOBAL DAT_0054d844 uint *
// GLOBAL DAT_0054d848 undefined4 *
// GLOBAL DAT_0054d84c undefined4
// GLOBAL DAT_0054d850 uint *
// GLOBAL DAT_0054d854 undefined4 *
// GLOBAL DAT_0054d858 undefined4

undefined4 func_0054D780(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054d838 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d838), iVar1 != 0)) {
    *DAT_0054d83c = DAT_0054d840;
  }
  if (DAT_0054d83c != param_2) {
    if (((*DAT_0054d844 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d844), iVar1 != 0)) {
      *DAT_0054d848 = DAT_0054d84c;
    }
    if (DAT_0054d848 != param_2) {
      if (((*DAT_0054d850 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d850), iVar1 != 0)) {
        *DAT_0054d854 = DAT_0054d858;
      }
      if (DAT_0054d854 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

