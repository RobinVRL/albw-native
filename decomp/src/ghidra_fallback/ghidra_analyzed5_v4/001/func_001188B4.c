#include "ghidra_types.h"

extern undefined *DAT_001188c8;
extern int DAT_001188cc;

// USA 001188B4 <- EU 001188B4 (Ghidra, non-matching)
// GLOBAL DAT_001188c8 undefined *
// GLOBAL DAT_001188cc int

int func_001188B4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001188cc;
  pcVar1 = DAT_001188c8;
  iVar3 = DAT_001188cc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

