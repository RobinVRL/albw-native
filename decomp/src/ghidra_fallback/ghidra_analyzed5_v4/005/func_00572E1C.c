#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00572f5c;
extern undefined4 *DAT_00572f60;
extern undefined4 DAT_00572f64;
extern uint *DAT_00572f68;
extern undefined4 *DAT_00572f6c;
extern undefined4 DAT_00572f70;
extern uint *DAT_00572f74;
extern undefined4 *DAT_00572f78;
extern undefined4 DAT_00572f7c;
extern uint *DAT_00572f80;
extern undefined4 *DAT_00572f84;
extern undefined4 DAT_00572f88;
extern uint *DAT_00572f8c;
extern undefined4 *DAT_00572f90;
extern undefined4 DAT_00572f94;

// USA 00572E1C <- EU 00572DF4 (Ghidra, non-matching)
// GLOBAL DAT_00572f5c uint *
// GLOBAL DAT_00572f60 undefined4 *
// GLOBAL DAT_00572f64 undefined4
// GLOBAL DAT_00572f68 uint *
// GLOBAL DAT_00572f6c undefined4 *
// GLOBAL DAT_00572f70 undefined4
// GLOBAL DAT_00572f74 uint *
// GLOBAL DAT_00572f78 undefined4 *
// GLOBAL DAT_00572f7c undefined4
// GLOBAL DAT_00572f80 uint *
// GLOBAL DAT_00572f84 undefined4 *
// GLOBAL DAT_00572f88 undefined4
// GLOBAL DAT_00572f8c uint *
// GLOBAL DAT_00572f90 undefined4 *
// GLOBAL DAT_00572f94 undefined4

undefined4 func_00572E1C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00572f5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572f5c), iVar1 != 0)) {
    *DAT_00572f60 = DAT_00572f64;
  }
  if (DAT_00572f60 != param_2) {
    if (((*DAT_00572f68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572f68), iVar1 != 0)) {
      *DAT_00572f6c = DAT_00572f70;
    }
    if (DAT_00572f6c != param_2) {
      if (((*DAT_00572f74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572f74), iVar1 != 0)) {
        *DAT_00572f78 = DAT_00572f7c;
      }
      if (DAT_00572f78 != param_2) {
        if (((*DAT_00572f80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572f80), iVar1 != 0))
        {
          *DAT_00572f84 = DAT_00572f88;
        }
        if (DAT_00572f84 != param_2) {
          if (((*DAT_00572f8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572f8c), iVar1 != 0)
             ) {
            *DAT_00572f90 = DAT_00572f94;
          }
          if (DAT_00572f90 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

