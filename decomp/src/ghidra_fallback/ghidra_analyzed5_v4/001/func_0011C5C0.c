#include "ghidra_types.h"

extern undefined *DAT_0011c5d4;
extern int DAT_0011c5d8;

// USA 0011C5C0 <- EU 0011C5C0 (Ghidra, non-matching)
// GLOBAL DAT_0011c5d4 undefined *
// GLOBAL DAT_0011c5d8 int

int func_0011C5C0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c5d8;
  pcVar1 = DAT_0011c5d4;
  iVar3 = DAT_0011c5d8 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

