#include "ghidra_types.h"

extern undefined *DAT_0011c564;
extern int DAT_0011c568;

// USA 0011C550 <- EU 0011C550 (Ghidra, non-matching)
// GLOBAL DAT_0011c564 undefined *
// GLOBAL DAT_0011c568 int

int func_0011C550(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c568;
  pcVar1 = DAT_0011c564;
  iVar3 = DAT_0011c568 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

