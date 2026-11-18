#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005505c0;
extern undefined4 *DAT_005505c4;
extern undefined4 DAT_005505c8;
extern uint *DAT_005505cc;
extern undefined4 *DAT_005505d0;
extern undefined4 DAT_005505d4;
extern uint *DAT_005505d8;
extern undefined4 *DAT_005505dc;
extern undefined4 DAT_005505e0;
extern uint *DAT_005505e4;
extern undefined4 *DAT_005505e8;
extern undefined4 DAT_005505ec;
extern uint *DAT_005505f0;
extern undefined4 *DAT_005505f4;
extern undefined4 DAT_005505f8;
extern uint *DAT_005505fc;
extern undefined4 *DAT_00550600;
extern undefined4 DAT_00550604;

// USA 0055043C <- EU 00550414 (Ghidra, non-matching)
// GLOBAL DAT_005505c0 uint *
// GLOBAL DAT_005505c4 undefined4 *
// GLOBAL DAT_005505c8 undefined4
// GLOBAL DAT_005505cc uint *
// GLOBAL DAT_005505d0 undefined4 *
// GLOBAL DAT_005505d4 undefined4
// GLOBAL DAT_005505d8 uint *
// GLOBAL DAT_005505dc undefined4 *
// GLOBAL DAT_005505e0 undefined4
// GLOBAL DAT_005505e4 uint *
// GLOBAL DAT_005505e8 undefined4 *
// GLOBAL DAT_005505ec undefined4
// GLOBAL DAT_005505f0 uint *
// GLOBAL DAT_005505f4 undefined4 *
// GLOBAL DAT_005505f8 undefined4
// GLOBAL DAT_005505fc uint *
// GLOBAL DAT_00550600 undefined4 *
// GLOBAL DAT_00550604 undefined4

undefined4 func_0055043C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005505c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005505c0), iVar1 != 0)) {
    *DAT_005505c4 = DAT_005505c8;
  }
  if (DAT_005505c4 != param_2) {
    if (((*DAT_005505cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005505cc), iVar1 != 0)) {
      *DAT_005505d0 = DAT_005505d4;
    }
    if (DAT_005505d0 != param_2) {
      if (((*DAT_005505d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005505d8), iVar1 != 0)) {
        *DAT_005505dc = DAT_005505e0;
      }
      if (DAT_005505dc != param_2) {
        if (((*DAT_005505e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005505e4), iVar1 != 0))
        {
          *DAT_005505e8 = DAT_005505ec;
        }
        if (DAT_005505e8 != param_2) {
          if (((*DAT_005505f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005505f0), iVar1 != 0)
             ) {
            *DAT_005505f4 = DAT_005505f8;
          }
          if (DAT_005505f4 != param_2) {
            if (((*DAT_005505fc & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005505fc), iVar1 != 0)) {
              *DAT_00550600 = DAT_00550604;
            }
            if (DAT_00550600 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

