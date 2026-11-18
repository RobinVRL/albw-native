#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005257b0;
extern undefined4 *DAT_005257b4;
extern undefined4 DAT_005257b8;
extern uint *DAT_005257bc;
extern undefined4 *DAT_005257c0;
extern undefined4 DAT_005257c4;
extern uint *DAT_005257c8;
extern undefined4 *DAT_005257cc;
extern undefined4 DAT_005257d0;
extern uint *DAT_005257d4;
extern undefined4 *DAT_005257d8;
extern undefined4 DAT_005257dc;
extern uint *DAT_005257e0;
extern undefined4 *DAT_005257e4;
extern undefined4 DAT_005257e8;
extern uint *DAT_005257ec;
extern undefined4 *DAT_005257f0;
extern undefined4 DAT_005257f4;
extern uint *DAT_005257f8;
extern undefined4 *DAT_005257fc;
extern undefined4 DAT_00525800;

// USA 005255E8 <- EU 005255C0 (Ghidra, non-matching)
// GLOBAL DAT_005257b0 uint *
// GLOBAL DAT_005257b4 undefined4 *
// GLOBAL DAT_005257b8 undefined4
// GLOBAL DAT_005257bc uint *
// GLOBAL DAT_005257c0 undefined4 *
// GLOBAL DAT_005257c4 undefined4
// GLOBAL DAT_005257c8 uint *
// GLOBAL DAT_005257cc undefined4 *
// GLOBAL DAT_005257d0 undefined4
// GLOBAL DAT_005257d4 uint *
// GLOBAL DAT_005257d8 undefined4 *
// GLOBAL DAT_005257dc undefined4
// GLOBAL DAT_005257e0 uint *
// GLOBAL DAT_005257e4 undefined4 *
// GLOBAL DAT_005257e8 undefined4
// GLOBAL DAT_005257ec uint *
// GLOBAL DAT_005257f0 undefined4 *
// GLOBAL DAT_005257f4 undefined4
// GLOBAL DAT_005257f8 uint *
// GLOBAL DAT_005257fc undefined4 *
// GLOBAL DAT_00525800 undefined4

undefined4 func_005255E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005257b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005257b0), iVar1 != 0)) {
    *DAT_005257b4 = DAT_005257b8;
  }
  if (DAT_005257b4 != param_2) {
    if (((*DAT_005257bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005257bc), iVar1 != 0)) {
      *DAT_005257c0 = DAT_005257c4;
    }
    if (DAT_005257c0 != param_2) {
      if (((*DAT_005257c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005257c8), iVar1 != 0)) {
        *DAT_005257cc = DAT_005257d0;
      }
      if (DAT_005257cc != param_2) {
        if (((*DAT_005257d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005257d4), iVar1 != 0))
        {
          *DAT_005257d8 = DAT_005257dc;
        }
        if (DAT_005257d8 != param_2) {
          if (((*DAT_005257e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005257e0), iVar1 != 0)
             ) {
            *DAT_005257e4 = DAT_005257e8;
          }
          if (DAT_005257e4 != param_2) {
            if (((*DAT_005257ec & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005257ec), iVar1 != 0)) {
              *DAT_005257f0 = DAT_005257f4;
            }
            if (DAT_005257f0 != param_2) {
              if (((*DAT_005257f8 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_005257f8), iVar1 != 0)) {
                *DAT_005257fc = DAT_00525800;
              }
              if (DAT_005257fc != param_2) {
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

