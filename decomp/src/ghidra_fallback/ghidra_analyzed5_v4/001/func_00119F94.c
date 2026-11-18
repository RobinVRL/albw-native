#include "ghidra_types.h"

extern undefined *DAT_00119fa8;
extern int DAT_00119fac;

// USA 00119F94 <- EU 00119F94 (Ghidra, non-matching)
// GLOBAL DAT_00119fa8 undefined *
// GLOBAL DAT_00119fac int

int func_00119F94(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119fac;
  pcVar1 = DAT_00119fa8;
  iVar3 = DAT_00119fac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

