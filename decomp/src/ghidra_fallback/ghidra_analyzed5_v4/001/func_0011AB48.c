#include "ghidra_types.h"

extern undefined *DAT_0011ab5c;
extern int DAT_0011ab60;

// USA 0011AB48 <- EU 0011AB48 (Ghidra, non-matching)
// GLOBAL DAT_0011ab5c undefined *
// GLOBAL DAT_0011ab60 int

int func_0011AB48(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ab60;
  pcVar1 = DAT_0011ab5c;
  iVar3 = DAT_0011ab60 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

