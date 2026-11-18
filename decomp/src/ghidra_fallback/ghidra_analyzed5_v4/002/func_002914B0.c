#include "ghidra_types.h"

extern int *DAT_0029153c;

// USA 002914B0 <- EU 002914D8 (Ghidra, non-matching)
// GLOBAL DAT_0029153c int *

void * func_002914B0(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xd0) = 1;
  iVar1 = *DAT_0029153c;
  if (*(char *)(iVar1 + 0x18) == '\0') {
    iVar1 = *(int *)(iVar1 + 0x1c);
    if ((iVar1 != 2 && iVar1 != 0xf) && (iVar1 != 0x11 && iVar1 != 0x24)) {
      return (void *)param_1;
    }
  }
  else {
    if (*(char *)(iVar1 + 0x18) != '\x01') {
      return (void *)param_1;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if ((iVar1 != 8 && iVar1 != 0x11) && iVar1 != 0x1a) {
      return (void *)param_1;
    }
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return (void *)param_1;
}

