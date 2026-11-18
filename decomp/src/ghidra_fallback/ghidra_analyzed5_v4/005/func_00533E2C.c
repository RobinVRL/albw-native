#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00533f6c;
extern undefined4 *DAT_00533f70;
extern undefined4 DAT_00533f74;
extern uint *DAT_00533f78;
extern undefined4 *DAT_00533f7c;
extern undefined4 DAT_00533f80;
extern uint *DAT_00533f84;
extern undefined4 *DAT_00533f88;
extern undefined4 DAT_00533f8c;
extern uint *DAT_00533f90;
extern undefined4 *DAT_00533f94;
extern undefined4 DAT_00533f98;
extern uint *DAT_00533f9c;
extern undefined4 *DAT_00533fa0;
extern undefined4 DAT_00533fa4;

// USA 00533E2C <- EU 00533E04 (Ghidra, non-matching)
// GLOBAL DAT_00533f6c uint *
// GLOBAL DAT_00533f70 undefined4 *
// GLOBAL DAT_00533f74 undefined4
// GLOBAL DAT_00533f78 uint *
// GLOBAL DAT_00533f7c undefined4 *
// GLOBAL DAT_00533f80 undefined4
// GLOBAL DAT_00533f84 uint *
// GLOBAL DAT_00533f88 undefined4 *
// GLOBAL DAT_00533f8c undefined4
// GLOBAL DAT_00533f90 uint *
// GLOBAL DAT_00533f94 undefined4 *
// GLOBAL DAT_00533f98 undefined4
// GLOBAL DAT_00533f9c uint *
// GLOBAL DAT_00533fa0 undefined4 *
// GLOBAL DAT_00533fa4 undefined4

undefined4 func_00533E2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533f6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533f6c), iVar1 != 0)) {
    *DAT_00533f70 = DAT_00533f74;
  }
  if (DAT_00533f70 != param_2) {
    if (((*DAT_00533f78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533f78), iVar1 != 0)) {
      *DAT_00533f7c = DAT_00533f80;
    }
    if (DAT_00533f7c != param_2) {
      if (((*DAT_00533f84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533f84), iVar1 != 0)) {
        *DAT_00533f88 = DAT_00533f8c;
      }
      if (DAT_00533f88 != param_2) {
        if (((*DAT_00533f90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533f90), iVar1 != 0))
        {
          *DAT_00533f94 = DAT_00533f98;
        }
        if (DAT_00533f94 != param_2) {
          if (((*DAT_00533f9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533f9c), iVar1 != 0)
             ) {
            *DAT_00533fa0 = DAT_00533fa4;
          }
          if (DAT_00533fa0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

