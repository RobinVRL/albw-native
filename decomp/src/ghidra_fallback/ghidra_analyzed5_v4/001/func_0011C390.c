#include "ghidra_types.h"

extern undefined *DAT_0011c3a4;
extern int DAT_0011c3a8;

// USA 0011C390 <- EU 0011C390 (Ghidra, non-matching)
// GLOBAL DAT_0011c3a4 undefined *
// GLOBAL DAT_0011c3a8 int

int func_0011C390(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c3a8;
  pcVar1 = DAT_0011c3a4;
  iVar3 = DAT_0011c3a8 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

