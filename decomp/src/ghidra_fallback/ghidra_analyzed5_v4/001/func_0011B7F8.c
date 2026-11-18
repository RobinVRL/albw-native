#include "ghidra_types.h"

extern undefined *DAT_0011b80c;
extern int DAT_0011b810;

// USA 0011B7F8 <- EU 0011B7F8 (Ghidra, non-matching)
// GLOBAL DAT_0011b80c undefined *
// GLOBAL DAT_0011b810 int

int func_0011B7F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b810;
  pcVar1 = DAT_0011b80c;
  iVar3 = DAT_0011b810 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

