#include "ghidra_types.h"

extern undefined *DAT_0011cbd8;
extern int DAT_0011cbdc;

// USA 0011CBC4 <- EU 0011CBC4 (Ghidra, non-matching)
// GLOBAL DAT_0011cbd8 undefined *
// GLOBAL DAT_0011cbdc int

int func_0011CBC4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cbdc;
  pcVar1 = DAT_0011cbd8;
  iVar3 = DAT_0011cbdc + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

