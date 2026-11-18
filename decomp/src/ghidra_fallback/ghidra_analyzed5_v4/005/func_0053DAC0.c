#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053dc88;
extern undefined4 *DAT_0053dc8c;
extern undefined4 DAT_0053dc90;
extern uint *DAT_0053dc94;
extern undefined4 *DAT_0053dc98;
extern undefined4 DAT_0053dc9c;
extern uint *DAT_0053dca0;
extern undefined4 *DAT_0053dca4;
extern undefined4 DAT_0053dca8;
extern uint *DAT_0053dcac;
extern undefined4 *DAT_0053dcb0;
extern undefined4 DAT_0053dcb4;
extern uint *DAT_0053dcb8;
extern undefined4 *DAT_0053dcbc;
extern undefined4 DAT_0053dcc0;
extern uint *DAT_0053dcc4;
extern undefined4 *DAT_0053dcc8;
extern undefined4 DAT_0053dccc;
extern uint *DAT_0053dcd0;
extern undefined4 *DAT_0053dcd4;
extern undefined4 DAT_0053dcd8;

// USA 0053DAC0 <- EU 0053DA98 (Ghidra, non-matching)
// GLOBAL DAT_0053dc88 uint *
// GLOBAL DAT_0053dc8c undefined4 *
// GLOBAL DAT_0053dc90 undefined4
// GLOBAL DAT_0053dc94 uint *
// GLOBAL DAT_0053dc98 undefined4 *
// GLOBAL DAT_0053dc9c undefined4
// GLOBAL DAT_0053dca0 uint *
// GLOBAL DAT_0053dca4 undefined4 *
// GLOBAL DAT_0053dca8 undefined4
// GLOBAL DAT_0053dcac uint *
// GLOBAL DAT_0053dcb0 undefined4 *
// GLOBAL DAT_0053dcb4 undefined4
// GLOBAL DAT_0053dcb8 uint *
// GLOBAL DAT_0053dcbc undefined4 *
// GLOBAL DAT_0053dcc0 undefined4
// GLOBAL DAT_0053dcc4 uint *
// GLOBAL DAT_0053dcc8 undefined4 *
// GLOBAL DAT_0053dccc undefined4
// GLOBAL DAT_0053dcd0 uint *
// GLOBAL DAT_0053dcd4 undefined4 *
// GLOBAL DAT_0053dcd8 undefined4

undefined4 func_0053DAC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053dc88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dc88), iVar1 != 0)) {
    *DAT_0053dc8c = DAT_0053dc90;
  }
  if (DAT_0053dc8c != param_2) {
    if (((*DAT_0053dc94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dc94), iVar1 != 0)) {
      *DAT_0053dc98 = DAT_0053dc9c;
    }
    if (DAT_0053dc98 != param_2) {
      if (((*DAT_0053dca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dca0), iVar1 != 0)) {
        *DAT_0053dca4 = DAT_0053dca8;
      }
      if (DAT_0053dca4 != param_2) {
        if (((*DAT_0053dcac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dcac), iVar1 != 0))
        {
          *DAT_0053dcb0 = DAT_0053dcb4;
        }
        if (DAT_0053dcb0 != param_2) {
          if (((*DAT_0053dcb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053dcb8), iVar1 != 0)
             ) {
            *DAT_0053dcbc = DAT_0053dcc0;
          }
          if (DAT_0053dcbc != param_2) {
            if (((*DAT_0053dcc4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0053dcc4), iVar1 != 0)) {
              *DAT_0053dcc8 = DAT_0053dccc;
            }
            if (DAT_0053dcc8 != param_2) {
              if (((*DAT_0053dcd0 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0053dcd0), iVar1 != 0)) {
                *DAT_0053dcd4 = DAT_0053dcd8;
              }
              if (DAT_0053dcd4 != param_2) {
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

