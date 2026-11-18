#include "ghidra_types.h"

extern undefined *DAT_00118b84;
extern int DAT_00118b88;

// USA 00118B70 <- EU 00118B70 (Ghidra, non-matching)
// GLOBAL DAT_00118b84 undefined *
// GLOBAL DAT_00118b88 int

int func_00118B70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118b88;
  pcVar1 = DAT_00118b84;
  iVar3 = DAT_00118b88 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

