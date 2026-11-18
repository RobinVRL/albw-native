#include "ghidra_types.h"

extern undefined *DAT_001192bc;
extern int DAT_001192c0;

// USA 001192A8 <- EU 001192A8 (Ghidra, non-matching)
// GLOBAL DAT_001192bc undefined *
// GLOBAL DAT_001192c0 int

int func_001192A8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001192c0;
  pcVar1 = DAT_001192bc;
  iVar3 = DAT_001192c0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

