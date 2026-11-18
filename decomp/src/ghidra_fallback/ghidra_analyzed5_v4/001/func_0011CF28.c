#include "ghidra_types.h"

extern undefined *DAT_0011cf3c;
extern int DAT_0011cf40;

// USA 0011CF28 <- EU 0011CF28 (Ghidra, non-matching)
// GLOBAL DAT_0011cf3c undefined *
// GLOBAL DAT_0011cf40 int

int func_0011CF28(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cf40;
  pcVar1 = DAT_0011cf3c;
  iVar3 = DAT_0011cf40 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

