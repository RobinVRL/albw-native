#include "ghidra_types.h"

extern undefined *DAT_0011d818;
extern int DAT_0011d81c;

// USA 0011D804 <- EU 0011D804 (Ghidra, non-matching)
// GLOBAL DAT_0011d818 undefined *
// GLOBAL DAT_0011d81c int

int func_0011D804(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d81c;
  pcVar1 = DAT_0011d818;
  iVar3 = DAT_0011d81c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

