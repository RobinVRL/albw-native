#include "ghidra_types.h"

extern undefined *DAT_0011bc18;
extern int DAT_0011bc1c;

// USA 0011BC04 <- EU 0011BC04 (Ghidra, non-matching)
// GLOBAL DAT_0011bc18 undefined *
// GLOBAL DAT_0011bc1c int

int func_0011BC04(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bc1c;
  pcVar1 = DAT_0011bc18;
  iVar3 = DAT_0011bc1c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

