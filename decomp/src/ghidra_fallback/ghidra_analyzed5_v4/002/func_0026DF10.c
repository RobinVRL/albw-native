#include "ghidra_types.h"

extern undefined4 DAT_0026dfb4;

// USA 0026DF10 <- EU 0026DF38 (Ghidra, non-matching)
// GLOBAL DAT_0026dfb4 undefined4

void func_0026DF10(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x8e) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x82) = 0;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x74))(*(undefined4 **)(param_1 + 0x74),0,0,1);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 4) + 0x14))(*(int **)(*(int *)(param_1 + 0x74) + 4));
  uVar1 = DAT_0026dfb4;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  return;
}

