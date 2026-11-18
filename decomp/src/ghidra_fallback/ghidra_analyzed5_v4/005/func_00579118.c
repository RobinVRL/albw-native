#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_005791d4;
extern undefined4 *DAT_005791d8;
extern undefined4 DAT_005791dc;
extern uint *DAT_005791e0;
extern undefined4 *DAT_005791e4;
extern undefined4 DAT_005791e8;
extern uint *DAT_005791ec;
extern undefined4 *DAT_005791f0;
extern undefined4 DAT_005791f4;

// USA 00579118 <- EU 005790F0 (Ghidra, non-matching)
// GLOBAL DAT_005791d4 uint *
// GLOBAL DAT_005791d8 undefined4 *
// GLOBAL DAT_005791dc undefined4
// GLOBAL DAT_005791e0 uint *
// GLOBAL DAT_005791e4 undefined4 *
// GLOBAL DAT_005791e8 undefined4
// GLOBAL DAT_005791ec uint *
// GLOBAL DAT_005791f0 undefined4 *
// GLOBAL DAT_005791f4 undefined4

undefined4 func_00579118(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005791d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005791d4), iVar1 != 0)) {
    *DAT_005791d8 = DAT_005791dc;
  }
  if (DAT_005791d8 != param_2) {
    if (((*DAT_005791e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005791e0), iVar1 != 0)) {
      *DAT_005791e4 = DAT_005791e8;
    }
    if (DAT_005791e4 != param_2) {
      if (((*DAT_005791ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005791ec), iVar1 != 0)) {
        *DAT_005791f0 = DAT_005791f4;
      }
      if (DAT_005791f0 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

