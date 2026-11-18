#include "ghidra_types.h"


// USA 00419AF4 <- EU 00419AD4 (Ghidra, non-matching)

void * func_00419AF4(int param_1,ushort param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      if ((char)piVar1[-0x11] != '\0') {
        *(ushort *)(piVar1 + -0xe) = *(ushort *)(piVar1 + -0xe) | param_2;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
    return (void *)param_1;
  }
  return (void *)param_1;
}

