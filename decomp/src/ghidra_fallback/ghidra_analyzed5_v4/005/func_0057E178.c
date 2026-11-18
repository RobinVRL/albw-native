#include "ghidra_types.h"


// USA 0057E178 <- EU 0057E150 (Ghidra, non-matching)

undefined4 func_0057E178(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  while( true ) {
    iVar1 = iVar1 - *(int *)(param_1 + 0xcc);
    if (iVar1 == (param_1 + 0xc0) - *(int *)(param_1 + 0xcc)) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0xc) == param_2) break;
    iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0xcc) + 4);
  }
  return iVar1;
}

