#include "ghidra_types.h"

extern undefined *DAT_001180dc;
extern int DAT_001180e0;

// USA 001180C8 <- EU 001180C8 (Ghidra, non-matching)
// GLOBAL DAT_001180dc undefined *
// GLOBAL DAT_001180e0 int

int func_001180C8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001180e0;
  pcVar1 = DAT_001180dc;
  iVar3 = DAT_001180e0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

