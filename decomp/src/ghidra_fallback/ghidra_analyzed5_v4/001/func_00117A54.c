#include "ghidra_types.h"

extern undefined *DAT_00117a68;
extern int DAT_00117a6c;

// USA 00117A54 <- EU 00117A54 (Ghidra, non-matching)
// GLOBAL DAT_00117a68 undefined *
// GLOBAL DAT_00117a6c int

int func_00117A54(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117a6c;
  pcVar1 = DAT_00117a68;
  iVar3 = DAT_00117a6c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

