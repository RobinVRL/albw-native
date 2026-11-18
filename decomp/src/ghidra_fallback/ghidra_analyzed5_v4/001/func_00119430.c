#include "ghidra_types.h"

extern undefined *DAT_00119444;
extern int DAT_00119448;

// USA 00119430 <- EU 00119430 (Ghidra, non-matching)
// GLOBAL DAT_00119444 undefined *
// GLOBAL DAT_00119448 int

int func_00119430(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119448;
  pcVar1 = DAT_00119444;
  iVar3 = DAT_00119448 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

