#include "ghidra_types.h"

extern undefined *DAT_00118bd8;
extern int DAT_00118bdc;

// USA 00118BC4 <- EU 00118BC4 (Ghidra, non-matching)
// GLOBAL DAT_00118bd8 undefined *
// GLOBAL DAT_00118bdc int

int func_00118BC4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118bdc;
  pcVar1 = DAT_00118bd8;
  iVar3 = DAT_00118bdc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

