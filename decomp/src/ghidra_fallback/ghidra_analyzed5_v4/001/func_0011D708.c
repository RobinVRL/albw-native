#include "ghidra_types.h"

extern undefined *DAT_0011d71c;
extern int DAT_0011d720;

// USA 0011D708 <- EU 0011D708 (Ghidra, non-matching)
// GLOBAL DAT_0011d71c undefined *
// GLOBAL DAT_0011d720 int

int func_0011D708(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d720;
  pcVar1 = DAT_0011d71c;
  iVar3 = DAT_0011d720 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

