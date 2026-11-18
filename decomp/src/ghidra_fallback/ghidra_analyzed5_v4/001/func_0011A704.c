#include "ghidra_types.h"

extern undefined *DAT_0011a718;
extern int DAT_0011a71c;

// USA 0011A704 <- EU 0011A704 (Ghidra, non-matching)
// GLOBAL DAT_0011a718 undefined *
// GLOBAL DAT_0011a71c int

int func_0011A704(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a71c;
  pcVar1 = DAT_0011a718;
  iVar3 = DAT_0011a71c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

