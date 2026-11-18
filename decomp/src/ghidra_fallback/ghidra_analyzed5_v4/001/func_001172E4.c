#include "ghidra_types.h"

extern undefined *DAT_001172f8;
extern int DAT_001172fc;

// USA 001172E4 <- EU 001172E4 (Ghidra, non-matching)
// GLOBAL DAT_001172f8 undefined *
// GLOBAL DAT_001172fc int

int func_001172E4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001172fc;
  pcVar1 = DAT_001172f8;
  iVar3 = DAT_001172fc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

