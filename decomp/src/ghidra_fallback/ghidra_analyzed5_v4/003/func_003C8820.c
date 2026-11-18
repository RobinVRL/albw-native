#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003C8820 <- EU 003C87FC (Ghidra, non-matching)

undefined4 func_003C8820(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))(param_1);
  iVar1 = param_1[1];
  func_0010C0C0((int *)(iVar1 + 0x124));
  *param_1 = *(int *)(iVar1 + 0x118);
  *(int **)(iVar1 + 0x118) = param_1;
  *(int *)(iVar1 + 0x120) = *(int *)(iVar1 + 0x120) + -1;
  return func_0010C160((int *)(iVar1 + 0x124));
}

