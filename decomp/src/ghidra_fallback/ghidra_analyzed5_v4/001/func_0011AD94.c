#include "ghidra_types.h"

extern undefined *DAT_0011ada8;
extern int DAT_0011adac;

// USA 0011AD94 <- EU 0011AD94 (Ghidra, non-matching)
// GLOBAL DAT_0011ada8 undefined *
// GLOBAL DAT_0011adac int

int func_0011AD94(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011adac;
  pcVar1 = DAT_0011ada8;
  iVar3 = DAT_0011adac + 0x1400;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

