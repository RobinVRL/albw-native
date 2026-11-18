#include "ghidra_types.h"

extern undefined *DAT_0011a788;
extern int DAT_0011a78c;

// USA 0011A774 <- EU 0011A774 (Ghidra, non-matching)
// GLOBAL DAT_0011a788 undefined *
// GLOBAL DAT_0011a78c int

int func_0011A774(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a78c;
  pcVar1 = DAT_0011a788;
  iVar3 = DAT_0011a78c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

