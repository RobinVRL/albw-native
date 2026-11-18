#include "ghidra_types.h"

extern undefined *DAT_0011a360;
extern int DAT_0011a364;

// USA 0011A34C <- EU 0011A34C (Ghidra, non-matching)
// GLOBAL DAT_0011a360 undefined *
// GLOBAL DAT_0011a364 int

int func_0011A34C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a364;
  pcVar1 = DAT_0011a360;
  iVar3 = DAT_0011a364 + 0xb0;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

