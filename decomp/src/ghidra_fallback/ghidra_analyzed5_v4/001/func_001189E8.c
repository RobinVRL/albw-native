#include "ghidra_types.h"

extern undefined *DAT_001189fc;
extern int DAT_00118a00;

// USA 001189E8 <- EU 001189E8 (Ghidra, non-matching)
// GLOBAL DAT_001189fc undefined *
// GLOBAL DAT_00118a00 int

int func_001189E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118a00;
  pcVar1 = DAT_001189fc;
  iVar3 = DAT_00118a00 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

