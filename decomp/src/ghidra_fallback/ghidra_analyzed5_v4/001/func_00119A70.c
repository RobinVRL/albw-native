#include "ghidra_types.h"

extern undefined *DAT_00119a84;
extern int DAT_00119a88;

// USA 00119A70 <- EU 00119A70 (Ghidra, non-matching)
// GLOBAL DAT_00119a84 undefined *
// GLOBAL DAT_00119a88 int

int func_00119A70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119a88;
  pcVar1 = DAT_00119a84;
  iVar3 = DAT_00119a88 + 0x20;
  do {
    iVar3 = iVar3 + -0x10;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

