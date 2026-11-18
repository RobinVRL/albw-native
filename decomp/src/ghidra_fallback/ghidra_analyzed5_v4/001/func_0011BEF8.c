#include "ghidra_types.h"

extern undefined *DAT_0011bf0c;
extern int DAT_0011bf10;

// USA 0011BEF8 <- EU 0011BEF8 (Ghidra, non-matching)
// GLOBAL DAT_0011bf0c undefined *
// GLOBAL DAT_0011bf10 int

int func_0011BEF8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bf10;
  pcVar1 = DAT_0011bf0c;
  iVar3 = DAT_0011bf10 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

