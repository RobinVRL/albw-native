#include "ghidra_types.h"

extern undefined *DAT_0011a99c;
extern int DAT_0011a9a0;

// USA 0011A988 <- EU 0011A988 (Ghidra, non-matching)
// GLOBAL DAT_0011a99c undefined *
// GLOBAL DAT_0011a9a0 int

int func_0011A988(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a9a0;
  pcVar1 = DAT_0011a99c;
  iVar3 = DAT_0011a9a0 + 0xa0;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

