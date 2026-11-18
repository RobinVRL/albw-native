#include "ghidra_types.h"

extern undefined *DAT_0011b080;
extern int DAT_0011b084;

// USA 0011B06C <- EU 0011B06C (Ghidra, non-matching)
// GLOBAL DAT_0011b080 undefined *
// GLOBAL DAT_0011b084 int

int func_0011B06C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b084;
  pcVar1 = DAT_0011b080;
  iVar3 = DAT_0011b084 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

