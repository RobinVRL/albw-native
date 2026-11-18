#include "ghidra_types.h"

extern int func_0066CEE0(undefined4 *param_1,undefined1 param_2);

// USA 00450E3C <- EU 00450E14 (Ghidra, non-matching)

undefined4 func_00450E3C(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x138) + 0x40))(*(int **)(param_1 + 0x138));
  if ((iVar1 != 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x40))(*(int **)(param_1 + 0x13c)), iVar1 != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x138) + 0x54))(*(int **)(param_1 + 0x138));
    if (iVar1 == 0) {
      return func_0066CEE0((undefined4 *)(param_1 + 0x74),3);
    }
    func_0066CEE0((undefined4 *)(param_1 + 0x74),0);
  }
  return 0;
}

