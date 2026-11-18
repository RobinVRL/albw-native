#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0016ea50;
extern undefined4 *DAT_0016ea54;
extern undefined4 DAT_0016ea58;

// USA 0016E9D4 <- EU 0016E9D4 (Ghidra, non-matching)
// GLOBAL DAT_0016ea50 uint *
// GLOBAL DAT_0016ea54 undefined4 *
// GLOBAL DAT_0016ea58 undefined4

void func_0016E9D4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  
  *(undefined4 **)(param_1 + 0x3d0) = param_2;
  puVar1 = DAT_0016ea50;
  if (param_2 != (undefined4 *)0x0) {
    param_2[3] = param_1;
    if (((*puVar1 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0016ea50), iVar2 != 0)) {
      *DAT_0016ea54 = DAT_0016ea58;
    }
    iVar2 = (**(code **)*param_2)(param_2,DAT_0016ea54);
    if (iVar2 == 0) {
      param_2 = (undefined4 *)0x0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x3ff) = *(undefined1 *)((int)param_2 + 0x29);
    }
    return;
  }
  return;
}

