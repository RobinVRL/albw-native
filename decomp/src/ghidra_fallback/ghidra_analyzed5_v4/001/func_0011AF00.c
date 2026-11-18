#include "ghidra_types.h"

extern undefined *DAT_0011af14;
extern int DAT_0011af18;

// USA 0011AF00 <- EU 0011AF00 (Ghidra, non-matching)
// GLOBAL DAT_0011af14 undefined *
// GLOBAL DAT_0011af18 int

int func_0011AF00(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011af18;
  pcVar1 = DAT_0011af14;
  iVar3 = DAT_0011af18 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

