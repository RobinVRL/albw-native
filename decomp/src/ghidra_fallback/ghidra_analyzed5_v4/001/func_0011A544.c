#include "ghidra_types.h"

extern undefined *DAT_0011a558;
extern int DAT_0011a55c;

// USA 0011A544 <- EU 0011A544 (Ghidra, non-matching)
// GLOBAL DAT_0011a558 undefined *
// GLOBAL DAT_0011a55c int

int func_0011A544(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a55c;
  pcVar1 = DAT_0011a558;
  iVar3 = DAT_0011a55c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

