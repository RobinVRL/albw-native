#include "ghidra_types.h"

extern undefined *DAT_0011bcc0;
extern int DAT_0011bcc4;

// USA 0011BCAC <- EU 0011BCAC (Ghidra, non-matching)
// GLOBAL DAT_0011bcc0 undefined *
// GLOBAL DAT_0011bcc4 int

int func_0011BCAC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bcc4;
  pcVar1 = DAT_0011bcc0;
  iVar3 = DAT_0011bcc4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

