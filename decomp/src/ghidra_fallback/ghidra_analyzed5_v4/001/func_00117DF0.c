#include "ghidra_types.h"

extern undefined *DAT_00117e04;
extern int DAT_00117e08;

// USA 00117DF0 <- EU 00117DF0 (Ghidra, non-matching)
// GLOBAL DAT_00117e04 undefined *
// GLOBAL DAT_00117e08 int

int func_00117DF0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117e08;
  pcVar1 = DAT_00117e04;
  iVar3 = DAT_00117e08 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

