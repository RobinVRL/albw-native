#include "ghidra_types.h"

extern undefined *DAT_0011b780;
extern int DAT_0011b784;

// USA 0011B76C <- EU 0011B76C (Ghidra, non-matching)
// GLOBAL DAT_0011b780 undefined *
// GLOBAL DAT_0011b784 int

int func_0011B76C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b784;
  pcVar1 = DAT_0011b780;
  iVar3 = DAT_0011b784 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

