#include "ghidra_types.h"

extern undefined *DAT_0011ad8c;
extern int DAT_0011ad90;

// USA 0011AD78 <- EU 0011AD78 (Ghidra, non-matching)
// GLOBAL DAT_0011ad8c undefined *
// GLOBAL DAT_0011ad90 int

int func_0011AD78(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ad90;
  pcVar1 = DAT_0011ad8c;
  iVar3 = DAT_0011ad90 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

