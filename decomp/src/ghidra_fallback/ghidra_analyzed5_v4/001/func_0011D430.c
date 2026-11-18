#include "ghidra_types.h"

extern undefined *DAT_0011d444;
extern int DAT_0011d448;

// USA 0011D430 <- EU 0011D430 (Ghidra, non-matching)
// GLOBAL DAT_0011d444 undefined *
// GLOBAL DAT_0011d448 int

int func_0011D430(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d448;
  pcVar1 = DAT_0011d444;
  iVar3 = DAT_0011d448 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

