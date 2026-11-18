#include "ghidra_types.h"

extern undefined *DAT_0011bca4;
extern int DAT_0011bca8;

// USA 0011BC90 <- EU 0011BC90 (Ghidra, non-matching)
// GLOBAL DAT_0011bca4 undefined *
// GLOBAL DAT_0011bca8 int

int func_0011BC90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bca8;
  pcVar1 = DAT_0011bca4;
  iVar3 = DAT_0011bca8 + 0x54;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

