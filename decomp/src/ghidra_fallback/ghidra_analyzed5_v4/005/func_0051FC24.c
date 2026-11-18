#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051fdec;
extern undefined4 *DAT_0051fdf0;
extern undefined4 DAT_0051fdf4;
extern uint *DAT_0051fdf8;
extern undefined4 *DAT_0051fdfc;
extern undefined4 DAT_0051fe00;
extern uint *DAT_0051fe04;
extern undefined4 *DAT_0051fe08;
extern undefined4 DAT_0051fe0c;
extern uint *DAT_0051fe10;
extern undefined4 *DAT_0051fe14;
extern undefined4 DAT_0051fe18;
extern uint *DAT_0051fe1c;
extern undefined4 *DAT_0051fe20;
extern undefined4 DAT_0051fe24;
extern uint *DAT_0051fe28;
extern undefined4 *DAT_0051fe2c;
extern undefined4 DAT_0051fe30;
extern uint *DAT_0051fe34;
extern undefined4 *DAT_0051fe38;
extern undefined4 DAT_0051fe3c;

// USA 0051FC24 <- EU 0051FBFC (Ghidra, non-matching)
// GLOBAL DAT_0051fdec uint *
// GLOBAL DAT_0051fdf0 undefined4 *
// GLOBAL DAT_0051fdf4 undefined4
// GLOBAL DAT_0051fdf8 uint *
// GLOBAL DAT_0051fdfc undefined4 *
// GLOBAL DAT_0051fe00 undefined4
// GLOBAL DAT_0051fe04 uint *
// GLOBAL DAT_0051fe08 undefined4 *
// GLOBAL DAT_0051fe0c undefined4
// GLOBAL DAT_0051fe10 uint *
// GLOBAL DAT_0051fe14 undefined4 *
// GLOBAL DAT_0051fe18 undefined4
// GLOBAL DAT_0051fe1c uint *
// GLOBAL DAT_0051fe20 undefined4 *
// GLOBAL DAT_0051fe24 undefined4
// GLOBAL DAT_0051fe28 uint *
// GLOBAL DAT_0051fe2c undefined4 *
// GLOBAL DAT_0051fe30 undefined4
// GLOBAL DAT_0051fe34 uint *
// GLOBAL DAT_0051fe38 undefined4 *
// GLOBAL DAT_0051fe3c undefined4

undefined4 func_0051FC24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051fdec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fdec), iVar1 != 0)) {
    *DAT_0051fdf0 = DAT_0051fdf4;
  }
  if (DAT_0051fdf0 != param_2) {
    if (((*DAT_0051fdf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fdf8), iVar1 != 0)) {
      *DAT_0051fdfc = DAT_0051fe00;
    }
    if (DAT_0051fdfc != param_2) {
      if (((*DAT_0051fe04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fe04), iVar1 != 0)) {
        *DAT_0051fe08 = DAT_0051fe0c;
      }
      if (DAT_0051fe08 != param_2) {
        if (((*DAT_0051fe10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fe10), iVar1 != 0))
        {
          *DAT_0051fe14 = DAT_0051fe18;
        }
        if (DAT_0051fe14 != param_2) {
          if (((*DAT_0051fe1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fe1c), iVar1 != 0)
             ) {
            *DAT_0051fe20 = DAT_0051fe24;
          }
          if (DAT_0051fe20 != param_2) {
            if (((*DAT_0051fe28 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0051fe28), iVar1 != 0)) {
              *DAT_0051fe2c = DAT_0051fe30;
            }
            if (DAT_0051fe2c != param_2) {
              if (((*DAT_0051fe34 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0051fe34), iVar1 != 0)) {
                *DAT_0051fe38 = DAT_0051fe3c;
              }
              if (DAT_0051fe38 != param_2) {
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

