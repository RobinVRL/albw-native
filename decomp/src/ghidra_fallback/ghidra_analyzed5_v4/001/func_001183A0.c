#include "ghidra_types.h"

extern undefined *DAT_001183b4;
extern int DAT_001183b8;

// USA 001183A0 <- EU 001183A0 (Ghidra, non-matching)
// GLOBAL DAT_001183b4 undefined *
// GLOBAL DAT_001183b8 int

int func_001183A0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001183b8;
  pcVar1 = DAT_001183b4;
  iVar3 = DAT_001183b8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

