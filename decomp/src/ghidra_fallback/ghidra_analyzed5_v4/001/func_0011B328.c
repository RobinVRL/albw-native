#include "ghidra_types.h"

extern undefined *DAT_0011b33c;
extern int DAT_0011b340;

// USA 0011B328 <- EU 0011B328 (Ghidra, non-matching)
// GLOBAL DAT_0011b33c undefined *
// GLOBAL DAT_0011b340 int

int func_0011B328(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b340;
  pcVar1 = DAT_0011b33c;
  iVar3 = DAT_0011b340 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

