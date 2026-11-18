#include "ghidra_types.h"

extern int func_004C45C4(int param_1);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern undefined *DAT_004c43b0;
extern int DAT_004c43b4;

// USA 004C4364 <- EU 004C433C (Ghidra, non-matching)
// GLOBAL DAT_004c43b0 undefined *
// GLOBAL DAT_004c43b4 int

void func_004C4364(int param_1)

{
  int iVar1;
  
  func_0052FD7C(param_1 + 0x3dbbc,DAT_004c43b0,0);
  func_004C45C4(param_1);
  iVar1 = DAT_004c43b4;
  *(undefined4 *)(DAT_004c43b4 + param_1) = 0;
  *(undefined4 *)(iVar1 + -4 + param_1) = 0;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(*(int **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

