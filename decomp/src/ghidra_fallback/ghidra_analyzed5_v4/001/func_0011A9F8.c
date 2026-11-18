#include "ghidra_types.h"

extern undefined *DAT_0011aa0c;
extern int DAT_0011aa10;

// USA 0011A9F8 <- EU 0011A9F8 (Ghidra, non-matching)
// GLOBAL DAT_0011aa0c undefined *
// GLOBAL DAT_0011aa10 int

int func_0011A9F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aa10;
  pcVar1 = DAT_0011aa0c;
  iVar3 = DAT_0011aa10 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

