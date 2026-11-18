#include "ghidra_types.h"


// USA 002AED24 <- EU 002AED00 (Ghidra, non-matching)

void * func_002AED24(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((*(char *)(iVar1 + 0x853) == '\0') && (*(char *)(iVar1 + 0x7fc) != '\x05')) {
    *(bool *)(param_1 + 0xa4) = *(uint *)(iVar1 + 0x73c) < *(uint *)(iVar1 + 0x740);
    return (void *)param_1;
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  return (void *)param_1;
}

