#include "ghidra_types.h"


// USA 002B1FB4 <- EU 002B1F90 (Ghidra, non-matching)

void func_002B1FB4(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x510);
  if (param_2 < 0) {
    param_2 = 4;
  }
  *(char *)(iVar1 + 0x158) = (char)param_2;
  puVar2 = (ushort *)(iVar1 + 0x160);
  *puVar2 = *puVar2 | param_3;
  return;
}

