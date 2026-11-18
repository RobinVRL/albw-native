#include "ghidra_types.h"

extern undefined *DAT_00117b9c;
extern int DAT_00117ba0;

// USA 00117B88 <- EU 00117B88 (Ghidra, non-matching)
// GLOBAL DAT_00117b9c undefined *
// GLOBAL DAT_00117ba0 int

int func_00117B88(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117ba0;
  pcVar1 = DAT_00117b9c;
  iVar3 = DAT_00117ba0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

