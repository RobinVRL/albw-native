#include "ghidra_types.h"

extern undefined *DAT_0011da9c;
extern int DAT_0011daa0;

// USA 0011DA88 <- EU 0011DA88 (Ghidra, non-matching)
// GLOBAL DAT_0011da9c undefined *
// GLOBAL DAT_0011daa0 int

int func_0011DA88(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011daa0;
  pcVar1 = DAT_0011da9c;
  iVar3 = DAT_0011daa0 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

