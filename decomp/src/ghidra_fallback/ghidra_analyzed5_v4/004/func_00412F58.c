#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00412FD4(int param_1);
extern int DAT_00412f80;
extern int *DAT_00412f84;
extern int DAT_00412f88;
extern undefined4 DAT_00412f8c;
extern undefined4 DAT_00412f90;

// USA 00412F58 <- EU 00412F38 (Ghidra, non-matching)
// GLOBAL DAT_00412f80 int
// GLOBAL DAT_00412f84 int *
// GLOBAL DAT_00412f88 int
// GLOBAL DAT_00412f8c undefined4
// GLOBAL DAT_00412f90 undefined4

int func_00412F58(void)

{
  int iVar1;
  
  if (((*(uint *)(DAT_00412f80 + 4) & 1) == 0) && (iVar1 = func_00100174(DAT_00412f84), iVar1 != 0))
  {
    func_00412FD4(DAT_00412f88);
  }
  return DAT_00412f88;
}

