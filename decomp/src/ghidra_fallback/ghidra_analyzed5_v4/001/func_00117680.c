#include "ghidra_types.h"

extern undefined *DAT_00117694;
extern int DAT_00117698;

// USA 00117680 <- EU 00117680 (Ghidra, non-matching)
// GLOBAL DAT_00117694 undefined *
// GLOBAL DAT_00117698 int

int func_00117680(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117698;
  pcVar1 = DAT_00117694;
  iVar3 = DAT_00117698 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

