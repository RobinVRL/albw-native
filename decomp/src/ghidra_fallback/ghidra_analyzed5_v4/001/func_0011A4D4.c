#include "ghidra_types.h"

extern undefined *DAT_0011a4e8;
extern int DAT_0011a4ec;

// USA 0011A4D4 <- EU 0011A4D4 (Ghidra, non-matching)
// GLOBAL DAT_0011a4e8 undefined *
// GLOBAL DAT_0011a4ec int

int func_0011A4D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a4ec;
  pcVar1 = DAT_0011a4e8;
  iVar3 = DAT_0011a4ec + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

