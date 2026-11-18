#include "ghidra_types.h"

extern undefined *DAT_0011d604;
extern int DAT_0011d608;

// USA 0011D5F0 <- EU 0011D5F0 (Ghidra, non-matching)
// GLOBAL DAT_0011d604 undefined *
// GLOBAL DAT_0011d608 int

int func_0011D5F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d608;
  pcVar1 = DAT_0011d604;
  iVar3 = DAT_0011d608 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

