#include "ghidra_types.h"

extern undefined *DAT_0011c078;
extern int DAT_0011c07c;

// USA 0011C064 <- EU 0011C064 (Ghidra, non-matching)
// GLOBAL DAT_0011c078 undefined *
// GLOBAL DAT_0011c07c int

int func_0011C064(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c07c;
  pcVar1 = DAT_0011c078;
  iVar3 = DAT_0011c07c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

