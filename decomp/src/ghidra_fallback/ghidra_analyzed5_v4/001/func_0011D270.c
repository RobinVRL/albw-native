#include "ghidra_types.h"

extern undefined *DAT_0011d284;
extern int DAT_0011d288;

// USA 0011D270 <- EU 0011D270 (Ghidra, non-matching)
// GLOBAL DAT_0011d284 undefined *
// GLOBAL DAT_0011d288 int

int func_0011D270(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d288;
  pcVar1 = DAT_0011d284;
  iVar3 = DAT_0011d288 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

