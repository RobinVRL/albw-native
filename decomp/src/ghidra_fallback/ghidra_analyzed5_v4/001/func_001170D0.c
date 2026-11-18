#include "ghidra_types.h"

extern undefined *DAT_001170e4;
extern int DAT_001170e8;

// USA 001170D0 <- EU 001170D0 (Ghidra, non-matching)
// GLOBAL DAT_001170e4 undefined *
// GLOBAL DAT_001170e8 int

int func_001170D0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001170e8;
  pcVar1 = DAT_001170e4;
  iVar3 = DAT_001170e8 + 0x54;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

