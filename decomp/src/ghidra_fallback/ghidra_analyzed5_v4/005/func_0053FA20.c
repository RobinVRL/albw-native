#include "ghidra_types.h"

extern int func_00559328(int param_1);
extern int DAT_0053fa1c;

// USA 0053FA20 <- EU 0053F9F8 (Ghidra, non-matching)
// GLOBAL DAT_0053fa1c int

int func_0053FA20(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_0053fa1c + *(short *)(param_1 + 0x42) * 0x10) == '\v') {
    iVar1 = func_00559328(*(int *)(param_1 + 0x48));
    return iVar1;
  }
  return 0;
}

