#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057bb0c;
extern undefined4 *DAT_0057bb10;
extern undefined4 DAT_0057bb14;
extern uint *DAT_0057bb18;
extern undefined4 *DAT_0057bb1c;
extern undefined4 DAT_0057bb20;
extern uint *DAT_0057bb24;
extern undefined4 *DAT_0057bb28;
extern undefined4 DAT_0057bb2c;
extern uint *DAT_0057bb30;
extern undefined4 *DAT_0057bb34;
extern undefined4 DAT_0057bb38;
extern uint *DAT_0057bb3c;
extern undefined4 *DAT_0057bb40;
extern undefined4 DAT_0057bb44;

// USA 0057B9CC <- EU 0057B9A4 (Ghidra, non-matching)
// GLOBAL DAT_0057bb0c uint *
// GLOBAL DAT_0057bb10 undefined4 *
// GLOBAL DAT_0057bb14 undefined4
// GLOBAL DAT_0057bb18 uint *
// GLOBAL DAT_0057bb1c undefined4 *
// GLOBAL DAT_0057bb20 undefined4
// GLOBAL DAT_0057bb24 uint *
// GLOBAL DAT_0057bb28 undefined4 *
// GLOBAL DAT_0057bb2c undefined4
// GLOBAL DAT_0057bb30 uint *
// GLOBAL DAT_0057bb34 undefined4 *
// GLOBAL DAT_0057bb38 undefined4
// GLOBAL DAT_0057bb3c uint *
// GLOBAL DAT_0057bb40 undefined4 *
// GLOBAL DAT_0057bb44 undefined4

undefined4 func_0057B9CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057bb0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bb0c), iVar1 != 0)) {
    *DAT_0057bb10 = DAT_0057bb14;
  }
  if (DAT_0057bb10 != param_2) {
    if (((*DAT_0057bb18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bb18), iVar1 != 0)) {
      *DAT_0057bb1c = DAT_0057bb20;
    }
    if (DAT_0057bb1c != param_2) {
      if (((*DAT_0057bb24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bb24), iVar1 != 0)) {
        *DAT_0057bb28 = DAT_0057bb2c;
      }
      if (DAT_0057bb28 != param_2) {
        if (((*DAT_0057bb30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bb30), iVar1 != 0))
        {
          *DAT_0057bb34 = DAT_0057bb38;
        }
        if (DAT_0057bb34 != param_2) {
          if (((*DAT_0057bb3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bb3c), iVar1 != 0)
             ) {
            *DAT_0057bb40 = DAT_0057bb44;
          }
          if (DAT_0057bb40 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

