#include "ghidra_types.h"

extern undefined *DAT_0011ba3c;
extern int DAT_0011ba40;

// USA 0011BA28 <- EU 0011BA28 (Ghidra, non-matching)
// GLOBAL DAT_0011ba3c undefined *
// GLOBAL DAT_0011ba40 int

int func_0011BA28(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ba40;
  pcVar1 = DAT_0011ba3c;
  iVar3 = DAT_0011ba40 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

