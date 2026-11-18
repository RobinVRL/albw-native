#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f840;
extern undefined4 *DAT_0057f844;
extern undefined4 DAT_0057f848;
extern uint *DAT_0057f84c;
extern undefined4 *DAT_0057f850;
extern undefined4 DAT_0057f854;

// USA 0057F7CC <- EU 0057F7A4 (Ghidra, non-matching)
// GLOBAL DAT_0057f840 uint *
// GLOBAL DAT_0057f844 undefined4 *
// GLOBAL DAT_0057f848 undefined4
// GLOBAL DAT_0057f84c uint *
// GLOBAL DAT_0057f850 undefined4 *
// GLOBAL DAT_0057f854 undefined4

undefined4 func_0057F7CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f840 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f840), iVar1 != 0)) {
    *DAT_0057f844 = DAT_0057f848;
  }
  if (DAT_0057f844 != param_2) {
    if (((*DAT_0057f84c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f84c), iVar1 != 0)) {
      *DAT_0057f850 = DAT_0057f854;
    }
    if (DAT_0057f850 != param_2) {
      return 0;
    }
  }
  return 1;
}

