#include "ghidra_types.h"

extern undefined *DAT_0011a018;
extern int DAT_0011a01c;

// USA 0011A004 <- EU 0011A004 (Ghidra, non-matching)
// GLOBAL DAT_0011a018 undefined *
// GLOBAL DAT_0011a01c int

int func_0011A004(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a01c;
  pcVar1 = DAT_0011a018;
  iVar3 = DAT_0011a01c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

