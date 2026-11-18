#include "ghidra_types.h"

extern undefined *DAT_0011bf44;
extern int DAT_0011bf48;

// USA 0011BF30 <- EU 0011BF30 (Ghidra, non-matching)
// GLOBAL DAT_0011bf44 undefined *
// GLOBAL DAT_0011bf48 int

int func_0011BF30(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bf48;
  pcVar1 = DAT_0011bf44;
  iVar3 = DAT_0011bf48 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

