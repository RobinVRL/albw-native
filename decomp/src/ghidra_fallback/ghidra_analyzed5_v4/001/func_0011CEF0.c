#include "ghidra_types.h"

extern undefined *DAT_0011cf04;
extern int DAT_0011cf08;

// USA 0011CEF0 <- EU 0011CEF0 (Ghidra, non-matching)
// GLOBAL DAT_0011cf04 undefined *
// GLOBAL DAT_0011cf08 int

int func_0011CEF0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cf08;
  pcVar1 = DAT_0011cf04;
  iVar3 = DAT_0011cf08 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

