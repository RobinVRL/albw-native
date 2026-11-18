#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00520d98;
extern undefined4 *DAT_00520d9c;
extern undefined4 DAT_00520da0;
extern uint *DAT_00520da4;
extern undefined4 *DAT_00520da8;
extern undefined4 DAT_00520dac;
extern uint *DAT_00520db0;
extern undefined4 *DAT_00520db4;
extern undefined4 DAT_00520db8;
extern uint *DAT_00520dbc;
extern undefined4 *DAT_00520dc0;
extern undefined4 DAT_00520dc4;

// USA 00520C9C <- EU 00520C74 (Ghidra, non-matching)
// GLOBAL DAT_00520d98 uint *
// GLOBAL DAT_00520d9c undefined4 *
// GLOBAL DAT_00520da0 undefined4
// GLOBAL DAT_00520da4 uint *
// GLOBAL DAT_00520da8 undefined4 *
// GLOBAL DAT_00520dac undefined4
// GLOBAL DAT_00520db0 uint *
// GLOBAL DAT_00520db4 undefined4 *
// GLOBAL DAT_00520db8 undefined4
// GLOBAL DAT_00520dbc uint *
// GLOBAL DAT_00520dc0 undefined4 *
// GLOBAL DAT_00520dc4 undefined4

undefined4 func_00520C9C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00520d98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520d98), iVar1 != 0)) {
    *DAT_00520d9c = DAT_00520da0;
  }
  if (DAT_00520d9c != param_2) {
    if (((*DAT_00520da4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520da4), iVar1 != 0)) {
      *DAT_00520da8 = DAT_00520dac;
    }
    if (DAT_00520da8 != param_2) {
      if (((*DAT_00520db0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520db0), iVar1 != 0)) {
        *DAT_00520db4 = DAT_00520db8;
      }
      if (DAT_00520db4 != param_2) {
        if (((*DAT_00520dbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520dbc), iVar1 != 0))
        {
          *DAT_00520dc0 = DAT_00520dc4;
        }
        if (DAT_00520dc0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

