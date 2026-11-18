#include "ghidra_types.h"

extern undefined *DAT_00118f04;
extern int DAT_00118f08;

// USA 00118EF0 <- EU 00118EF0 (Ghidra, non-matching)
// GLOBAL DAT_00118f04 undefined *
// GLOBAL DAT_00118f08 int

int func_00118EF0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118f08;
  pcVar1 = DAT_00118f04;
  iVar3 = DAT_00118f08 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

