#include "ghidra_types.h"


// USA 00320CF8 <- EU 00320CD4 (Ghidra, non-matching)

void * func_00320CF8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    *(char *)(param_1 + iVar1 + 0xf0) = (char)iVar1;
    iVar2 = iVar2 + 2;
    *(char *)(param_1 + iVar1 + 1 + 0xf0) = (char)(iVar1 + 1);
    iVar1 = iVar1 + 2;
  } while (iVar2 < 0x14);
  return (void *)param_1;
}

