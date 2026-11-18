#include "ghidra_types.h"

extern undefined *DAT_0011d1c0;
extern int DAT_0011d1c4;

// USA 0011D1AC <- EU 0011D1AC (Ghidra, non-matching)
// GLOBAL DAT_0011d1c0 undefined *
// GLOBAL DAT_0011d1c4 int

int func_0011D1AC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d1c4;
  pcVar1 = DAT_0011d1c0;
  iVar3 = DAT_0011d1c4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

