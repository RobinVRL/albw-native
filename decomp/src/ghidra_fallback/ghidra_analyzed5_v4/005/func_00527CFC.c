#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527db4;
extern undefined4 *DAT_00527db8;
extern undefined4 DAT_00527dbc;
extern uint *DAT_00527dc0;
extern undefined4 *DAT_00527dc4;
extern undefined4 DAT_00527dc8;
extern uint *DAT_00527dcc;
extern undefined4 *DAT_00527dd0;
extern undefined4 DAT_00527dd4;

// USA 00527CFC <- EU 00527CD4 (Ghidra, non-matching)
// GLOBAL DAT_00527db4 uint *
// GLOBAL DAT_00527db8 undefined4 *
// GLOBAL DAT_00527dbc undefined4
// GLOBAL DAT_00527dc0 uint *
// GLOBAL DAT_00527dc4 undefined4 *
// GLOBAL DAT_00527dc8 undefined4
// GLOBAL DAT_00527dcc uint *
// GLOBAL DAT_00527dd0 undefined4 *
// GLOBAL DAT_00527dd4 undefined4

undefined4 func_00527CFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527db4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527db4), iVar1 != 0)) {
    *DAT_00527db8 = DAT_00527dbc;
  }
  if (DAT_00527db8 != param_2) {
    if (((*DAT_00527dc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527dc0), iVar1 != 0)) {
      *DAT_00527dc4 = DAT_00527dc8;
    }
    if (DAT_00527dc4 != param_2) {
      if (((*DAT_00527dcc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527dcc), iVar1 != 0)) {
        *DAT_00527dd0 = DAT_00527dd4;
      }
      if (DAT_00527dd0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

