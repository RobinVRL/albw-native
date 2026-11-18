#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00549e40;
extern undefined4 *DAT_00549e44;
extern undefined4 DAT_00549e48;
extern uint *DAT_00549e4c;
extern undefined4 *DAT_00549e50;
extern undefined4 DAT_00549e54;

// USA 00549DC8 <- EU 00549DA0 (Ghidra, non-matching)
// GLOBAL DAT_00549e40 uint *
// GLOBAL DAT_00549e44 undefined4 *
// GLOBAL DAT_00549e48 undefined4
// GLOBAL DAT_00549e4c uint *
// GLOBAL DAT_00549e50 undefined4 *
// GLOBAL DAT_00549e54 undefined4

undefined4 func_00549DC8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00549e40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549e40), iVar1 != 0)) {
    *DAT_00549e44 = DAT_00549e48;
  }
  if (DAT_00549e44 != param_2) {
    if (((*DAT_00549e4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549e4c), iVar1 != 0)) {
      *DAT_00549e50 = DAT_00549e54;
    }
    if (DAT_00549e50 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

