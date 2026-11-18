#include "ghidra_types.h"

extern undefined *DAT_001177c8;
extern int DAT_001177cc;

// USA 001177B4 <- EU 001177B4 (Ghidra, non-matching)
// GLOBAL DAT_001177c8 undefined *
// GLOBAL DAT_001177cc int

int func_001177B4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001177cc;
  pcVar1 = DAT_001177c8;
  iVar3 = DAT_001177cc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

