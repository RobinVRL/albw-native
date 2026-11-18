#include "ghidra_types.h"

extern undefined *DAT_001179f8;
extern int DAT_001179fc;

// USA 001179E4 <- EU 001179E4 (Ghidra, non-matching)
// GLOBAL DAT_001179f8 undefined *
// GLOBAL DAT_001179fc int

int func_001179E4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001179fc;
  pcVar1 = DAT_001179f8;
  iVar3 = DAT_001179fc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

