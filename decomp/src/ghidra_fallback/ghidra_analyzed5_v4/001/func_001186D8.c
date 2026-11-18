#include "ghidra_types.h"

extern undefined *DAT_001186ec;
extern int DAT_001186f0;

// USA 001186D8 <- EU 001186D8 (Ghidra, non-matching)
// GLOBAL DAT_001186ec undefined *
// GLOBAL DAT_001186f0 int

int func_001186D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001186f0;
  pcVar1 = DAT_001186ec;
  iVar3 = DAT_001186f0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

