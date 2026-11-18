#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00549d60;
extern undefined4 *DAT_00549d64;
extern undefined4 DAT_00549d68;
extern uint *DAT_00549d6c;
extern undefined4 *DAT_00549d70;
extern undefined4 DAT_00549d74;

// USA 00549CE8 <- EU 00549CC0 (Ghidra, non-matching)
// GLOBAL DAT_00549d60 uint *
// GLOBAL DAT_00549d64 undefined4 *
// GLOBAL DAT_00549d68 undefined4
// GLOBAL DAT_00549d6c uint *
// GLOBAL DAT_00549d70 undefined4 *
// GLOBAL DAT_00549d74 undefined4

undefined4 func_00549CE8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00549d60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549d60), iVar1 != 0)) {
    *DAT_00549d64 = DAT_00549d68;
  }
  if (DAT_00549d64 != param_2) {
    if (((*DAT_00549d6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549d6c), iVar1 != 0)) {
      *DAT_00549d70 = DAT_00549d74;
    }
    if (DAT_00549d70 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

