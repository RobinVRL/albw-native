#include "ghidra_types.h"

extern undefined *DAT_0011c7e8;
extern int DAT_0011c7ec;

// USA 0011C7D4 <- EU 0011C7D4 (Ghidra, non-matching)
// GLOBAL DAT_0011c7e8 undefined *
// GLOBAL DAT_0011c7ec int

int func_0011C7D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c7ec;
  pcVar1 = DAT_0011c7e8;
  iVar3 = DAT_0011c7ec + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

