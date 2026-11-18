#include "ghidra_types.h"

extern undefined *DAT_001196ac;
extern int DAT_001196b0;

// USA 00119698 <- EU 00119698 (Ghidra, non-matching)
// GLOBAL DAT_001196ac undefined *
// GLOBAL DAT_001196b0 int

int func_00119698(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001196b0;
  pcVar1 = DAT_001196ac;
  iVar3 = DAT_001196b0 + 0xa8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

