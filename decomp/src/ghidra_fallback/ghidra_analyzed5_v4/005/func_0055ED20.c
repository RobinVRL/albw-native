#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_0055ed98;
extern undefined4 *DAT_0055ed9c;
extern undefined4 DAT_0055eda0;
extern uint *DAT_0055eda4;
extern undefined4 *DAT_0055eda8;
extern undefined4 DAT_0055edac;

// USA 0055ED20 <- EU 0055ECF8 (Ghidra, non-matching)
// GLOBAL DAT_0055ed98 uint *
// GLOBAL DAT_0055ed9c undefined4 *
// GLOBAL DAT_0055eda0 undefined4
// GLOBAL DAT_0055eda4 uint *
// GLOBAL DAT_0055eda8 undefined4 *
// GLOBAL DAT_0055edac undefined4

undefined4 func_0055ED20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055ed98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ed98), iVar1 != 0)) {
    *DAT_0055ed9c = DAT_0055eda0;
  }
  if (DAT_0055ed9c != param_2) {
    if (((*DAT_0055eda4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055eda4), iVar1 != 0)) {
      *DAT_0055eda8 = DAT_0055edac;
    }
    if (DAT_0055eda8 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

