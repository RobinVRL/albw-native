#include "ghidra_types.h"

extern undefined *DAT_00119054;
extern int DAT_00119058;

// USA 00119040 <- EU 00119040 (Ghidra, non-matching)
// GLOBAL DAT_00119054 undefined *
// GLOBAL DAT_00119058 int

int func_00119040(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119058;
  pcVar1 = DAT_00119054;
  iVar3 = DAT_00119058 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

