#include "ghidra_types.h"

extern undefined *DAT_0011d94c;
extern int DAT_0011d950;

// USA 0011D938 <- EU 0011D938 (Ghidra, non-matching)
// GLOBAL DAT_0011d94c undefined *
// GLOBAL DAT_0011d950 int

int func_0011D938(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d950;
  pcVar1 = DAT_0011d94c;
  iVar3 = DAT_0011d950 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

