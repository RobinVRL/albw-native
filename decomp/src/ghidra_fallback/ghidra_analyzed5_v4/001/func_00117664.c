#include "ghidra_types.h"

extern undefined *DAT_00117678;
extern int DAT_0011767c;

// USA 00117664 <- EU 00117664 (Ghidra, non-matching)
// GLOBAL DAT_00117678 undefined *
// GLOBAL DAT_0011767c int

int func_00117664(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011767c;
  pcVar1 = DAT_00117678;
  iVar3 = DAT_0011767c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

