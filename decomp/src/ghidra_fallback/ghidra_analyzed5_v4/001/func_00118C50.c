#include "ghidra_types.h"

extern undefined *DAT_00118c64;
extern int DAT_00118c68;

// USA 00118C50 <- EU 00118C50 (Ghidra, non-matching)
// GLOBAL DAT_00118c64 undefined *
// GLOBAL DAT_00118c68 int

int func_00118C50(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118c68;
  pcVar1 = DAT_00118c64;
  iVar3 = DAT_00118c68 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

