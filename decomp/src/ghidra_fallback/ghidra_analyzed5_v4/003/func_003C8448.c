#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003C8448 <- EU 003C8424 (Ghidra, non-matching)

undefined4 func_003C8448(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = param_1[1];
  func_0010C0C0((int *)(iVar1 + 0xe8));
  *param_1 = *(int *)(iVar1 + 0xdc);
  *(int **)(iVar1 + 0xdc) = param_1;
  *(int *)(iVar1 + 0xe4) = *(int *)(iVar1 + 0xe4) + -1;
  return func_0010C160((int *)(iVar1 + 0xe8));
}

