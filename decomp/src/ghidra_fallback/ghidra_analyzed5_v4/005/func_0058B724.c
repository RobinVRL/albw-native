#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b8a8;
extern undefined4 *DAT_0058b8ac;
extern undefined4 DAT_0058b8b0;
extern uint *DAT_0058b8b4;
extern undefined4 *DAT_0058b8b8;
extern undefined4 DAT_0058b8bc;
extern uint *DAT_0058b8c0;
extern undefined4 *DAT_0058b8c4;
extern undefined4 DAT_0058b8c8;
extern uint *DAT_0058b8cc;
extern undefined4 *DAT_0058b8d0;
extern undefined4 DAT_0058b8d4;
extern uint *DAT_0058b8d8;
extern undefined4 *DAT_0058b8dc;
extern undefined4 DAT_0058b8e0;
extern uint *DAT_0058b8e4;
extern undefined4 *DAT_0058b8e8;
extern undefined4 DAT_0058b8ec;

// USA 0058B724 <- EU 0058B6FC (Ghidra, non-matching)
// GLOBAL DAT_0058b8a8 uint *
// GLOBAL DAT_0058b8ac undefined4 *
// GLOBAL DAT_0058b8b0 undefined4
// GLOBAL DAT_0058b8b4 uint *
// GLOBAL DAT_0058b8b8 undefined4 *
// GLOBAL DAT_0058b8bc undefined4
// GLOBAL DAT_0058b8c0 uint *
// GLOBAL DAT_0058b8c4 undefined4 *
// GLOBAL DAT_0058b8c8 undefined4
// GLOBAL DAT_0058b8cc uint *
// GLOBAL DAT_0058b8d0 undefined4 *
// GLOBAL DAT_0058b8d4 undefined4
// GLOBAL DAT_0058b8d8 uint *
// GLOBAL DAT_0058b8dc undefined4 *
// GLOBAL DAT_0058b8e0 undefined4
// GLOBAL DAT_0058b8e4 uint *
// GLOBAL DAT_0058b8e8 undefined4 *
// GLOBAL DAT_0058b8ec undefined4

undefined4 func_0058B724(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b8a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b8a8), iVar1 != 0)) {
    *DAT_0058b8ac = DAT_0058b8b0;
  }
  if (DAT_0058b8ac != param_2) {
    if (((*DAT_0058b8b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b8b4), iVar1 != 0)) {
      *DAT_0058b8b8 = DAT_0058b8bc;
    }
    if (DAT_0058b8b8 != param_2) {
      if (((*DAT_0058b8c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b8c0), iVar1 != 0)) {
        *DAT_0058b8c4 = DAT_0058b8c8;
      }
      if (DAT_0058b8c4 != param_2) {
        if (((*DAT_0058b8cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b8cc), iVar1 != 0))
        {
          *DAT_0058b8d0 = DAT_0058b8d4;
        }
        if (DAT_0058b8d0 != param_2) {
          if (((*DAT_0058b8d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b8d8), iVar1 != 0)
             ) {
            *DAT_0058b8dc = DAT_0058b8e0;
          }
          if (DAT_0058b8dc != param_2) {
            if (((*DAT_0058b8e4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0058b8e4), iVar1 != 0)) {
              *DAT_0058b8e8 = DAT_0058b8ec;
            }
            if (DAT_0058b8e8 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

