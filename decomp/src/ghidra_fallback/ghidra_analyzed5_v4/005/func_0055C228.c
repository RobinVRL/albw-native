#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055c3ac;
extern undefined4 *DAT_0055c3b0;
extern undefined4 DAT_0055c3b4;
extern uint *DAT_0055c3b8;
extern undefined4 *DAT_0055c3bc;
extern undefined4 DAT_0055c3c0;
extern uint *DAT_0055c3c4;
extern undefined4 *DAT_0055c3c8;
extern undefined4 DAT_0055c3cc;
extern uint *DAT_0055c3d0;
extern undefined4 *DAT_0055c3d4;
extern undefined4 DAT_0055c3d8;
extern uint *DAT_0055c3dc;
extern undefined4 *DAT_0055c3e0;
extern undefined4 DAT_0055c3e4;
extern uint *DAT_0055c3e8;
extern undefined4 *DAT_0055c3ec;
extern undefined4 DAT_0055c3f0;

// USA 0055C228 <- EU 0055C200 (Ghidra, non-matching)
// GLOBAL DAT_0055c3ac uint *
// GLOBAL DAT_0055c3b0 undefined4 *
// GLOBAL DAT_0055c3b4 undefined4
// GLOBAL DAT_0055c3b8 uint *
// GLOBAL DAT_0055c3bc undefined4 *
// GLOBAL DAT_0055c3c0 undefined4
// GLOBAL DAT_0055c3c4 uint *
// GLOBAL DAT_0055c3c8 undefined4 *
// GLOBAL DAT_0055c3cc undefined4
// GLOBAL DAT_0055c3d0 uint *
// GLOBAL DAT_0055c3d4 undefined4 *
// GLOBAL DAT_0055c3d8 undefined4
// GLOBAL DAT_0055c3dc uint *
// GLOBAL DAT_0055c3e0 undefined4 *
// GLOBAL DAT_0055c3e4 undefined4
// GLOBAL DAT_0055c3e8 uint *
// GLOBAL DAT_0055c3ec undefined4 *
// GLOBAL DAT_0055c3f0 undefined4

undefined4 func_0055C228(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055c3ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c3ac), iVar1 != 0)) {
    *DAT_0055c3b0 = DAT_0055c3b4;
  }
  if (DAT_0055c3b0 != param_2) {
    if (((*DAT_0055c3b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c3b8), iVar1 != 0)) {
      *DAT_0055c3bc = DAT_0055c3c0;
    }
    if (DAT_0055c3bc != param_2) {
      if (((*DAT_0055c3c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c3c4), iVar1 != 0)) {
        *DAT_0055c3c8 = DAT_0055c3cc;
      }
      if (DAT_0055c3c8 != param_2) {
        if (((*DAT_0055c3d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c3d0), iVar1 != 0))
        {
          *DAT_0055c3d4 = DAT_0055c3d8;
        }
        if (DAT_0055c3d4 != param_2) {
          if (((*DAT_0055c3dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c3dc), iVar1 != 0)
             ) {
            *DAT_0055c3e0 = DAT_0055c3e4;
          }
          if (DAT_0055c3e0 != param_2) {
            if (((*DAT_0055c3e8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0055c3e8), iVar1 != 0)) {
              *DAT_0055c3ec = DAT_0055c3f0;
            }
            if (DAT_0055c3ec != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

