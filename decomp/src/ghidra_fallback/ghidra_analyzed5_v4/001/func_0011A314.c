#include "ghidra_types.h"

extern undefined *DAT_0011a328;
extern int DAT_0011a32c;

// USA 0011A314 <- EU 0011A314 (Ghidra, non-matching)
// GLOBAL DAT_0011a328 undefined *
// GLOBAL DAT_0011a32c int

int func_0011A314(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a32c;
  pcVar1 = DAT_0011a328;
  iVar3 = DAT_0011a32c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

