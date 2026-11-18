#include "ghidra_types.h"

extern undefined *DAT_0011d24c;
extern int DAT_0011d250;

// USA 0011D238 <- EU 0011D238 (Ghidra, non-matching)
// GLOBAL DAT_0011d24c undefined *
// GLOBAL DAT_0011d250 int

int func_0011D238(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d250;
  pcVar1 = DAT_0011d24c;
  iVar3 = DAT_0011d250 + 0x60;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

