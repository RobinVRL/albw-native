#include "ghidra_types.h"

extern undefined *DAT_0011dec4;
extern int DAT_0011dec8;

// USA 0011DEB0 <- EU 0011DEB0 (Ghidra, non-matching)
// GLOBAL DAT_0011dec4 undefined *
// GLOBAL DAT_0011dec8 int

int func_0011DEB0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dec8;
  pcVar1 = DAT_0011dec4;
  iVar3 = DAT_0011dec8 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

