#include "ghidra_types.h"

extern undefined *DAT_001175b4;
extern int DAT_001175b8;

// USA 001175A0 <- EU 001175A0 (Ghidra, non-matching)
// GLOBAL DAT_001175b4 undefined *
// GLOBAL DAT_001175b8 int

int func_001175A0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001175b8;
  pcVar1 = DAT_001175b4;
  iVar3 = DAT_001175b8 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

