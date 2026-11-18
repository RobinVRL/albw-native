#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int DAT_003c8f44;

// USA 003C8F1C <- EU 003C8EF8 (Ghidra, non-matching)
// GLOBAL DAT_003c8f44 int

undefined4 func_003C8F1C(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = DAT_003c8f44;
  piVar2 = (int *)(DAT_003c8f44 + 0x30);
  func_0010C0C0(piVar2);
  *param_1 = *(int *)(iVar1 + 0x24);
  *(int **)(iVar1 + 0x24) = param_1;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  return func_0010C160(piVar2);
}

