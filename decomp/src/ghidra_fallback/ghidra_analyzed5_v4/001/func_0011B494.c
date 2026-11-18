#include "ghidra_types.h"

extern undefined *DAT_0011b4a8;
extern int DAT_0011b4ac;

// USA 0011B494 <- EU 0011B494 (Ghidra, non-matching)
// GLOBAL DAT_0011b4a8 undefined *
// GLOBAL DAT_0011b4ac int

int func_0011B494(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b4ac;
  pcVar1 = DAT_0011b4a8;
  iVar3 = DAT_0011b4ac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

