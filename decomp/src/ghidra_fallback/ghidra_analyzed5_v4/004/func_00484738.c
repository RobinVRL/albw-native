#include "ghidra_types.h"

extern int func_00392850(int param_1,uint param_2);
extern int func_005844FC(int param_1);
extern int func_00584788(int param_1);
extern int func_0066F030(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0048476c;
extern undefined4 *DAT_00484770;
extern int *DAT_00484774;

// USA 00484738 <- EU 00484710 (Ghidra, non-matching)
// GLOBAL DAT_0048476c undefined4
// GLOBAL DAT_00484770 undefined4 *
// GLOBAL DAT_00484774 int *

void func_00484738(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_00484774;
  if (0x3b < *(int *)(param_1 + 0x74)) {
    *DAT_00484770 = DAT_0048476c;
    uVar2 = func_005844FC(*piVar1);
    func_00392850(*(int *)(param_1 + 0xe4),uVar2);
    uVar2 = func_00584788(*piVar1);
    func_00392850(*(int *)(param_1 + 0xe8),uVar2);
    func_0066F030((undefined4 *)(param_1 + 0x74),1);
  }
  return;
}

