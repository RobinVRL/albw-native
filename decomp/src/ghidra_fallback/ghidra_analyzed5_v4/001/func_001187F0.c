#include "ghidra_types.h"

extern undefined *DAT_00118804;
extern int DAT_00118808;

// USA 001187F0 <- EU 001187F0 (Ghidra, non-matching)
// GLOBAL DAT_00118804 undefined *
// GLOBAL DAT_00118808 int

int func_001187F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118808;
  pcVar1 = DAT_00118804;
  iVar3 = DAT_00118808 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

