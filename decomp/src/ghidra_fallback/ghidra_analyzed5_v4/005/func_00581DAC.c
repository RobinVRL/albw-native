#include "ghidra_types.h"

extern int DAT_00581dc8;
extern int DAT_00581dcc;

// USA 00581DAC <- EU 00581D84 (Ghidra, non-matching)
// GLOBAL DAT_00581dc8 int
// GLOBAL DAT_00581dcc int

int func_00581DAC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (((iVar1 == 0) || (*(short *)(DAT_00581dc8 + iVar1) < 0)) ||
     (iVar1 = iVar1 + *(short *)(DAT_00581dc8 + iVar1) * DAT_00581dcc * 4, iVar1 == -0x183c)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(iVar1 + 0x1c3b);
  }
  return iVar1;
}

