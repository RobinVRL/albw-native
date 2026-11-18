#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057b500;
extern undefined4 *DAT_0057b504;
extern undefined4 DAT_0057b508;
extern uint *DAT_0057b50c;
extern undefined4 *DAT_0057b510;
extern undefined4 DAT_0057b514;
extern uint *DAT_0057b518;
extern undefined4 *DAT_0057b51c;
extern undefined4 DAT_0057b520;
extern uint *DAT_0057b524;
extern undefined4 *DAT_0057b528;
extern undefined4 DAT_0057b52c;

// USA 0057B404 <- EU 0057B3DC (Ghidra, non-matching)
// GLOBAL DAT_0057b500 uint *
// GLOBAL DAT_0057b504 undefined4 *
// GLOBAL DAT_0057b508 undefined4
// GLOBAL DAT_0057b50c uint *
// GLOBAL DAT_0057b510 undefined4 *
// GLOBAL DAT_0057b514 undefined4
// GLOBAL DAT_0057b518 uint *
// GLOBAL DAT_0057b51c undefined4 *
// GLOBAL DAT_0057b520 undefined4
// GLOBAL DAT_0057b524 uint *
// GLOBAL DAT_0057b528 undefined4 *
// GLOBAL DAT_0057b52c undefined4

undefined4 func_0057B404(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057b500 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b500), iVar1 != 0)) {
    *DAT_0057b504 = DAT_0057b508;
  }
  if (DAT_0057b504 != param_2) {
    if (((*DAT_0057b50c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b50c), iVar1 != 0)) {
      *DAT_0057b510 = DAT_0057b514;
    }
    if (DAT_0057b510 != param_2) {
      if (((*DAT_0057b518 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b518), iVar1 != 0)) {
        *DAT_0057b51c = DAT_0057b520;
      }
      if (DAT_0057b51c != param_2) {
        if (((*DAT_0057b524 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b524), iVar1 != 0))
        {
          *DAT_0057b528 = DAT_0057b52c;
        }
        if (DAT_0057b528 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

