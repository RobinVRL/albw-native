#include "ghidra_types.h"

extern undefined *DAT_001180a4;
extern int DAT_001180a8;

// USA 00118090 <- EU 00118090 (Ghidra, non-matching)
// GLOBAL DAT_001180a4 undefined *
// GLOBAL DAT_001180a8 int

int func_00118090(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001180a8;
  pcVar1 = DAT_001180a4;
  iVar3 = DAT_001180a8 + 0x70;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

