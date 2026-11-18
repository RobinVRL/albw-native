#include "ghidra_types.h"

extern int func_003929C4(int *param_1);

// USA 00287F7C <- EU 00287FA4 (Ghidra, non-matching)

void func_00287F7C(int param_1)

{
  int iVar1;
  
  iVar1 = func_003929C4((int *)(param_1 + 0x46c));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

