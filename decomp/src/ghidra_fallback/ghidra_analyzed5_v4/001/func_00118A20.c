#include "ghidra_types.h"

extern undefined *DAT_00118a34;
extern int DAT_00118a38;

// USA 00118A20 <- EU 00118A20 (Ghidra, non-matching)
// GLOBAL DAT_00118a34 undefined *
// GLOBAL DAT_00118a38 int

int func_00118A20(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118a38;
  pcVar1 = DAT_00118a34;
  iVar3 = DAT_00118a38 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

