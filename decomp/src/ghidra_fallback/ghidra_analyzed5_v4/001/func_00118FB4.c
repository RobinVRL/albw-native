#include "ghidra_types.h"

extern undefined *DAT_00118fc8;
extern int DAT_00118fcc;

// USA 00118FB4 <- EU 00118FB4 (Ghidra, non-matching)
// GLOBAL DAT_00118fc8 undefined *
// GLOBAL DAT_00118fcc int

int func_00118FB4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118fcc;
  pcVar1 = DAT_00118fc8;
  iVar3 = DAT_00118fcc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

