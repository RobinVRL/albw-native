#include "ghidra_types.h"

extern undefined *DAT_0011dccc;
extern int DAT_0011dcd0;

// USA 0011DCB8 <- EU 0011DCB8 (Ghidra, non-matching)
// GLOBAL DAT_0011dccc undefined *
// GLOBAL DAT_0011dcd0 int

int func_0011DCB8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dcd0;
  pcVar1 = DAT_0011dccc;
  iVar3 = DAT_0011dcd0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

