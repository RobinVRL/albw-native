#include "ghidra_types.h"

extern undefined *DAT_00118d0c;
extern int DAT_00118d10;

// USA 00118CF8 <- EU 00118CF8 (Ghidra, non-matching)
// GLOBAL DAT_00118d0c undefined *
// GLOBAL DAT_00118d10 int

int func_00118CF8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118d10;
  pcVar1 = DAT_00118d0c;
  iVar3 = DAT_00118d10 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

