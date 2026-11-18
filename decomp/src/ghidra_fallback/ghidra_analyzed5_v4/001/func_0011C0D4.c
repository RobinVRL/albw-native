#include "ghidra_types.h"

extern undefined *DAT_0011c0e8;
extern int DAT_0011c0ec;

// USA 0011C0D4 <- EU 0011C0D4 (Ghidra, non-matching)
// GLOBAL DAT_0011c0e8 undefined *
// GLOBAL DAT_0011c0ec int

int func_0011C0D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c0ec;
  pcVar1 = DAT_0011c0e8;
  iVar3 = DAT_0011c0ec + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

