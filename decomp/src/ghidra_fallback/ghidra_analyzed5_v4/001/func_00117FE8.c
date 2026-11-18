#include "ghidra_types.h"

extern undefined *DAT_00117ffc;
extern int DAT_00118000;

// USA 00117FE8 <- EU 00117FE8 (Ghidra, non-matching)
// GLOBAL DAT_00117ffc undefined *
// GLOBAL DAT_00118000 int

int func_00117FE8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118000;
  pcVar1 = DAT_00117ffc;
  iVar3 = DAT_00118000 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

