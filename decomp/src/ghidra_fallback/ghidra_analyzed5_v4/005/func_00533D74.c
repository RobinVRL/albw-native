#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00533dec;
extern undefined4 *DAT_00533df0;
extern undefined4 DAT_00533df4;
extern uint *DAT_00533df8;
extern undefined4 *DAT_00533dfc;
extern undefined4 DAT_00533e00;

// USA 00533D74 <- EU 00533D4C (Ghidra, non-matching)
// GLOBAL DAT_00533dec uint *
// GLOBAL DAT_00533df0 undefined4 *
// GLOBAL DAT_00533df4 undefined4
// GLOBAL DAT_00533df8 uint *
// GLOBAL DAT_00533dfc undefined4 *
// GLOBAL DAT_00533e00 undefined4

undefined4 func_00533D74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00533dec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533dec), iVar1 != 0)) {
    *DAT_00533df0 = DAT_00533df4;
  }
  if (DAT_00533df0 != param_2) {
    if (((*DAT_00533df8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533df8), iVar1 != 0)) {
      *DAT_00533dfc = DAT_00533e00;
    }
    if (DAT_00533dfc != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

