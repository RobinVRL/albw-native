#include "ghidra_types.h"

extern undefined *DAT_0011d658;
extern int DAT_0011d65c;

// USA 0011D644 <- EU 0011D644 (Ghidra, non-matching)
// GLOBAL DAT_0011d658 undefined *
// GLOBAL DAT_0011d65c int

int func_0011D644(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d65c;
  pcVar1 = DAT_0011d658;
  iVar3 = DAT_0011d65c + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

