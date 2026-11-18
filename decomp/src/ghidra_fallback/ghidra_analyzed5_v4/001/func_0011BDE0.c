#include "ghidra_types.h"

extern undefined *DAT_0011bdf4;
extern int DAT_0011bdf8;

// USA 0011BDE0 <- EU 0011BDE0 (Ghidra, non-matching)
// GLOBAL DAT_0011bdf4 undefined *
// GLOBAL DAT_0011bdf8 int

int func_0011BDE0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bdf8;
  pcVar1 = DAT_0011bdf4;
  iVar3 = DAT_0011bdf8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

