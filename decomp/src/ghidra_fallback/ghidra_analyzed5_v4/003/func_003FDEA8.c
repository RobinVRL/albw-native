#include "ghidra_types.h"


// USA 003FDEA8 <- EU 003FDE88 (Ghidra, non-matching)

undefined4 func_003FDEA8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    if (piVar2 == (int *)(param_1 + 4)) {
      return 0;
    }
    iVar1 = 0;
    while (*(char *)(param_2 + iVar1) == *(char *)((int)piVar2 + iVar1 + 8)) {
      if ((*(char *)(param_2 + iVar1) == '\0') || (iVar1 = iVar1 + 1, 0x7f < iVar1)) {
        return piVar2[0x22];
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

