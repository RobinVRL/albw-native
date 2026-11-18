#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00584f78;
extern undefined4 *DAT_00584f7c;
extern undefined4 DAT_00584f80;
extern uint *DAT_00584f84;
extern undefined4 *DAT_00584f88;
extern undefined4 DAT_00584f8c;
extern uint *DAT_00584f90;
extern undefined4 *DAT_00584f94;
extern undefined4 DAT_00584f98;
extern uint *DAT_00584f9c;
extern undefined4 *DAT_00584fa0;
extern undefined4 DAT_00584fa4;

// USA 00584E7C <- EU 00584E54 (Ghidra, non-matching)
// GLOBAL DAT_00584f78 uint *
// GLOBAL DAT_00584f7c undefined4 *
// GLOBAL DAT_00584f80 undefined4
// GLOBAL DAT_00584f84 uint *
// GLOBAL DAT_00584f88 undefined4 *
// GLOBAL DAT_00584f8c undefined4
// GLOBAL DAT_00584f90 uint *
// GLOBAL DAT_00584f94 undefined4 *
// GLOBAL DAT_00584f98 undefined4
// GLOBAL DAT_00584f9c uint *
// GLOBAL DAT_00584fa0 undefined4 *
// GLOBAL DAT_00584fa4 undefined4

undefined4 func_00584E7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00584f78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584f78), iVar1 != 0)) {
    *DAT_00584f7c = DAT_00584f80;
  }
  if (DAT_00584f7c != param_2) {
    if (((*DAT_00584f84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584f84), iVar1 != 0)) {
      *DAT_00584f88 = DAT_00584f8c;
    }
    if (DAT_00584f88 != param_2) {
      if (((*DAT_00584f90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584f90), iVar1 != 0)) {
        *DAT_00584f94 = DAT_00584f98;
      }
      if (DAT_00584f94 != param_2) {
        if (((*DAT_00584f9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584f9c), iVar1 != 0))
        {
          *DAT_00584fa0 = DAT_00584fa4;
        }
        if (DAT_00584fa0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

