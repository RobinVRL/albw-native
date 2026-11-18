#include "ghidra_types.h"

extern undefined *DAT_001175ec;
extern int DAT_001175f0;

// USA 001175D8 <- EU 001175D8 (Ghidra, non-matching)
// GLOBAL DAT_001175ec undefined *
// GLOBAL DAT_001175f0 int

int func_001175D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001175f0;
  pcVar1 = DAT_001175ec;
  iVar3 = DAT_001175f0 + 0x50;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

