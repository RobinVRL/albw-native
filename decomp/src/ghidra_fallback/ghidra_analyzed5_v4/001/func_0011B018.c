#include "ghidra_types.h"

extern undefined *DAT_0011b02c;
extern int DAT_0011b030;

// USA 0011B018 <- EU 0011B018 (Ghidra, non-matching)
// GLOBAL DAT_0011b02c undefined *
// GLOBAL DAT_0011b030 int

int func_0011B018(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b030;
  pcVar1 = DAT_0011b02c;
  iVar3 = DAT_0011b030 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

