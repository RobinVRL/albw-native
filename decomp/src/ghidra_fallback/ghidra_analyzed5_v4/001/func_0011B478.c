#include "ghidra_types.h"

extern undefined *DAT_0011b48c;
extern int DAT_0011b490;

// USA 0011B478 <- EU 0011B478 (Ghidra, non-matching)
// GLOBAL DAT_0011b48c undefined *
// GLOBAL DAT_0011b490 int

int func_0011B478(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b490;
  pcVar1 = DAT_0011b48c;
  iVar3 = DAT_0011b490 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

