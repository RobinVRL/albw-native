#include "ghidra_types.h"


// USA 005830CC <- EU 005830A4 (Ghidra, non-matching)

undefined4 func_005830CC(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x620)) {
      iVar1 = *(int *)(param_1 + 0x624) + *(uint *)(param_2 + 0x14) * 0x104;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x624);
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x61c);
  }
  return 4;
}

