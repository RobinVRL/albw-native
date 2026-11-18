#include "ghidra_types.h"

extern int func_003E0AF0(uint *param_1);

// USA 00414FBC <- EU 00414F9C (Ghidra, non-matching)

int func_00414FBC(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = *(uint **)(param_1 + iVar2 * 4);
    if (puVar1 != (uint *)0x0) {
      func_003E0AF0(puVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return param_1;
}

