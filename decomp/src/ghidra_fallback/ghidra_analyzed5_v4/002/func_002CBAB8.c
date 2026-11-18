#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern undefined4 DAT_002cbb00;
extern undefined4 DAT_002cbb04;

// USA 002CBAB8 <- EU 002CBA94 (Ghidra, non-matching)
// GLOBAL DAT_002cbb00 undefined4
// GLOBAL DAT_002cbb04 undefined4

void func_002CBAB8(int param_1)

{
  int *piVar1;
  
  func_0010B380((undefined4 *)(param_1 + 0x9b0),2,(int *)0x0,4);
  piVar1 = (int *)(param_1 + 0x9b0);
  if (*piVar1 < *(int *)(param_1 + 0x9b4)) {
    *(undefined4 *)(*(int *)(param_1 + 0x9b8) + *piVar1 * 4) = DAT_002cbb00;
    *piVar1 = *piVar1 + 1;
  }
  if (*piVar1 < *(int *)(param_1 + 0x9b4)) {
    *(undefined4 *)(*(int *)(param_1 + 0x9b8) + *piVar1 * 4) = DAT_002cbb04;
    *piVar1 = *piVar1 + 1;
  }
  return;
}

