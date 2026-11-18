#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00524dac;
extern undefined4 *DAT_00524db0;
extern undefined4 DAT_00524db4;
extern uint *DAT_00524db8;
extern undefined4 *DAT_00524dbc;
extern undefined4 DAT_00524dc0;
extern uint *DAT_00524dc4;
extern undefined4 *DAT_00524dc8;
extern undefined4 DAT_00524dcc;
extern uint *DAT_00524dd0;
extern undefined4 *DAT_00524dd4;
extern undefined4 DAT_00524dd8;
extern uint *DAT_00524ddc;
extern undefined4 *DAT_00524de0;
extern undefined4 DAT_00524de4;
extern uint *DAT_00524de8;
extern undefined4 *DAT_00524dec;
extern undefined4 DAT_00524df0;
extern uint *DAT_00524df4;
extern undefined4 *DAT_00524df8;
extern undefined4 DAT_00524dfc;

// USA 00524BE4 <- EU 00524BBC (Ghidra, non-matching)
// GLOBAL DAT_00524dac uint *
// GLOBAL DAT_00524db0 undefined4 *
// GLOBAL DAT_00524db4 undefined4
// GLOBAL DAT_00524db8 uint *
// GLOBAL DAT_00524dbc undefined4 *
// GLOBAL DAT_00524dc0 undefined4
// GLOBAL DAT_00524dc4 uint *
// GLOBAL DAT_00524dc8 undefined4 *
// GLOBAL DAT_00524dcc undefined4
// GLOBAL DAT_00524dd0 uint *
// GLOBAL DAT_00524dd4 undefined4 *
// GLOBAL DAT_00524dd8 undefined4
// GLOBAL DAT_00524ddc uint *
// GLOBAL DAT_00524de0 undefined4 *
// GLOBAL DAT_00524de4 undefined4
// GLOBAL DAT_00524de8 uint *
// GLOBAL DAT_00524dec undefined4 *
// GLOBAL DAT_00524df0 undefined4
// GLOBAL DAT_00524df4 uint *
// GLOBAL DAT_00524df8 undefined4 *
// GLOBAL DAT_00524dfc undefined4

undefined4 func_00524BE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00524dac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524dac), iVar1 != 0)) {
    *DAT_00524db0 = DAT_00524db4;
  }
  if (DAT_00524db0 != param_2) {
    if (((*DAT_00524db8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524db8), iVar1 != 0)) {
      *DAT_00524dbc = DAT_00524dc0;
    }
    if (DAT_00524dbc != param_2) {
      if (((*DAT_00524dc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524dc4), iVar1 != 0)) {
        *DAT_00524dc8 = DAT_00524dcc;
      }
      if (DAT_00524dc8 != param_2) {
        if (((*DAT_00524dd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524dd0), iVar1 != 0))
        {
          *DAT_00524dd4 = DAT_00524dd8;
        }
        if (DAT_00524dd4 != param_2) {
          if (((*DAT_00524ddc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524ddc), iVar1 != 0)
             ) {
            *DAT_00524de0 = DAT_00524de4;
          }
          if (DAT_00524de0 != param_2) {
            if (((*DAT_00524de8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00524de8), iVar1 != 0)) {
              *DAT_00524dec = DAT_00524df0;
            }
            if (DAT_00524dec != param_2) {
              if (((*DAT_00524df4 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00524df4), iVar1 != 0)) {
                *DAT_00524df8 = DAT_00524dfc;
              }
              if (DAT_00524df8 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

