#include "ghidra_types.h"

extern undefined *DAT_0011d86c;
extern int DAT_0011d870;

// USA 0011D858 <- EU 0011D858 (Ghidra, non-matching)
// GLOBAL DAT_0011d86c undefined *
// GLOBAL DAT_0011d870 int

int func_0011D858(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d870;
  pcVar1 = DAT_0011d86c;
  iVar3 = DAT_0011d870 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

