#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00550db0;
extern undefined4 *DAT_00550db4;
extern undefined4 DAT_00550db8;
extern uint *DAT_00550dbc;
extern undefined4 *DAT_00550dc0;
extern undefined4 DAT_00550dc4;
extern uint *DAT_00550dc8;
extern undefined4 *DAT_00550dcc;
extern undefined4 DAT_00550dd0;

// USA 00550CF8 <- EU 00550CD0 (Ghidra, non-matching)
// GLOBAL DAT_00550db0 uint *
// GLOBAL DAT_00550db4 undefined4 *
// GLOBAL DAT_00550db8 undefined4
// GLOBAL DAT_00550dbc uint *
// GLOBAL DAT_00550dc0 undefined4 *
// GLOBAL DAT_00550dc4 undefined4
// GLOBAL DAT_00550dc8 uint *
// GLOBAL DAT_00550dcc undefined4 *
// GLOBAL DAT_00550dd0 undefined4

undefined4 func_00550CF8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00550db0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550db0), iVar1 != 0)) {
    *DAT_00550db4 = DAT_00550db8;
  }
  if (DAT_00550db4 != param_2) {
    if (((*DAT_00550dbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550dbc), iVar1 != 0)) {
      *DAT_00550dc0 = DAT_00550dc4;
    }
    if (DAT_00550dc0 != param_2) {
      if (((*DAT_00550dc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550dc8), iVar1 != 0)) {
        *DAT_00550dcc = DAT_00550dd0;
      }
      if (DAT_00550dcc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

