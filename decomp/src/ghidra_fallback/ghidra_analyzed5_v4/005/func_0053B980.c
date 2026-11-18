#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053bb04;
extern undefined4 *DAT_0053bb08;
extern undefined4 DAT_0053bb0c;
extern uint *DAT_0053bb10;
extern undefined4 *DAT_0053bb14;
extern undefined4 DAT_0053bb18;
extern uint *DAT_0053bb1c;
extern undefined4 *DAT_0053bb20;
extern undefined4 DAT_0053bb24;
extern uint *DAT_0053bb28;
extern undefined4 *DAT_0053bb2c;
extern undefined4 DAT_0053bb30;
extern uint *DAT_0053bb34;
extern undefined4 *DAT_0053bb38;
extern undefined4 DAT_0053bb3c;
extern uint *DAT_0053bb40;
extern undefined4 *DAT_0053bb44;
extern undefined4 DAT_0053bb48;

// USA 0053B980 <- EU 0053B958 (Ghidra, non-matching)
// GLOBAL DAT_0053bb04 uint *
// GLOBAL DAT_0053bb08 undefined4 *
// GLOBAL DAT_0053bb0c undefined4
// GLOBAL DAT_0053bb10 uint *
// GLOBAL DAT_0053bb14 undefined4 *
// GLOBAL DAT_0053bb18 undefined4
// GLOBAL DAT_0053bb1c uint *
// GLOBAL DAT_0053bb20 undefined4 *
// GLOBAL DAT_0053bb24 undefined4
// GLOBAL DAT_0053bb28 uint *
// GLOBAL DAT_0053bb2c undefined4 *
// GLOBAL DAT_0053bb30 undefined4
// GLOBAL DAT_0053bb34 uint *
// GLOBAL DAT_0053bb38 undefined4 *
// GLOBAL DAT_0053bb3c undefined4
// GLOBAL DAT_0053bb40 uint *
// GLOBAL DAT_0053bb44 undefined4 *
// GLOBAL DAT_0053bb48 undefined4

undefined4 func_0053B980(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053bb04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bb04), iVar1 != 0)) {
    *DAT_0053bb08 = DAT_0053bb0c;
  }
  if (DAT_0053bb08 != param_2) {
    if (((*DAT_0053bb10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bb10), iVar1 != 0)) {
      *DAT_0053bb14 = DAT_0053bb18;
    }
    if (DAT_0053bb14 != param_2) {
      if (((*DAT_0053bb1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bb1c), iVar1 != 0)) {
        *DAT_0053bb20 = DAT_0053bb24;
      }
      if (DAT_0053bb20 != param_2) {
        if (((*DAT_0053bb28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bb28), iVar1 != 0))
        {
          *DAT_0053bb2c = DAT_0053bb30;
        }
        if (DAT_0053bb2c != param_2) {
          if (((*DAT_0053bb34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bb34), iVar1 != 0)
             ) {
            *DAT_0053bb38 = DAT_0053bb3c;
          }
          if (DAT_0053bb38 != param_2) {
            if (((*DAT_0053bb40 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0053bb40), iVar1 != 0)) {
              *DAT_0053bb44 = DAT_0053bb48;
            }
            if (DAT_0053bb44 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

