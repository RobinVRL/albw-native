#include "ghidra_types.h"

extern undefined *DAT_0011b278;
extern int DAT_0011b27c;

// USA 0011B264 <- EU 0011B264 (Ghidra, non-matching)
// GLOBAL DAT_0011b278 undefined *
// GLOBAL DAT_0011b27c int

int func_0011B264(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b27c;
  pcVar1 = DAT_0011b278;
  iVar3 = DAT_0011b27c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

