#include "ghidra_types.h"

extern undefined *DAT_0011c7cc;
extern int DAT_0011c7d0;

// USA 0011C7B8 <- EU 0011C7B8 (Ghidra, non-matching)
// GLOBAL DAT_0011c7cc undefined *
// GLOBAL DAT_0011c7d0 int

int func_0011C7B8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c7d0;
  pcVar1 = DAT_0011c7cc;
  iVar3 = DAT_0011c7d0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

