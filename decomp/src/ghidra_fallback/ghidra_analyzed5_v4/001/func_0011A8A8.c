#include "ghidra_types.h"

extern undefined *DAT_0011a8bc;
extern int DAT_0011a8c0;

// USA 0011A8A8 <- EU 0011A8A8 (Ghidra, non-matching)
// GLOBAL DAT_0011a8bc undefined *
// GLOBAL DAT_0011a8c0 int

int func_0011A8A8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a8c0;
  pcVar1 = DAT_0011a8bc;
  iVar3 = DAT_0011a8c0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

