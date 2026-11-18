#include "ghidra_types.h"

extern undefined *DAT_00117528;
extern int DAT_0011752c;

// USA 00117514 <- EU 00117514 (Ghidra, non-matching)
// GLOBAL DAT_00117528 undefined *
// GLOBAL DAT_0011752c int

int func_00117514(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011752c;
  pcVar1 = DAT_00117528;
  iVar3 = DAT_0011752c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

