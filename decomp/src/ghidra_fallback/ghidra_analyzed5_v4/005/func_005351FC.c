#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005352f8;
extern undefined4 *DAT_005352fc;
extern undefined4 DAT_00535300;
extern uint *DAT_00535304;
extern undefined4 *DAT_00535308;
extern undefined4 DAT_0053530c;
extern uint *DAT_00535310;
extern undefined4 *DAT_00535314;
extern undefined4 DAT_00535318;
extern uint *DAT_0053531c;
extern undefined4 *DAT_00535320;
extern undefined4 DAT_00535324;

// USA 005351FC <- EU 005351D4 (Ghidra, non-matching)
// GLOBAL DAT_005352f8 uint *
// GLOBAL DAT_005352fc undefined4 *
// GLOBAL DAT_00535300 undefined4
// GLOBAL DAT_00535304 uint *
// GLOBAL DAT_00535308 undefined4 *
// GLOBAL DAT_0053530c undefined4
// GLOBAL DAT_00535310 uint *
// GLOBAL DAT_00535314 undefined4 *
// GLOBAL DAT_00535318 undefined4
// GLOBAL DAT_0053531c uint *
// GLOBAL DAT_00535320 undefined4 *
// GLOBAL DAT_00535324 undefined4

undefined4 func_005351FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005352f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005352f8), iVar1 != 0)) {
    *DAT_005352fc = DAT_00535300;
  }
  if (DAT_005352fc != param_2) {
    if (((*DAT_00535304 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535304), iVar1 != 0)) {
      *DAT_00535308 = DAT_0053530c;
    }
    if (DAT_00535308 != param_2) {
      if (((*DAT_00535310 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535310), iVar1 != 0)) {
        *DAT_00535314 = DAT_00535318;
      }
      if (DAT_00535314 != param_2) {
        if (((*DAT_0053531c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053531c), iVar1 != 0))
        {
          *DAT_00535320 = DAT_00535324;
        }
        if (DAT_00535320 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

