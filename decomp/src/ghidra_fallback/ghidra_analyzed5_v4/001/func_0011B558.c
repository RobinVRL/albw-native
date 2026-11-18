#include "ghidra_types.h"

extern undefined *DAT_0011b56c;
extern int DAT_0011b570;

// USA 0011B558 <- EU 0011B558 (Ghidra, non-matching)
// GLOBAL DAT_0011b56c undefined *
// GLOBAL DAT_0011b570 int

int func_0011B558(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b570;
  pcVar1 = DAT_0011b56c;
  iVar3 = DAT_0011b570 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

