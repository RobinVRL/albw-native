#include "ghidra_types.h"

extern undefined *DAT_0011a9b8;
extern int DAT_0011a9bc;

// USA 0011A9A4 <- EU 0011A9A4 (Ghidra, non-matching)
// GLOBAL DAT_0011a9b8 undefined *
// GLOBAL DAT_0011a9bc int

int func_0011A9A4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a9bc;
  pcVar1 = DAT_0011a9b8;
  iVar3 = DAT_0011a9bc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

