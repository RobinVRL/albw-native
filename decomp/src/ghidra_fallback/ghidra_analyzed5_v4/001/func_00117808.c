#include "ghidra_types.h"

extern undefined *DAT_0011781c;
extern int DAT_00117820;

// USA 00117808 <- EU 00117808 (Ghidra, non-matching)
// GLOBAL DAT_0011781c undefined *
// GLOBAL DAT_00117820 int

int func_00117808(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117820;
  pcVar1 = DAT_0011781c;
  iVar3 = DAT_00117820 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

