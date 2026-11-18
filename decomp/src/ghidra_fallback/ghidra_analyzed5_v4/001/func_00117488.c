#include "ghidra_types.h"

extern undefined *DAT_0011749c;
extern int DAT_001174a0;

// USA 00117488 <- EU 00117488 (Ghidra, non-matching)
// GLOBAL DAT_0011749c undefined *
// GLOBAL DAT_001174a0 int

int func_00117488(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001174a0;
  pcVar1 = DAT_0011749c;
  iVar3 = DAT_001174a0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

