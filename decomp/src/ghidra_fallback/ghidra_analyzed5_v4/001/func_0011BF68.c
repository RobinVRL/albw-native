#include "ghidra_types.h"

extern undefined *DAT_0011bf7c;
extern int DAT_0011bf80;

// USA 0011BF68 <- EU 0011BF68 (Ghidra, non-matching)
// GLOBAL DAT_0011bf7c undefined *
// GLOBAL DAT_0011bf80 int

int func_0011BF68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bf80;
  pcVar1 = DAT_0011bf7c;
  iVar3 = DAT_0011bf80 + 0xc;
  do {
    iVar3 = iVar3 + -4;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

