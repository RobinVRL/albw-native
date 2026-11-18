#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005303cc;
extern undefined4 *DAT_005303d0;
extern undefined4 DAT_005303d4;
extern uint *DAT_005303d8;
extern undefined4 *DAT_005303dc;
extern undefined4 DAT_005303e0;
extern uint *DAT_005303e4;
extern undefined4 *DAT_005303e8;
extern undefined4 DAT_005303ec;
extern uint *DAT_005303f0;
extern undefined4 *DAT_005303f4;
extern undefined4 DAT_005303f8;

// USA 005302D0 <- EU 005302A8 (Ghidra, non-matching)
// GLOBAL DAT_005303cc uint *
// GLOBAL DAT_005303d0 undefined4 *
// GLOBAL DAT_005303d4 undefined4
// GLOBAL DAT_005303d8 uint *
// GLOBAL DAT_005303dc undefined4 *
// GLOBAL DAT_005303e0 undefined4
// GLOBAL DAT_005303e4 uint *
// GLOBAL DAT_005303e8 undefined4 *
// GLOBAL DAT_005303ec undefined4
// GLOBAL DAT_005303f0 uint *
// GLOBAL DAT_005303f4 undefined4 *
// GLOBAL DAT_005303f8 undefined4

undefined4 func_005302D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005303cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005303cc), iVar1 != 0)) {
    *DAT_005303d0 = DAT_005303d4;
  }
  if (DAT_005303d0 != param_2) {
    if (((*DAT_005303d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005303d8), iVar1 != 0)) {
      *DAT_005303dc = DAT_005303e0;
    }
    if (DAT_005303dc != param_2) {
      if (((*DAT_005303e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005303e4), iVar1 != 0)) {
        *DAT_005303e8 = DAT_005303ec;
      }
      if (DAT_005303e8 != param_2) {
        if (((*DAT_005303f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005303f0), iVar1 != 0))
        {
          *DAT_005303f4 = DAT_005303f8;
        }
        if (DAT_005303f4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

