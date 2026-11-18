#include "ghidra_types.h"

extern int *DAT_0053f4c8;
extern int DAT_0053f4cc;

// USA 0053F4BC <- EU 0053F494 (Ghidra, non-matching)
// GLOBAL DAT_0053f4c8 int *
// GLOBAL DAT_0053f4cc int

undefined4 func_0053F4BC(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(*DAT_0053f4c8 + 0x44) != 0) ||
     (uVar1 = 0, (*(uint *)(DAT_0053f4cc + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x40) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

