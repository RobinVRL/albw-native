#include "ghidra_types.h"


// USA 0055C470 <- EU 0055C448 (Ghidra, non-matching)

void func_0055C470(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0xc) < 6) {
    iVar1 = param_2 + 0x1458 + *(uint *)(param_1 + 0xc) * 0x4c;
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}

