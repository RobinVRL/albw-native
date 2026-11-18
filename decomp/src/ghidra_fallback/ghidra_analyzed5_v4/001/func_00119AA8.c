#include "ghidra_types.h"

extern undefined *DAT_00119abc;
extern int DAT_00119ac0;

// USA 00119AA8 <- EU 00119AA8 (Ghidra, non-matching)
// GLOBAL DAT_00119abc undefined *
// GLOBAL DAT_00119ac0 int

int func_00119AA8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119ac0;
  pcVar1 = DAT_00119abc;
  iVar3 = DAT_00119ac0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

