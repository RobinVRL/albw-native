#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00570840;
extern undefined4 *DAT_00570844;
extern undefined4 DAT_00570848;
extern uint *DAT_0057084c;
extern undefined4 *DAT_00570850;
extern undefined4 DAT_00570854;

// USA 005707CC <- EU 005707A4 (Ghidra, non-matching)
// GLOBAL DAT_00570840 uint *
// GLOBAL DAT_00570844 undefined4 *
// GLOBAL DAT_00570848 undefined4
// GLOBAL DAT_0057084c uint *
// GLOBAL DAT_00570850 undefined4 *
// GLOBAL DAT_00570854 undefined4

undefined4 func_005707CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00570840 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570840), iVar1 != 0)) {
    *DAT_00570844 = DAT_00570848;
  }
  if (DAT_00570844 != param_2) {
    if (((*DAT_0057084c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057084c), iVar1 != 0)) {
      *DAT_00570850 = DAT_00570854;
    }
    if (DAT_00570850 != param_2) {
      return 0;
    }
  }
  return 1;
}

