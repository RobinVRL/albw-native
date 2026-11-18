#include "ghidra_types.h"

extern undefined *DAT_00118aa4;
extern int DAT_00118aa8;

// USA 00118A90 <- EU 00118A90 (Ghidra, non-matching)
// GLOBAL DAT_00118aa4 undefined *
// GLOBAL DAT_00118aa8 int

int func_00118A90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118aa8;
  pcVar1 = DAT_00118aa4;
  iVar3 = DAT_00118aa8 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

