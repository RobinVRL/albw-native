#include "ghidra_types.h"

extern undefined *DAT_0011b844;
extern int DAT_0011b848;

// USA 0011B830 <- EU 0011B830 (Ghidra, non-matching)
// GLOBAL DAT_0011b844 undefined *
// GLOBAL DAT_0011b848 int

int func_0011B830(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b848;
  pcVar1 = DAT_0011b844;
  iVar3 = DAT_0011b848 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

