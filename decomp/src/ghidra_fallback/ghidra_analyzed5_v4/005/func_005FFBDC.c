#include "ghidra_types.h"

extern int DAT_005ffbec;

// USA 005FFBDC <- EU 005FFBB4 (Ghidra, non-matching)
// GLOBAL DAT_005ffbec int

void func_005FFBDC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_005ffbec + 0x9c);
  if (iVar1 != 0) {
    if (param_1 == -1) {
      *(undefined1 *)(iVar1 + 0x3c) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(iVar1 + 0x18) + param_1 * 0x1c + -0x1b) = 1;
    }
  }
  return;
}

