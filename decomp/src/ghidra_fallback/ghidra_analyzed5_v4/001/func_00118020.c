#include "ghidra_types.h"

extern undefined *DAT_00118034;
extern int DAT_00118038;

// USA 00118020 <- EU 00118020 (Ghidra, non-matching)
// GLOBAL DAT_00118034 undefined *
// GLOBAL DAT_00118038 int

int func_00118020(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118038;
  pcVar1 = DAT_00118034;
  iVar3 = DAT_00118038 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

