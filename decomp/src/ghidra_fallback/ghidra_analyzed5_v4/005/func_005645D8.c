#include "ghidra_types.h"


// USA 005645D8 <- EU 005645B0 (Ghidra, non-matching)

undefined4 func_005645D8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_2 + 4);
  while( true ) {
    while( true ) {
      if (iVar1 == param_1 || iVar2 == param_2) {
        return 0;
      }
      if (*(ushort *)(iVar2 + 8) < *(ushort *)(iVar1 + 8)) break;
      if (*(ushort *)(iVar2 + 8) <= *(ushort *)(iVar1 + 10)) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (*(ushort *)(iVar1 + 8) <= *(ushort *)(iVar2 + 10)) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return 1;
}

