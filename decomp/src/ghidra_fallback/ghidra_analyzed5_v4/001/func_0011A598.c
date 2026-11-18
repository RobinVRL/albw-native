#include "ghidra_types.h"

extern undefined *DAT_0011a5ac;
extern int DAT_0011a5b0;

// USA 0011A598 <- EU 0011A598 (Ghidra, non-matching)
// GLOBAL DAT_0011a5ac undefined *
// GLOBAL DAT_0011a5b0 int

int func_0011A598(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a5b0;
  pcVar1 = DAT_0011a5ac;
  iVar3 = DAT_0011a5b0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

