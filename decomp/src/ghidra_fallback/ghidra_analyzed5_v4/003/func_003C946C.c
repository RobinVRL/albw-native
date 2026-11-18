#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int DAT_003c9498;

// USA 003C946C <- EU 003C9448 (Ghidra, non-matching)
// GLOBAL DAT_003c9498 int

undefined4 func_003C946C(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = *(int *)(DAT_003c9498 + 4);
  func_0010C0C0((int *)(iVar1 + 0x30));
  *param_1 = *(int *)(iVar1 + 0x24);
  *(int **)(iVar1 + 0x24) = param_1;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  return func_0010C160((int *)(iVar1 + 0x30));
}

