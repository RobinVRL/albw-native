#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054ef40;
extern undefined4 *DAT_0054ef44;
extern undefined4 DAT_0054ef48;
extern uint *DAT_0054ef4c;
extern undefined4 *DAT_0054ef50;
extern undefined4 DAT_0054ef54;
extern uint *DAT_0054ef58;
extern undefined4 *DAT_0054ef5c;
extern undefined4 DAT_0054ef60;
extern uint *DAT_0054ef64;
extern undefined4 *DAT_0054ef68;
extern undefined4 DAT_0054ef6c;

// USA 0054EE44 <- EU 0054EE1C (Ghidra, non-matching)
// GLOBAL DAT_0054ef40 uint *
// GLOBAL DAT_0054ef44 undefined4 *
// GLOBAL DAT_0054ef48 undefined4
// GLOBAL DAT_0054ef4c uint *
// GLOBAL DAT_0054ef50 undefined4 *
// GLOBAL DAT_0054ef54 undefined4
// GLOBAL DAT_0054ef58 uint *
// GLOBAL DAT_0054ef5c undefined4 *
// GLOBAL DAT_0054ef60 undefined4
// GLOBAL DAT_0054ef64 uint *
// GLOBAL DAT_0054ef68 undefined4 *
// GLOBAL DAT_0054ef6c undefined4

undefined4 func_0054EE44(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054ef40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ef40), iVar1 != 0)) {
    *DAT_0054ef44 = DAT_0054ef48;
  }
  if (DAT_0054ef44 != param_2) {
    if (((*DAT_0054ef4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ef4c), iVar1 != 0)) {
      *DAT_0054ef50 = DAT_0054ef54;
    }
    if (DAT_0054ef50 != param_2) {
      if (((*DAT_0054ef58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ef58), iVar1 != 0)) {
        *DAT_0054ef5c = DAT_0054ef60;
      }
      if (DAT_0054ef5c != param_2) {
        if (((*DAT_0054ef64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ef64), iVar1 != 0))
        {
          *DAT_0054ef68 = DAT_0054ef6c;
        }
        if (DAT_0054ef68 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

