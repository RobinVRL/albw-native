#include "ghidra_types.h"

extern undefined *DAT_0011b41c;
extern int DAT_0011b420;

// USA 0011B408 <- EU 0011B408 (Ghidra, non-matching)
// GLOBAL DAT_0011b41c undefined *
// GLOBAL DAT_0011b420 int

int func_0011B408(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b420;
  pcVar1 = DAT_0011b41c;
  iVar3 = DAT_0011b420 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

