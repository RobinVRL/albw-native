#include "ghidra_types.h"

extern undefined *DAT_0011d000;
extern int DAT_0011d004;

// USA 0011CFEC <- EU 0011CFEC (Ghidra, non-matching)
// GLOBAL DAT_0011d000 undefined *
// GLOBAL DAT_0011d004 int

int func_0011CFEC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d004;
  pcVar1 = DAT_0011d000;
  iVar3 = DAT_0011d004 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

