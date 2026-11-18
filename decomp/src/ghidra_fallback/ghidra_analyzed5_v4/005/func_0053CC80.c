#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053cd7c;
extern undefined4 *DAT_0053cd80;
extern undefined4 DAT_0053cd84;
extern uint *DAT_0053cd88;
extern undefined4 *DAT_0053cd8c;
extern undefined4 DAT_0053cd90;
extern uint *DAT_0053cd94;
extern undefined4 *DAT_0053cd98;
extern undefined4 DAT_0053cd9c;
extern uint *DAT_0053cda0;
extern undefined4 *DAT_0053cda4;
extern undefined4 DAT_0053cda8;

// USA 0053CC80 <- EU 0053CC58 (Ghidra, non-matching)
// GLOBAL DAT_0053cd7c uint *
// GLOBAL DAT_0053cd80 undefined4 *
// GLOBAL DAT_0053cd84 undefined4
// GLOBAL DAT_0053cd88 uint *
// GLOBAL DAT_0053cd8c undefined4 *
// GLOBAL DAT_0053cd90 undefined4
// GLOBAL DAT_0053cd94 uint *
// GLOBAL DAT_0053cd98 undefined4 *
// GLOBAL DAT_0053cd9c undefined4
// GLOBAL DAT_0053cda0 uint *
// GLOBAL DAT_0053cda4 undefined4 *
// GLOBAL DAT_0053cda8 undefined4

undefined4 func_0053CC80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053cd7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cd7c), iVar1 != 0)) {
    *DAT_0053cd80 = DAT_0053cd84;
  }
  if (DAT_0053cd80 != param_2) {
    if (((*DAT_0053cd88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cd88), iVar1 != 0)) {
      *DAT_0053cd8c = DAT_0053cd90;
    }
    if (DAT_0053cd8c != param_2) {
      if (((*DAT_0053cd94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cd94), iVar1 != 0)) {
        *DAT_0053cd98 = DAT_0053cd9c;
      }
      if (DAT_0053cd98 != param_2) {
        if (((*DAT_0053cda0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cda0), iVar1 != 0))
        {
          *DAT_0053cda4 = DAT_0053cda8;
        }
        if (DAT_0053cda4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

