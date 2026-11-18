#include "ghidra_types.h"

extern undefined *DAT_0011b17c;
extern int DAT_0011b180;

// USA 0011B168 <- EU 0011B168 (Ghidra, non-matching)
// GLOBAL DAT_0011b17c undefined *
// GLOBAL DAT_0011b180 int

int func_0011B168(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b180;
  pcVar1 = DAT_0011b17c;
  iVar3 = DAT_0011b180 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

