#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005429dc;
extern undefined4 *DAT_005429e0;
extern undefined4 DAT_005429e4;
extern uint *DAT_005429e8;
extern undefined4 *DAT_005429ec;
extern undefined4 DAT_005429f0;
extern uint *DAT_005429f4;
extern undefined4 *DAT_005429f8;
extern undefined4 DAT_005429fc;
extern uint *DAT_00542a00;
extern undefined4 *DAT_00542a04;
extern undefined4 DAT_00542a08;

// USA 005428E0 <- EU 005428B8 (Ghidra, non-matching)
// GLOBAL DAT_005429dc uint *
// GLOBAL DAT_005429e0 undefined4 *
// GLOBAL DAT_005429e4 undefined4
// GLOBAL DAT_005429e8 uint *
// GLOBAL DAT_005429ec undefined4 *
// GLOBAL DAT_005429f0 undefined4
// GLOBAL DAT_005429f4 uint *
// GLOBAL DAT_005429f8 undefined4 *
// GLOBAL DAT_005429fc undefined4
// GLOBAL DAT_00542a00 uint *
// GLOBAL DAT_00542a04 undefined4 *
// GLOBAL DAT_00542a08 undefined4

undefined4 func_005428E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005429dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005429dc), iVar1 != 0)) {
    *DAT_005429e0 = DAT_005429e4;
  }
  if (DAT_005429e0 != param_2) {
    if (((*DAT_005429e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005429e8), iVar1 != 0)) {
      *DAT_005429ec = DAT_005429f0;
    }
    if (DAT_005429ec != param_2) {
      if (((*DAT_005429f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005429f4), iVar1 != 0)) {
        *DAT_005429f8 = DAT_005429fc;
      }
      if (DAT_005429f8 != param_2) {
        if (((*DAT_00542a00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542a00), iVar1 != 0))
        {
          *DAT_00542a04 = DAT_00542a08;
        }
        if (DAT_00542a04 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

