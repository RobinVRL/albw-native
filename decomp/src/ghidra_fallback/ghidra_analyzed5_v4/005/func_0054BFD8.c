#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c1a0;
extern undefined4 *DAT_0054c1a4;
extern undefined4 DAT_0054c1a8;
extern uint *DAT_0054c1ac;
extern undefined4 *DAT_0054c1b0;
extern undefined4 DAT_0054c1b4;
extern uint *DAT_0054c1b8;
extern undefined4 *DAT_0054c1bc;
extern undefined4 DAT_0054c1c0;
extern uint *DAT_0054c1c4;
extern undefined4 *DAT_0054c1c8;
extern undefined4 DAT_0054c1cc;
extern uint *DAT_0054c1d0;
extern undefined4 *DAT_0054c1d4;
extern undefined4 DAT_0054c1d8;
extern uint *DAT_0054c1dc;
extern undefined4 *DAT_0054c1e0;
extern undefined4 DAT_0054c1e4;
extern uint *DAT_0054c1e8;
extern undefined4 *DAT_0054c1ec;
extern undefined4 DAT_0054c1f0;

// USA 0054BFD8 <- EU 0054BFB0 (Ghidra, non-matching)
// GLOBAL DAT_0054c1a0 uint *
// GLOBAL DAT_0054c1a4 undefined4 *
// GLOBAL DAT_0054c1a8 undefined4
// GLOBAL DAT_0054c1ac uint *
// GLOBAL DAT_0054c1b0 undefined4 *
// GLOBAL DAT_0054c1b4 undefined4
// GLOBAL DAT_0054c1b8 uint *
// GLOBAL DAT_0054c1bc undefined4 *
// GLOBAL DAT_0054c1c0 undefined4
// GLOBAL DAT_0054c1c4 uint *
// GLOBAL DAT_0054c1c8 undefined4 *
// GLOBAL DAT_0054c1cc undefined4
// GLOBAL DAT_0054c1d0 uint *
// GLOBAL DAT_0054c1d4 undefined4 *
// GLOBAL DAT_0054c1d8 undefined4
// GLOBAL DAT_0054c1dc uint *
// GLOBAL DAT_0054c1e0 undefined4 *
// GLOBAL DAT_0054c1e4 undefined4
// GLOBAL DAT_0054c1e8 uint *
// GLOBAL DAT_0054c1ec undefined4 *
// GLOBAL DAT_0054c1f0 undefined4

undefined4 func_0054BFD8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c1a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c1a0), iVar1 != 0)) {
    *DAT_0054c1a4 = DAT_0054c1a8;
  }
  if (DAT_0054c1a4 != param_2) {
    if (((*DAT_0054c1ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c1ac), iVar1 != 0)) {
      *DAT_0054c1b0 = DAT_0054c1b4;
    }
    if (DAT_0054c1b0 != param_2) {
      if (((*DAT_0054c1b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c1b8), iVar1 != 0)) {
        *DAT_0054c1bc = DAT_0054c1c0;
      }
      if (DAT_0054c1bc != param_2) {
        if (((*DAT_0054c1c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c1c4), iVar1 != 0))
        {
          *DAT_0054c1c8 = DAT_0054c1cc;
        }
        if (DAT_0054c1c8 != param_2) {
          if (((*DAT_0054c1d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c1d0), iVar1 != 0)
             ) {
            *DAT_0054c1d4 = DAT_0054c1d8;
          }
          if (DAT_0054c1d4 != param_2) {
            if (((*DAT_0054c1dc & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0054c1dc), iVar1 != 0)) {
              *DAT_0054c1e0 = DAT_0054c1e4;
            }
            if (DAT_0054c1e0 != param_2) {
              if (((*DAT_0054c1e8 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0054c1e8), iVar1 != 0)) {
                *DAT_0054c1ec = DAT_0054c1f0;
              }
              if (DAT_0054c1ec != param_2) {
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

