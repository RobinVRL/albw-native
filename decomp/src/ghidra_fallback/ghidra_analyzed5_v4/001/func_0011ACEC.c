#include "ghidra_types.h"

extern undefined *DAT_0011ad00;
extern int DAT_0011ad04;

// USA 0011ACEC <- EU 0011ACEC (Ghidra, non-matching)
// GLOBAL DAT_0011ad00 undefined *
// GLOBAL DAT_0011ad04 int

int func_0011ACEC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ad04;
  pcVar1 = DAT_0011ad00;
  iVar3 = DAT_0011ad04 + 0x88;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

