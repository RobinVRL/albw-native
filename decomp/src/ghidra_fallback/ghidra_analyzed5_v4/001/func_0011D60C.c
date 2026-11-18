#include "ghidra_types.h"

extern undefined *DAT_0011d620;
extern int DAT_0011d624;

// USA 0011D60C <- EU 0011D60C (Ghidra, non-matching)
// GLOBAL DAT_0011d620 undefined *
// GLOBAL DAT_0011d624 int

int func_0011D60C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d624;
  pcVar1 = DAT_0011d620;
  iVar3 = DAT_0011d624 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

