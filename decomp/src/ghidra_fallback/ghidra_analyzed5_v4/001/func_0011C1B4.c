#include "ghidra_types.h"

extern undefined *DAT_0011c1c8;
extern int DAT_0011c1cc;

// USA 0011C1B4 <- EU 0011C1B4 (Ghidra, non-matching)
// GLOBAL DAT_0011c1c8 undefined *
// GLOBAL DAT_0011c1cc int

int func_0011C1B4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c1cc;
  pcVar1 = DAT_0011c1c8;
  iVar3 = DAT_0011c1cc + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

