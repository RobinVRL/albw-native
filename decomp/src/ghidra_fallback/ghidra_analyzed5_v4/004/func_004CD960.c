#include "ghidra_types.h"

extern int func_0049F634(undefined4 *param_1);
extern int func_0049F688(int param_1);

// USA 004CD960 <- EU 004CD938 (Ghidra, non-matching)

undefined4 func_004CD960(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) < 1) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      return 1;
    }
    piVar1 = func_0049F688(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)((int)piVar1 - *(int *)(param_1 + 0x20));
    }
    *(int **)(param_1 + 0x44) = piVar1;
    pcVar2 = *(code **)(*piVar1 + 0x10);
  }
  else {
    piVar1 = func_0049F634((undefined4 *)(param_1 + 0x24));
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)((int)piVar1 - *(int *)(param_1 + 0x30));
    }
    *(int **)(param_1 + 0x44) = piVar1;
    pcVar2 = *(code **)(*piVar1 + 0x18);
  }
  (*pcVar2)();
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))(*(int **)(param_1 + 0x44));
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return 1;
}

