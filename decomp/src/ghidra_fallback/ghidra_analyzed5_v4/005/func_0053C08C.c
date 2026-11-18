#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c1cc;
extern undefined4 *DAT_0053c1d0;
extern undefined4 DAT_0053c1d4;
extern uint *DAT_0053c1d8;
extern undefined4 *DAT_0053c1dc;
extern undefined4 DAT_0053c1e0;
extern uint *DAT_0053c1e4;
extern undefined4 *DAT_0053c1e8;
extern undefined4 DAT_0053c1ec;
extern uint *DAT_0053c1f0;
extern undefined4 *DAT_0053c1f4;
extern undefined4 DAT_0053c1f8;
extern uint *DAT_0053c1fc;
extern undefined4 *DAT_0053c200;
extern undefined4 DAT_0053c204;

// USA 0053C08C <- EU 0053C064 (Ghidra, non-matching)
// GLOBAL DAT_0053c1cc uint *
// GLOBAL DAT_0053c1d0 undefined4 *
// GLOBAL DAT_0053c1d4 undefined4
// GLOBAL DAT_0053c1d8 uint *
// GLOBAL DAT_0053c1dc undefined4 *
// GLOBAL DAT_0053c1e0 undefined4
// GLOBAL DAT_0053c1e4 uint *
// GLOBAL DAT_0053c1e8 undefined4 *
// GLOBAL DAT_0053c1ec undefined4
// GLOBAL DAT_0053c1f0 uint *
// GLOBAL DAT_0053c1f4 undefined4 *
// GLOBAL DAT_0053c1f8 undefined4
// GLOBAL DAT_0053c1fc uint *
// GLOBAL DAT_0053c200 undefined4 *
// GLOBAL DAT_0053c204 undefined4

undefined4 func_0053C08C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c1cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c1cc), iVar1 != 0)) {
    *DAT_0053c1d0 = DAT_0053c1d4;
  }
  if (DAT_0053c1d0 != param_2) {
    if (((*DAT_0053c1d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c1d8), iVar1 != 0)) {
      *DAT_0053c1dc = DAT_0053c1e0;
    }
    if (DAT_0053c1dc != param_2) {
      if (((*DAT_0053c1e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c1e4), iVar1 != 0)) {
        *DAT_0053c1e8 = DAT_0053c1ec;
      }
      if (DAT_0053c1e8 != param_2) {
        if (((*DAT_0053c1f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c1f0), iVar1 != 0))
        {
          *DAT_0053c1f4 = DAT_0053c1f8;
        }
        if (DAT_0053c1f4 != param_2) {
          if (((*DAT_0053c1fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c1fc), iVar1 != 0)
             ) {
            *DAT_0053c200 = DAT_0053c204;
          }
          if (DAT_0053c200 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

