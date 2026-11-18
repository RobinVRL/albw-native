#include "ghidra_types.h"

extern undefined *DAT_0011cdec;
extern int DAT_0011cdf0;

// USA 0011CDD8 <- EU 0011CDD8 (Ghidra, non-matching)
// GLOBAL DAT_0011cdec undefined *
// GLOBAL DAT_0011cdf0 int

int func_0011CDD8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cdf0;
  pcVar1 = DAT_0011cdec;
  iVar3 = DAT_0011cdf0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

