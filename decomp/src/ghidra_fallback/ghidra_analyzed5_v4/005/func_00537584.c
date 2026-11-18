#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005376c4;
extern undefined4 *DAT_005376c8;
extern undefined4 DAT_005376cc;
extern uint *DAT_005376d0;
extern undefined4 *DAT_005376d4;
extern undefined4 DAT_005376d8;
extern uint *DAT_005376dc;
extern undefined4 *DAT_005376e0;
extern undefined4 DAT_005376e4;
extern uint *DAT_005376e8;
extern undefined4 *DAT_005376ec;
extern undefined4 DAT_005376f0;
extern uint *DAT_005376f4;
extern undefined4 *DAT_005376f8;
extern undefined4 DAT_005376fc;

// USA 00537584 <- EU 0053755C (Ghidra, non-matching)
// GLOBAL DAT_005376c4 uint *
// GLOBAL DAT_005376c8 undefined4 *
// GLOBAL DAT_005376cc undefined4
// GLOBAL DAT_005376d0 uint *
// GLOBAL DAT_005376d4 undefined4 *
// GLOBAL DAT_005376d8 undefined4
// GLOBAL DAT_005376dc uint *
// GLOBAL DAT_005376e0 undefined4 *
// GLOBAL DAT_005376e4 undefined4
// GLOBAL DAT_005376e8 uint *
// GLOBAL DAT_005376ec undefined4 *
// GLOBAL DAT_005376f0 undefined4
// GLOBAL DAT_005376f4 uint *
// GLOBAL DAT_005376f8 undefined4 *
// GLOBAL DAT_005376fc undefined4

undefined4 func_00537584(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005376c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005376c4), iVar1 != 0)) {
    *DAT_005376c8 = DAT_005376cc;
  }
  if (DAT_005376c8 != param_2) {
    if (((*DAT_005376d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005376d0), iVar1 != 0)) {
      *DAT_005376d4 = DAT_005376d8;
    }
    if (DAT_005376d4 != param_2) {
      if (((*DAT_005376dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005376dc), iVar1 != 0)) {
        *DAT_005376e0 = DAT_005376e4;
      }
      if (DAT_005376e0 != param_2) {
        if (((*DAT_005376e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005376e8), iVar1 != 0))
        {
          *DAT_005376ec = DAT_005376f0;
        }
        if (DAT_005376ec != param_2) {
          if (((*DAT_005376f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005376f4), iVar1 != 0)
             ) {
            *DAT_005376f8 = DAT_005376fc;
          }
          if (DAT_005376f8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

