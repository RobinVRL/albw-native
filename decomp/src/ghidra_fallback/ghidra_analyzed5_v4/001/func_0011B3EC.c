#include "ghidra_types.h"

extern undefined *DAT_0011b400;
extern int DAT_0011b404;

// USA 0011B3EC <- EU 0011B3EC (Ghidra, non-matching)
// GLOBAL DAT_0011b400 undefined *
// GLOBAL DAT_0011b404 int

int func_0011B3EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b404;
  pcVar1 = DAT_0011b400;
  iVar3 = DAT_0011b404 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

