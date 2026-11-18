#include "ghidra_types.h"

extern undefined *DAT_0011dd3c;
extern int DAT_0011dd40;

// USA 0011DD28 <- EU 0011DD28 (Ghidra, non-matching)
// GLOBAL DAT_0011dd3c undefined *
// GLOBAL DAT_0011dd40 int

int func_0011DD28(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dd40;
  pcVar1 = DAT_0011dd3c;
  iVar3 = DAT_0011dd40 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

