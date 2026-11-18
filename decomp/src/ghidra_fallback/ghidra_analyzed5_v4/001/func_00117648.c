#include "ghidra_types.h"

extern undefined *DAT_0011765c;
extern int DAT_00117660;

// USA 00117648 <- EU 00117648 (Ghidra, non-matching)
// GLOBAL DAT_0011765c undefined *
// GLOBAL DAT_00117660 int

int func_00117648(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117660;
  pcVar1 = DAT_0011765c;
  iVar3 = DAT_00117660 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

