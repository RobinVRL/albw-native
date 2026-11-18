#include "ghidra_types.h"

extern undefined *DAT_00117ec8;
extern int DAT_00117ecc;

// USA 00117EB4 <- EU 00117EB4 (Ghidra, non-matching)
// GLOBAL DAT_00117ec8 undefined *
// GLOBAL DAT_00117ecc int

int func_00117EB4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117ecc;
  pcVar1 = DAT_00117ec8;
  iVar3 = DAT_00117ecc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

