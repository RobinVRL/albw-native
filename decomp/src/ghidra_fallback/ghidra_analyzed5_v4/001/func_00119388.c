#include "ghidra_types.h"

extern undefined *DAT_0011939c;
extern int DAT_001193a0;

// USA 00119388 <- EU 00119388 (Ghidra, non-matching)
// GLOBAL DAT_0011939c undefined *
// GLOBAL DAT_001193a0 int

int func_00119388(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001193a0;
  pcVar1 = DAT_0011939c;
  iVar3 = DAT_001193a0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

