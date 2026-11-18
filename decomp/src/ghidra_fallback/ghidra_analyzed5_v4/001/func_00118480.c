#include "ghidra_types.h"

extern undefined *DAT_00118494;
extern int DAT_00118498;

// USA 00118480 <- EU 00118480 (Ghidra, non-matching)
// GLOBAL DAT_00118494 undefined *
// GLOBAL DAT_00118498 int

int func_00118480(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118498;
  pcVar1 = DAT_00118494;
  iVar3 = DAT_00118498 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

