#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005226cc;
extern undefined4 *DAT_005226d0;
extern undefined4 DAT_005226d4;
extern uint *DAT_005226d8;
extern undefined4 *DAT_005226dc;
extern undefined4 DAT_005226e0;
extern uint *DAT_005226e4;
extern undefined4 *DAT_005226e8;
extern undefined4 DAT_005226ec;
extern uint *DAT_005226f0;
extern undefined4 *DAT_005226f4;
extern undefined4 DAT_005226f8;

// USA 005225D0 <- EU 005225A8 (Ghidra, non-matching)
// GLOBAL DAT_005226cc uint *
// GLOBAL DAT_005226d0 undefined4 *
// GLOBAL DAT_005226d4 undefined4
// GLOBAL DAT_005226d8 uint *
// GLOBAL DAT_005226dc undefined4 *
// GLOBAL DAT_005226e0 undefined4
// GLOBAL DAT_005226e4 uint *
// GLOBAL DAT_005226e8 undefined4 *
// GLOBAL DAT_005226ec undefined4
// GLOBAL DAT_005226f0 uint *
// GLOBAL DAT_005226f4 undefined4 *
// GLOBAL DAT_005226f8 undefined4

undefined4 func_005225D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005226cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005226cc), iVar1 != 0)) {
    *DAT_005226d0 = DAT_005226d4;
  }
  if (DAT_005226d0 != param_2) {
    if (((*DAT_005226d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005226d8), iVar1 != 0)) {
      *DAT_005226dc = DAT_005226e0;
    }
    if (DAT_005226dc != param_2) {
      if (((*DAT_005226e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005226e4), iVar1 != 0)) {
        *DAT_005226e8 = DAT_005226ec;
      }
      if (DAT_005226e8 != param_2) {
        if (((*DAT_005226f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005226f0), iVar1 != 0))
        {
          *DAT_005226f4 = DAT_005226f8;
        }
        if (DAT_005226f4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

