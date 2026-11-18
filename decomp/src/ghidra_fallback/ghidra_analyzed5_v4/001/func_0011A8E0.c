#include "ghidra_types.h"

extern undefined *DAT_0011a8f4;
extern int DAT_0011a8f8;

// USA 0011A8E0 <- EU 0011A8E0 (Ghidra, non-matching)
// GLOBAL DAT_0011a8f4 undefined *
// GLOBAL DAT_0011a8f8 int

int func_0011A8E0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a8f8;
  pcVar1 = DAT_0011a8f4;
  iVar3 = DAT_0011a8f8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

