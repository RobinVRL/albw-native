#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005772b8;
extern undefined4 *DAT_005772bc;
extern undefined4 DAT_005772c0;
extern uint *DAT_005772c4;
extern undefined4 *DAT_005772c8;
extern undefined4 DAT_005772cc;
extern uint *DAT_005772d0;
extern undefined4 *DAT_005772d4;
extern undefined4 DAT_005772d8;
extern uint *DAT_005772dc;
extern undefined4 *DAT_005772e0;
extern undefined4 DAT_005772e4;
extern uint *DAT_005772e8;
extern undefined4 *DAT_005772ec;
extern undefined4 DAT_005772f0;

// USA 00577178 <- EU 00577150 (Ghidra, non-matching)
// GLOBAL DAT_005772b8 uint *
// GLOBAL DAT_005772bc undefined4 *
// GLOBAL DAT_005772c0 undefined4
// GLOBAL DAT_005772c4 uint *
// GLOBAL DAT_005772c8 undefined4 *
// GLOBAL DAT_005772cc undefined4
// GLOBAL DAT_005772d0 uint *
// GLOBAL DAT_005772d4 undefined4 *
// GLOBAL DAT_005772d8 undefined4
// GLOBAL DAT_005772dc uint *
// GLOBAL DAT_005772e0 undefined4 *
// GLOBAL DAT_005772e4 undefined4
// GLOBAL DAT_005772e8 uint *
// GLOBAL DAT_005772ec undefined4 *
// GLOBAL DAT_005772f0 undefined4

undefined4 func_00577178(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005772b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005772b8), iVar1 != 0)) {
    *DAT_005772bc = DAT_005772c0;
  }
  if (DAT_005772bc != param_2) {
    if (((*DAT_005772c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005772c4), iVar1 != 0)) {
      *DAT_005772c8 = DAT_005772cc;
    }
    if (DAT_005772c8 != param_2) {
      if (((*DAT_005772d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005772d0), iVar1 != 0)) {
        *DAT_005772d4 = DAT_005772d8;
      }
      if (DAT_005772d4 != param_2) {
        if (((*DAT_005772dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005772dc), iVar1 != 0))
        {
          *DAT_005772e0 = DAT_005772e4;
        }
        if (DAT_005772e0 != param_2) {
          if (((*DAT_005772e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005772e8), iVar1 != 0)
             ) {
            *DAT_005772ec = DAT_005772f0;
          }
          if (DAT_005772ec != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

