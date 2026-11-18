#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00575d98;
extern undefined4 *DAT_00575d9c;
extern undefined4 DAT_00575da0;
extern uint *DAT_00575da4;
extern undefined4 *DAT_00575da8;
extern undefined4 DAT_00575dac;
extern uint *DAT_00575db0;
extern undefined4 *DAT_00575db4;
extern undefined4 DAT_00575db8;
extern uint *DAT_00575dbc;
extern undefined4 *DAT_00575dc0;
extern undefined4 DAT_00575dc4;
extern uint *DAT_00575dc8;
extern undefined4 *DAT_00575dcc;
extern undefined4 DAT_00575dd0;

// USA 00575C58 <- EU 00575C30 (Ghidra, non-matching)
// GLOBAL DAT_00575d98 uint *
// GLOBAL DAT_00575d9c undefined4 *
// GLOBAL DAT_00575da0 undefined4
// GLOBAL DAT_00575da4 uint *
// GLOBAL DAT_00575da8 undefined4 *
// GLOBAL DAT_00575dac undefined4
// GLOBAL DAT_00575db0 uint *
// GLOBAL DAT_00575db4 undefined4 *
// GLOBAL DAT_00575db8 undefined4
// GLOBAL DAT_00575dbc uint *
// GLOBAL DAT_00575dc0 undefined4 *
// GLOBAL DAT_00575dc4 undefined4
// GLOBAL DAT_00575dc8 uint *
// GLOBAL DAT_00575dcc undefined4 *
// GLOBAL DAT_00575dd0 undefined4

undefined4 func_00575C58(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00575d98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575d98), iVar1 != 0)) {
    *DAT_00575d9c = DAT_00575da0;
  }
  if (DAT_00575d9c != param_2) {
    if (((*DAT_00575da4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575da4), iVar1 != 0)) {
      *DAT_00575da8 = DAT_00575dac;
    }
    if (DAT_00575da8 != param_2) {
      if (((*DAT_00575db0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575db0), iVar1 != 0)) {
        *DAT_00575db4 = DAT_00575db8;
      }
      if (DAT_00575db4 != param_2) {
        if (((*DAT_00575dbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575dbc), iVar1 != 0))
        {
          *DAT_00575dc0 = DAT_00575dc4;
        }
        if (DAT_00575dc0 != param_2) {
          if (((*DAT_00575dc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575dc8), iVar1 != 0)
             ) {
            *DAT_00575dcc = DAT_00575dd0;
          }
          if (DAT_00575dcc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

