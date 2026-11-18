#include "ghidra_types.h"

extern int func_00660208(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002608ec;

// USA 00260848 <- EU 00260870 (Ghidra, non-matching)
// GLOBAL DAT_002608ec int *

void func_00260848(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar1 == param_1[0xd]) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((iVar1 == 0) &&
       ((1 < *(int *)(*(int *)(*DAT_002608ec + 0x130) + 0x50) || (param_1[0x13] < param_1[3])))) {
      *(undefined1 *)(param_1 + 0x11) = 1;
      return;
    }
  }
  else {
    func_00660208(param_1 + 3,0);
  }
  return;
}

