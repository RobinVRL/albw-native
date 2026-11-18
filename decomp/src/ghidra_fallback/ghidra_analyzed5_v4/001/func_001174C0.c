#include "ghidra_types.h"

extern undefined *DAT_001174d4;
extern int DAT_001174d8;

// USA 001174C0 <- EU 001174C0 (Ghidra, non-matching)
// GLOBAL DAT_001174d4 undefined *
// GLOBAL DAT_001174d8 int

int func_001174C0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001174d8;
  pcVar1 = DAT_001174d4;
  iVar3 = DAT_001174d8 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

