#include "ghidra_types.h"


// USA 003FDF90 <- EU 003FDF70 (Ghidra, non-matching)

int func_003FDF90(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  do {
    if (piVar3 == (int *)(param_1 + 4)) {
      return 0;
    }
    iVar2 = 0;
    while (cVar1 = *(char *)((int)piVar3 + iVar2 + 0x14), cVar1 == *(char *)(param_2 + iVar2)) {
      if ((cVar1 == '\0') || (iVar2 = iVar2 + 1, 0x17 < iVar2)) {
        return (int)(piVar3 + -1);
      }
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}

