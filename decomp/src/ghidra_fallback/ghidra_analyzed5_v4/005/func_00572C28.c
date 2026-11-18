#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00572dac;
extern undefined4 *DAT_00572db0;
extern undefined4 DAT_00572db4;
extern uint *DAT_00572db8;
extern undefined4 *DAT_00572dbc;
extern undefined4 DAT_00572dc0;
extern uint *DAT_00572dc4;
extern undefined4 *DAT_00572dc8;
extern undefined4 DAT_00572dcc;
extern uint *DAT_00572dd0;
extern undefined4 *DAT_00572dd4;
extern undefined4 DAT_00572dd8;
extern uint *DAT_00572ddc;
extern undefined4 *DAT_00572de0;
extern undefined4 DAT_00572de4;
extern uint *DAT_00572de8;
extern undefined4 *DAT_00572dec;
extern undefined4 DAT_00572df0;

// USA 00572C28 <- EU 00572C00 (Ghidra, non-matching)
// GLOBAL DAT_00572dac uint *
// GLOBAL DAT_00572db0 undefined4 *
// GLOBAL DAT_00572db4 undefined4
// GLOBAL DAT_00572db8 uint *
// GLOBAL DAT_00572dbc undefined4 *
// GLOBAL DAT_00572dc0 undefined4
// GLOBAL DAT_00572dc4 uint *
// GLOBAL DAT_00572dc8 undefined4 *
// GLOBAL DAT_00572dcc undefined4
// GLOBAL DAT_00572dd0 uint *
// GLOBAL DAT_00572dd4 undefined4 *
// GLOBAL DAT_00572dd8 undefined4
// GLOBAL DAT_00572ddc uint *
// GLOBAL DAT_00572de0 undefined4 *
// GLOBAL DAT_00572de4 undefined4
// GLOBAL DAT_00572de8 uint *
// GLOBAL DAT_00572dec undefined4 *
// GLOBAL DAT_00572df0 undefined4

undefined4 func_00572C28(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00572dac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572dac), iVar1 != 0)) {
    *DAT_00572db0 = DAT_00572db4;
  }
  if (DAT_00572db0 != param_2) {
    if (((*DAT_00572db8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572db8), iVar1 != 0)) {
      *DAT_00572dbc = DAT_00572dc0;
    }
    if (DAT_00572dbc != param_2) {
      if (((*DAT_00572dc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572dc4), iVar1 != 0)) {
        *DAT_00572dc8 = DAT_00572dcc;
      }
      if (DAT_00572dc8 != param_2) {
        if (((*DAT_00572dd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572dd0), iVar1 != 0))
        {
          *DAT_00572dd4 = DAT_00572dd8;
        }
        if (DAT_00572dd4 != param_2) {
          if (((*DAT_00572ddc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572ddc), iVar1 != 0)
             ) {
            *DAT_00572de0 = DAT_00572de4;
          }
          if (DAT_00572de0 != param_2) {
            if (((*DAT_00572de8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00572de8), iVar1 != 0)) {
              *DAT_00572dec = DAT_00572df0;
            }
            if (DAT_00572dec != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

