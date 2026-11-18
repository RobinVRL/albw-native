#include "ghidra_types.h"

extern undefined *DAT_00119594;
extern int DAT_00119598;

// USA 00119580 <- EU 00119580 (Ghidra, non-matching)
// GLOBAL DAT_00119594 undefined *
// GLOBAL DAT_00119598 int

int func_00119580(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119598;
  pcVar1 = DAT_00119594;
  iVar3 = DAT_00119598 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

