#include "ghidra_types.h"

extern int func_00559268(int param_1);
extern int DAT_0053f2a8;

// USA 0053F29C <- EU 0053F274 (Ghidra, non-matching)
// GLOBAL DAT_0053f2a8 int

undefined4 func_0053F29C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(DAT_0053f2a8 + *(short *)(param_1 + 0x42) * 0x10);
  if (cVar1 == '\x11') {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x70);
  }
  else {
    if (cVar1 == '\v') {
      uVar2 = func_00559268(*(int *)(param_1 + 0x48));
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

