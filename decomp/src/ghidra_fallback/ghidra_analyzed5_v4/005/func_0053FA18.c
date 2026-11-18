#include "ghidra_types.h"

extern int func_00559328(int param_1);
extern int DAT_0053fa1c;

// USA 0053FA18 <- EU 0053F9F0 (Ghidra, non-matching)
// GLOBAL DAT_0053fa1c int

int func_0053FA18(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_0053fa1c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\v') {
    iVar1 = func_00559328(*(int *)(*(int *)(param_1 + 0x14) + 0x48));
    return iVar1;
  }
  return 0;
}

