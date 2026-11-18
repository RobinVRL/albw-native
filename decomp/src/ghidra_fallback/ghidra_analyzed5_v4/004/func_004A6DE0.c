#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_001118B8(int param_1);

// USA 004A6DE0 <- EU 004A6DB8 (Ghidra, non-matching)

void func_004A6DE0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (uVar1 = func_001118B8(param_1 + 8), uVar1 != 0)) {
    func_00110DDC((undefined4 *)(param_1 + 0x44),0);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x10) + 4))(*(int **)(*(int *)(param_1 + 0x1c) + 0x10));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

