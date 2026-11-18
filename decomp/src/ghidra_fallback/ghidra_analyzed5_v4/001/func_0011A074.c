#include "ghidra_types.h"

extern undefined *DAT_0011a088;
extern int DAT_0011a08c;

// USA 0011A074 <- EU 0011A074 (Ghidra, non-matching)
// GLOBAL DAT_0011a088 undefined *
// GLOBAL DAT_0011a08c int

int func_0011A074(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a08c;
  pcVar1 = DAT_0011a088;
  iVar3 = DAT_0011a08c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

