#include "ghidra_types.h"

extern int DAT_003dc340;

// USA 003DC2F0 <- EU 003DC2D0 (Ghidra, non-matching)
// GLOBAL DAT_003dc340 int

int func_003DC2F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = (char)iVar1 + param_1;
    if (*(char *)(iVar3 + 4) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(char *)(iVar3 + 8);
    }
    iVar4 = (int)(char)iVar1 + param_1 + 2;
    iVar1 = iVar1 + 1;
    if (*(char *)(iVar4 + 4) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)*(char *)(iVar4 + 8);
    }
    iVar2 = iVar2 + iVar3 * DAT_003dc340 * 0x10 + iVar4 * DAT_003dc340 * 0x40;
  } while (iVar1 < 2);
  return iVar2;
}

