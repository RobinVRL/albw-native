#include "ghidra_types.h"

extern int DAT_002333f0;

// USA 00233370 <- EU 00233370 (Ghidra, non-matching)
// GLOBAL DAT_002333f0 int

void * func_00233370(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * DAT_002333f0 * 4;
    iVar3 = *(int *)(iVar1 + 0x1624);
    if (param_2 < *(uint *)(iVar1 + 0x161c)) {
      iVar3 = iVar3 + param_2 * 0x38;
    }
    if (*(char *)(iVar3 + 0x34) != '\0') {
      iVar3 = *(int *)(iVar1 + 0x1624);
      if (param_2 < *(uint *)(iVar1 + 0x161c)) {
        iVar3 = iVar3 + param_2 * 0x38;
      }
      *(undefined1 *)(iVar3 + 0x36) = 1;
      iVar3 = *(int *)(iVar1 + 0x1624);
      if (param_2 < *(uint *)(iVar1 + 0x161c)) {
        iVar3 = iVar3 + param_2 * 0x38;
      }
      *(undefined1 *)(iVar3 + 0x34) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return (void *)param_1;
}

