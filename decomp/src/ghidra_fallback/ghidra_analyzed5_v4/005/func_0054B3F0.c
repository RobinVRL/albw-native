#include "ghidra_types.h"

extern int func_0058DA24(int param_1);
extern int *DAT_0054b404;

// USA 0054B3F0 <- EU 0054B3C8 (Ghidra, non-matching)
// GLOBAL DAT_0054b404 int *

undefined4 func_0054B3F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(short *)(param_1 + 0xee) == -1) && (*DAT_0054b404 != 0)) &&
     (iVar1 = func_0058DA24(*DAT_0054b404), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

