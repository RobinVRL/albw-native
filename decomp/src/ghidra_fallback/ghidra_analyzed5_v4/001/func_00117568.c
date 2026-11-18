#include "ghidra_types.h"

extern undefined *DAT_0011757c;
extern int DAT_00117580;

// USA 00117568 <- EU 00117568 (Ghidra, non-matching)
// GLOBAL DAT_0011757c undefined *
// GLOBAL DAT_00117580 int

int func_00117568(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117580;
  pcVar1 = DAT_0011757c;
  iVar3 = DAT_00117580 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

