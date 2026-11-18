#include "ghidra_types.h"

extern undefined *DAT_0011d134;
extern int DAT_0011d138;

// USA 0011D120 <- EU 0011D120 (Ghidra, non-matching)
// GLOBAL DAT_0011d134 undefined *
// GLOBAL DAT_0011d138 int

int func_0011D120(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d138;
  pcVar1 = DAT_0011d134;
  iVar3 = DAT_0011d138 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

