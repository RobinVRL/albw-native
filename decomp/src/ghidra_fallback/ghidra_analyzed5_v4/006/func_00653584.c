#include "ghidra_types.h"

extern int func_0051C8D0(int param_1);
extern int func_0058D6D0(int param_1);
extern int *DAT_006535a0;

// USA 00653584 <- EU 0065355C (Ghidra, non-matching)
// GLOBAL DAT_006535a0 int *

undefined4 func_00653584(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_006535a0;
  iVar2 = func_0058D6D0(*DAT_006535a0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x9d4) == '\0') {
      *(undefined1 *)(param_1 + 0x9d4) = 1;
      func_0051C8D0(*piVar1);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

