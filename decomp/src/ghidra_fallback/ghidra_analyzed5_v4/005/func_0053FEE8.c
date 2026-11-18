#include "ghidra_types.h"


// USA 0053FEE8 <- EU 0053FEC0 (Ghidra, non-matching)

int func_0053FEE8(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x14) + 0x42);
  if (sVar1 == 0x61 || sVar1 == 0x62) {
    iVar2 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x48) + 0xbb);
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

