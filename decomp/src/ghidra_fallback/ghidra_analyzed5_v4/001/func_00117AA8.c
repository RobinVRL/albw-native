#include "ghidra_types.h"

extern undefined *DAT_00117abc;
extern int DAT_00117ac0;

// USA 00117AA8 <- EU 00117AA8 (Ghidra, non-matching)
// GLOBAL DAT_00117abc undefined *
// GLOBAL DAT_00117ac0 int

int func_00117AA8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117ac0;
  pcVar1 = DAT_00117abc;
  iVar3 = DAT_00117ac0 + 0xa8;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

