#include "ghidra_types.h"

extern undefined *DAT_0011b710;
extern int DAT_0011b714;

// USA 0011B6FC <- EU 0011B6FC (Ghidra, non-matching)
// GLOBAL DAT_0011b710 undefined *
// GLOBAL DAT_0011b714 int

int func_0011B6FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b714;
  pcVar1 = DAT_0011b710;
  iVar3 = DAT_0011b714 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

