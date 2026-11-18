#include "ghidra_types.h"

extern undefined *DAT_0011d310;
extern int DAT_0011d314;

// USA 0011D2FC <- EU 0011D2FC (Ghidra, non-matching)
// GLOBAL DAT_0011d310 undefined *
// GLOBAL DAT_0011d314 int

int func_0011D2FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d314;
  pcVar1 = DAT_0011d310;
  iVar3 = DAT_0011d314 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

