#include "ghidra_types.h"

extern undefined *DAT_0011d0fc;
extern int DAT_0011d100;

// USA 0011D0E8 <- EU 0011D0E8 (Ghidra, non-matching)
// GLOBAL DAT_0011d0fc undefined *
// GLOBAL DAT_0011d100 int

int func_0011D0E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d100;
  pcVar1 = DAT_0011d0fc;
  iVar3 = DAT_0011d100 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

