#include "ghidra_types.h"

extern int func_0023DCD8(int param_1);
extern int func_004C6D4C(int param_1,uint param_2);
extern int *DAT_0023e0a0;
extern int *DAT_0023e0a4;

// USA 0023E054 <- EU 0023E054 (Ghidra, non-matching)
// GLOBAL DAT_0023e0a0 int *
// GLOBAL DAT_0023e0a4 int *

void func_0023E054(int param_1)

{
  int iVar1;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 uVar2;
  
  func_0023DCD8(param_1);
  uVar2 = extraout_r1;
  if (*DAT_0023e0a0 != 0) {
    func_004C6D4C(*DAT_0023e0a0,(int)*(short *)(param_1 + 0x2c));
    uVar2 = extraout_r1_00;
  }
  iVar1 = *(int *)(*(int *)(*DAT_0023e0a4 + 300) + 0x28);
  if (iVar1 != 0) {
    uVar2 = 1;
  }
  *(int *)(param_1 + 0x7d4) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xe) = uVar2;
  }
  return;
}

