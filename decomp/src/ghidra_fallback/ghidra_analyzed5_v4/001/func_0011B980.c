#include "ghidra_types.h"

extern undefined *DAT_0011b994;
extern int DAT_0011b998;

// USA 0011B980 <- EU 0011B980 (Ghidra, non-matching)
// GLOBAL DAT_0011b994 undefined *
// GLOBAL DAT_0011b998 int

int func_0011B980(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b998;
  pcVar1 = DAT_0011b994;
  iVar3 = DAT_0011b998 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

