#include "ghidra_types.h"

extern undefined *DAT_001196c8;
extern int DAT_001196cc;

// USA 001196B4 <- EU 001196B4 (Ghidra, non-matching)
// GLOBAL DAT_001196c8 undefined *
// GLOBAL DAT_001196cc int

int func_001196B4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001196cc;
  pcVar1 = DAT_001196c8;
  iVar3 = DAT_001196cc + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

