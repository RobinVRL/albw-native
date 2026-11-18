#include "ghidra_types.h"

extern undefined *DAT_0011b534;
extern int DAT_0011b538;

// USA 0011B520 <- EU 0011B520 (Ghidra, non-matching)
// GLOBAL DAT_0011b534 undefined *
// GLOBAL DAT_0011b538 int

int func_0011B520(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b538;
  pcVar1 = DAT_0011b534;
  iVar3 = DAT_0011b538 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

