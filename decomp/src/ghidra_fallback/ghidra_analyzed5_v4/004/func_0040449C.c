#include "ghidra_types.h"


// USA 0040449C <- EU 0040447C (Ghidra, non-matching)

int func_0040449C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  do {
    if (piVar2 == (int *)(param_1 + 0x2c)) {
      return 0;
    }
    iVar1 = 0;
    while (*(char *)(param_2 + iVar1) == *(char *)((int)piVar2 + iVar1 + -0x24)) {
      if ((*(char *)(param_2 + iVar1) == '\0') || (iVar1 = iVar1 + 1, 0x17 < iVar1)) {
        return (int)(piVar2 + -0x29);
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

