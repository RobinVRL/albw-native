#include "ghidra_types.h"

extern undefined *DAT_0011b924;
extern int DAT_0011b928;

// USA 0011B910 <- EU 0011B910 (Ghidra, non-matching)
// GLOBAL DAT_0011b924 undefined *
// GLOBAL DAT_0011b928 int

int func_0011B910(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b928;
  pcVar1 = DAT_0011b924;
  iVar3 = DAT_0011b928 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

