#include "ghidra_types.h"

extern undefined *DAT_0011d5cc;
extern int DAT_0011d5d0;

// USA 0011D5B8 <- EU 0011D5B8 (Ghidra, non-matching)
// GLOBAL DAT_0011d5cc undefined *
// GLOBAL DAT_0011d5d0 int

int func_0011D5B8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d5d0;
  pcVar1 = DAT_0011d5cc;
  iVar3 = DAT_0011d5d0 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

