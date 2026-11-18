#include "ghidra_types.h"

extern undefined *DAT_0011a6a8;
extern int DAT_0011a6ac;

// USA 0011A694 <- EU 0011A694 (Ghidra, non-matching)
// GLOBAL DAT_0011a6a8 undefined *
// GLOBAL DAT_0011a6ac int

int func_0011A694(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a6ac;
  pcVar1 = DAT_0011a6a8;
  iVar3 = DAT_0011a6ac + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

