#include "ghidra_types.h"

extern undefined *DAT_001183ec;
extern int DAT_001183f0;

// USA 001183D8 <- EU 001183D8 (Ghidra, non-matching)
// GLOBAL DAT_001183ec undefined *
// GLOBAL DAT_001183f0 int

int func_001183D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001183f0;
  pcVar1 = DAT_001183ec;
  iVar3 = DAT_001183f0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

