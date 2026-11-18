#include "ghidra_types.h"

extern undefined *DAT_0011d428;
extern int DAT_0011d42c;

// USA 0011D414 <- EU 0011D414 (Ghidra, non-matching)
// GLOBAL DAT_0011d428 undefined *
// GLOBAL DAT_0011d42c int

int func_0011D414(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d42c;
  pcVar1 = DAT_0011d428;
  iVar3 = DAT_0011d42c + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

