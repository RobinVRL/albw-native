#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005271d0;
extern undefined4 *DAT_005271d4;
extern undefined4 DAT_005271d8;
extern uint *DAT_005271dc;
extern undefined4 *DAT_005271e0;
extern undefined4 DAT_005271e4;
extern uint *DAT_005271e8;
extern undefined4 *DAT_005271ec;
extern undefined4 DAT_005271f0;
extern uint *DAT_005271f4;
extern undefined4 *DAT_005271f8;
extern undefined4 DAT_005271fc;

// USA 005270D4 <- EU 005270AC (Ghidra, non-matching)
// GLOBAL DAT_005271d0 uint *
// GLOBAL DAT_005271d4 undefined4 *
// GLOBAL DAT_005271d8 undefined4
// GLOBAL DAT_005271dc uint *
// GLOBAL DAT_005271e0 undefined4 *
// GLOBAL DAT_005271e4 undefined4
// GLOBAL DAT_005271e8 uint *
// GLOBAL DAT_005271ec undefined4 *
// GLOBAL DAT_005271f0 undefined4
// GLOBAL DAT_005271f4 uint *
// GLOBAL DAT_005271f8 undefined4 *
// GLOBAL DAT_005271fc undefined4

undefined4 func_005270D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005271d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005271d0), iVar1 != 0)) {
    *DAT_005271d4 = DAT_005271d8;
  }
  if (DAT_005271d4 != param_2) {
    if (((*DAT_005271dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005271dc), iVar1 != 0)) {
      *DAT_005271e0 = DAT_005271e4;
    }
    if (DAT_005271e0 != param_2) {
      if (((*DAT_005271e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005271e8), iVar1 != 0)) {
        *DAT_005271ec = DAT_005271f0;
      }
      if (DAT_005271ec != param_2) {
        if (((*DAT_005271f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005271f4), iVar1 != 0))
        {
          *DAT_005271f8 = DAT_005271fc;
        }
        if (DAT_005271f8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

