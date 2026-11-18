#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0062a8b4;
extern undefined4 *DAT_0062a8b8;
extern undefined4 DAT_0062a8bc;
extern uint *DAT_0062a8c0;
extern undefined4 *DAT_0062a8c4;
extern undefined4 DAT_0062a8c8;
extern uint *DAT_0062a8cc;
extern undefined4 *DAT_0062a8d0;
extern undefined4 DAT_0062a8d4;
extern uint *DAT_0062a8d8;
extern undefined4 *DAT_0062a8dc;
extern undefined4 DAT_0062a8e0;
extern uint *DAT_0062a8e4;
extern undefined4 *DAT_0062a8e8;
extern undefined4 DAT_0062a8ec;
extern uint *DAT_0062a8f0;
extern undefined4 *DAT_0062a8f4;
extern undefined4 DAT_0062a8f8;

// USA 0062A730 <- EU 0062A708 (Ghidra, non-matching)
// GLOBAL DAT_0062a8b4 uint *
// GLOBAL DAT_0062a8b8 undefined4 *
// GLOBAL DAT_0062a8bc undefined4
// GLOBAL DAT_0062a8c0 uint *
// GLOBAL DAT_0062a8c4 undefined4 *
// GLOBAL DAT_0062a8c8 undefined4
// GLOBAL DAT_0062a8cc uint *
// GLOBAL DAT_0062a8d0 undefined4 *
// GLOBAL DAT_0062a8d4 undefined4
// GLOBAL DAT_0062a8d8 uint *
// GLOBAL DAT_0062a8dc undefined4 *
// GLOBAL DAT_0062a8e0 undefined4
// GLOBAL DAT_0062a8e4 uint *
// GLOBAL DAT_0062a8e8 undefined4 *
// GLOBAL DAT_0062a8ec undefined4
// GLOBAL DAT_0062a8f0 uint *
// GLOBAL DAT_0062a8f4 undefined4 *
// GLOBAL DAT_0062a8f8 undefined4

undefined4 func_0062A730(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0062a8b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062a8b4), iVar1 != 0)) {
    *DAT_0062a8b8 = DAT_0062a8bc;
  }
  if (DAT_0062a8b8 != param_1) {
    if (((*DAT_0062a8c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062a8c0), iVar1 != 0)) {
      *DAT_0062a8c4 = DAT_0062a8c8;
    }
    if (DAT_0062a8c4 != param_1) {
      if (((*DAT_0062a8cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062a8cc), iVar1 != 0)) {
        *DAT_0062a8d0 = DAT_0062a8d4;
      }
      if (DAT_0062a8d0 != param_1) {
        if (((*DAT_0062a8d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062a8d8), iVar1 != 0))
        {
          *DAT_0062a8dc = DAT_0062a8e0;
        }
        if (DAT_0062a8dc != param_1) {
          if (((*DAT_0062a8e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062a8e4), iVar1 != 0)
             ) {
            *DAT_0062a8e8 = DAT_0062a8ec;
          }
          if (DAT_0062a8e8 != param_1) {
            if (((*DAT_0062a8f0 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0062a8f0), iVar1 != 0)) {
              *DAT_0062a8f4 = DAT_0062a8f8;
            }
            if (DAT_0062a8f4 != param_1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

