#include "ghidra_types.h"

extern undefined *DAT_0011703c;
extern int DAT_00117040;

// USA 00117028 <- EU 00117028 (Ghidra, non-matching)
// GLOBAL DAT_0011703c undefined *
// GLOBAL DAT_00117040 int

int func_00117028(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117040;
  pcVar1 = DAT_0011703c;
  iVar3 = DAT_00117040 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

