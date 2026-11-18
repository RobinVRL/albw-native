#include "ghidra_types.h"

extern undefined *DAT_0011a84c;
extern int DAT_0011a850;

// USA 0011A838 <- EU 0011A838 (Ghidra, non-matching)
// GLOBAL DAT_0011a84c undefined *
// GLOBAL DAT_0011a850 int

int func_0011A838(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a850;
  pcVar1 = DAT_0011a84c;
  iVar3 = DAT_0011a850 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

