#include "ghidra_types.h"

extern undefined *DAT_0011acac;
extern int DAT_0011acb0;

// USA 0011AC98 <- EU 0011AC98 (Ghidra, non-matching)
// GLOBAL DAT_0011acac undefined *
// GLOBAL DAT_0011acb0 int

int func_0011AC98(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011acb0;
  pcVar1 = DAT_0011acac;
  iVar3 = DAT_0011acb0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

