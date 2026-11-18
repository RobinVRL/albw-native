#include "ghidra_types.h"

extern undefined *DAT_0011bef0;
extern int DAT_0011bef4;

// USA 0011BEDC <- EU 0011BEDC (Ghidra, non-matching)
// GLOBAL DAT_0011bef0 undefined *
// GLOBAL DAT_0011bef4 int

int func_0011BEDC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bef4;
  pcVar1 = DAT_0011bef0;
  iVar3 = DAT_0011bef4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

