#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00579b9c;
extern undefined4 *DAT_00579ba0;
extern undefined4 DAT_00579ba4;
extern uint *DAT_00579ba8;
extern undefined4 *DAT_00579bac;
extern undefined4 DAT_00579bb0;
extern uint *DAT_00579bb4;
extern undefined4 *DAT_00579bb8;
extern undefined4 DAT_00579bbc;

// USA 00579AE0 <- EU 00579AB8 (Ghidra, non-matching)
// GLOBAL DAT_00579b9c uint *
// GLOBAL DAT_00579ba0 undefined4 *
// GLOBAL DAT_00579ba4 undefined4
// GLOBAL DAT_00579ba8 uint *
// GLOBAL DAT_00579bac undefined4 *
// GLOBAL DAT_00579bb0 undefined4
// GLOBAL DAT_00579bb4 uint *
// GLOBAL DAT_00579bb8 undefined4 *
// GLOBAL DAT_00579bbc undefined4

undefined4 func_00579AE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00579b9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579b9c), iVar1 != 0)) {
    *DAT_00579ba0 = DAT_00579ba4;
  }
  if (DAT_00579ba0 != param_2) {
    if (((*DAT_00579ba8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579ba8), iVar1 != 0)) {
      *DAT_00579bac = DAT_00579bb0;
    }
    if (DAT_00579bac != param_2) {
      if (((*DAT_00579bb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579bb4), iVar1 != 0)) {
        *DAT_00579bb8 = DAT_00579bbc;
      }
      if (DAT_00579bb8 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

