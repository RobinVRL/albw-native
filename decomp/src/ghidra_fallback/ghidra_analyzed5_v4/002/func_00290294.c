#include "ghidra_types.h"

extern int DAT_002902f0;

// USA 00290294 <- EU 002902BC (Ghidra, non-matching)
// GLOBAL DAT_002902f0 int

void func_00290294(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(DAT_002902f0 + *(short *)(iVar1 + 0x42) * 0x10) == '\x15') {
    *(char *)(*(int *)(iVar1 + 0x48) + 0x8b) = (char)param_2;
  }
  else if (param_2 == 0) {
    *(undefined1 *)(iVar1 + 0xcb) = 1;
  }
  return;
}

