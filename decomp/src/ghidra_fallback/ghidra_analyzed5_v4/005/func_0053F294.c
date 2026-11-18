#include "ghidra_types.h"

extern int func_00559268(int param_1);
extern int DAT_0053f2a8;

// USA 0053F294 <- EU 0053F26C (Ghidra, non-matching)
// GLOBAL DAT_0053f2a8 int

undefined4 func_0053F294(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  cVar1 = *(char *)(DAT_0053f2a8 + *(short *)(iVar2 + 0x42) * 0x10);
  if (cVar1 == '\x11') {
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x48) + 0x70);
  }
  else {
    if (cVar1 == '\v') {
      uVar3 = func_00559268(*(int *)(iVar2 + 0x48));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}

