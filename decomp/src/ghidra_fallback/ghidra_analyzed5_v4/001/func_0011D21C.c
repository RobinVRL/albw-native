#include "ghidra_types.h"

extern undefined *DAT_0011d230;
extern int DAT_0011d234;

// USA 0011D21C <- EU 0011D21C (Ghidra, non-matching)
// GLOBAL DAT_0011d230 undefined *
// GLOBAL DAT_0011d234 int

int func_0011D21C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d234;
  pcVar1 = DAT_0011d230;
  iVar3 = DAT_0011d234 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

