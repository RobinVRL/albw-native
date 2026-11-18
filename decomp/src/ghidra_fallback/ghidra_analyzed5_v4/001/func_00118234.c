#include "ghidra_types.h"

extern undefined *DAT_00118248;
extern int DAT_0011824c;

// USA 00118234 <- EU 00118234 (Ghidra, non-matching)
// GLOBAL DAT_00118248 undefined *
// GLOBAL DAT_0011824c int

int func_00118234(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011824c;
  pcVar1 = DAT_00118248;
  iVar3 = DAT_0011824c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

