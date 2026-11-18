#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00574da0;
extern undefined4 *DAT_00574da4;
extern undefined4 DAT_00574da8;
extern uint *DAT_00574dac;
extern undefined4 *DAT_00574db0;
extern undefined4 DAT_00574db4;
extern uint *DAT_00574db8;
extern undefined4 *DAT_00574dbc;
extern undefined4 DAT_00574dc0;
extern uint *DAT_00574dc4;
extern undefined4 *DAT_00574dc8;
extern undefined4 DAT_00574dcc;
extern uint *DAT_00574dd0;
extern undefined4 *DAT_00574dd4;
extern undefined4 DAT_00574dd8;

// USA 00574C60 <- EU 00574C38 (Ghidra, non-matching)
// GLOBAL DAT_00574da0 uint *
// GLOBAL DAT_00574da4 undefined4 *
// GLOBAL DAT_00574da8 undefined4
// GLOBAL DAT_00574dac uint *
// GLOBAL DAT_00574db0 undefined4 *
// GLOBAL DAT_00574db4 undefined4
// GLOBAL DAT_00574db8 uint *
// GLOBAL DAT_00574dbc undefined4 *
// GLOBAL DAT_00574dc0 undefined4
// GLOBAL DAT_00574dc4 uint *
// GLOBAL DAT_00574dc8 undefined4 *
// GLOBAL DAT_00574dcc undefined4
// GLOBAL DAT_00574dd0 uint *
// GLOBAL DAT_00574dd4 undefined4 *
// GLOBAL DAT_00574dd8 undefined4

undefined4 func_00574C60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00574da0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574da0), iVar1 != 0)) {
    *DAT_00574da4 = DAT_00574da8;
  }
  if (DAT_00574da4 != param_2) {
    if (((*DAT_00574dac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574dac), iVar1 != 0)) {
      *DAT_00574db0 = DAT_00574db4;
    }
    if (DAT_00574db0 != param_2) {
      if (((*DAT_00574db8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574db8), iVar1 != 0)) {
        *DAT_00574dbc = DAT_00574dc0;
      }
      if (DAT_00574dbc != param_2) {
        if (((*DAT_00574dc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574dc4), iVar1 != 0))
        {
          *DAT_00574dc8 = DAT_00574dcc;
        }
        if (DAT_00574dc8 != param_2) {
          if (((*DAT_00574dd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574dd0), iVar1 != 0)
             ) {
            *DAT_00574dd4 = DAT_00574dd8;
          }
          if (DAT_00574dd4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

