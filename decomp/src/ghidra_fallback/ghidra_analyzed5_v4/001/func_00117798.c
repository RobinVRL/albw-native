#include "ghidra_types.h"

extern undefined *DAT_001177ac;
extern int DAT_001177b0;

// USA 00117798 <- EU 00117798 (Ghidra, non-matching)
// GLOBAL DAT_001177ac undefined *
// GLOBAL DAT_001177b0 int

int func_00117798(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001177b0;
  pcVar1 = DAT_001177ac;
  iVar3 = DAT_001177b0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

