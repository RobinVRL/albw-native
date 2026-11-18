#include "ghidra_types.h"

extern undefined *DAT_00119498;
extern int DAT_0011949c;

// USA 00119484 <- EU 00119484 (Ghidra, non-matching)
// GLOBAL DAT_00119498 undefined *
// GLOBAL DAT_0011949c int

int func_00119484(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011949c;
  pcVar1 = DAT_00119498;
  iVar3 = DAT_0011949c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

