#include "ghidra_types.h"

extern undefined *DAT_0011bba8;
extern int DAT_0011bbac;

// USA 0011BB94 <- EU 0011BB94 (Ghidra, non-matching)
// GLOBAL DAT_0011bba8 undefined *
// GLOBAL DAT_0011bbac int

int func_0011BB94(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bbac;
  pcVar1 = DAT_0011bba8;
  iVar3 = DAT_0011bbac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

