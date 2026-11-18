#include "ghidra_types.h"

extern undefined *DAT_00118724;
extern int DAT_00118728;

// USA 00118710 <- EU 00118710 (Ghidra, non-matching)
// GLOBAL DAT_00118724 undefined *
// GLOBAL DAT_00118728 int

int func_00118710(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118728;
  pcVar1 = DAT_00118724;
  iVar3 = DAT_00118728 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

