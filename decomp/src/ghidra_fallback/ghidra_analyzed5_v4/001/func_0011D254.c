#include "ghidra_types.h"

extern undefined *DAT_0011d268;
extern int DAT_0011d26c;

// USA 0011D254 <- EU 0011D254 (Ghidra, non-matching)
// GLOBAL DAT_0011d268 undefined *
// GLOBAL DAT_0011d26c int

int func_0011D254(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d26c;
  pcVar1 = DAT_0011d268;
  iVar3 = DAT_0011d26c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

