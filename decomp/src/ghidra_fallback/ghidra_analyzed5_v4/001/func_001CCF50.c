#include "ghidra_types.h"

extern int func_00547514(int param_1);
extern int func_00556BE0(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_001ccfa0;

// USA 001CCF50 <- EU 001CCF50 (Ghidra, non-matching)
// GLOBAL DAT_001ccfa0 int *

void func_001CCF50(int param_1)

{
  int iVar1;
  
  iVar1 = func_00556BE0(*DAT_001ccfa0);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x36) == 0) {
      func_00547514(param_1 + 4);
    }
    else {
      func_00588C14(param_1,0,1);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

