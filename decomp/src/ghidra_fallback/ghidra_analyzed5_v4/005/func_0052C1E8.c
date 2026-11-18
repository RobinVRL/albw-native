#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052c3b0;
extern undefined4 *DAT_0052c3b4;
extern undefined4 DAT_0052c3b8;
extern uint *DAT_0052c3bc;
extern undefined4 *DAT_0052c3c0;
extern undefined4 DAT_0052c3c4;
extern uint *DAT_0052c3c8;
extern undefined4 *DAT_0052c3cc;
extern undefined4 DAT_0052c3d0;
extern uint *DAT_0052c3d4;
extern undefined4 *DAT_0052c3d8;
extern undefined4 DAT_0052c3dc;
extern uint *DAT_0052c3e0;
extern undefined4 *DAT_0052c3e4;
extern undefined4 DAT_0052c3e8;
extern uint *DAT_0052c3ec;
extern undefined4 *DAT_0052c3f0;
extern undefined4 DAT_0052c3f4;
extern uint *DAT_0052c3f8;
extern undefined4 *DAT_0052c3fc;
extern undefined4 DAT_0052c400;

// USA 0052C1E8 <- EU 0052C1C0 (Ghidra, non-matching)
// GLOBAL DAT_0052c3b0 uint *
// GLOBAL DAT_0052c3b4 undefined4 *
// GLOBAL DAT_0052c3b8 undefined4
// GLOBAL DAT_0052c3bc uint *
// GLOBAL DAT_0052c3c0 undefined4 *
// GLOBAL DAT_0052c3c4 undefined4
// GLOBAL DAT_0052c3c8 uint *
// GLOBAL DAT_0052c3cc undefined4 *
// GLOBAL DAT_0052c3d0 undefined4
// GLOBAL DAT_0052c3d4 uint *
// GLOBAL DAT_0052c3d8 undefined4 *
// GLOBAL DAT_0052c3dc undefined4
// GLOBAL DAT_0052c3e0 uint *
// GLOBAL DAT_0052c3e4 undefined4 *
// GLOBAL DAT_0052c3e8 undefined4
// GLOBAL DAT_0052c3ec uint *
// GLOBAL DAT_0052c3f0 undefined4 *
// GLOBAL DAT_0052c3f4 undefined4
// GLOBAL DAT_0052c3f8 uint *
// GLOBAL DAT_0052c3fc undefined4 *
// GLOBAL DAT_0052c400 undefined4

undefined4 func_0052C1E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052c3b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c3b0), iVar1 != 0)) {
    *DAT_0052c3b4 = DAT_0052c3b8;
  }
  if (DAT_0052c3b4 != param_2) {
    if (((*DAT_0052c3bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c3bc), iVar1 != 0)) {
      *DAT_0052c3c0 = DAT_0052c3c4;
    }
    if (DAT_0052c3c0 != param_2) {
      if (((*DAT_0052c3c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c3c8), iVar1 != 0)) {
        *DAT_0052c3cc = DAT_0052c3d0;
      }
      if (DAT_0052c3cc != param_2) {
        if (((*DAT_0052c3d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c3d4), iVar1 != 0))
        {
          *DAT_0052c3d8 = DAT_0052c3dc;
        }
        if (DAT_0052c3d8 != param_2) {
          if (((*DAT_0052c3e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c3e0), iVar1 != 0)
             ) {
            *DAT_0052c3e4 = DAT_0052c3e8;
          }
          if (DAT_0052c3e4 != param_2) {
            if (((*DAT_0052c3ec & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0052c3ec), iVar1 != 0)) {
              *DAT_0052c3f0 = DAT_0052c3f4;
            }
            if (DAT_0052c3f0 != param_2) {
              if (((*DAT_0052c3f8 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0052c3f8), iVar1 != 0)) {
                *DAT_0052c3fc = DAT_0052c400;
              }
              if (DAT_0052c3fc != param_2) {
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

