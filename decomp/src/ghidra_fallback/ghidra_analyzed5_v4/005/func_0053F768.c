#include "ghidra_types.h"

extern int func_0055B76C(int param_1);
extern int DAT_0053f77c;

// USA 0053F768 <- EU 0053F740 (Ghidra, non-matching)
// GLOBAL DAT_0053f77c int

undefined4 func_0053F768(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(DAT_0053f77c + *(short *)(param_1 + 0x42) * 0x10) == '\n') &&
      (*(int *)(param_1 + 0x48) != 0)) &&
     (iVar1 = func_0055B76C(*(int *)(param_1 + 0x48)), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

