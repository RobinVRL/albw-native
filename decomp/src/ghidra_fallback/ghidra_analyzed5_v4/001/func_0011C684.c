#include "ghidra_types.h"

extern undefined *DAT_0011c698;
extern int DAT_0011c69c;

// USA 0011C684 <- EU 0011C684 (Ghidra, non-matching)
// GLOBAL DAT_0011c698 undefined *
// GLOBAL DAT_0011c69c int

int func_0011C684(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c69c;
  pcVar1 = DAT_0011c698;
  iVar3 = DAT_0011c69c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

