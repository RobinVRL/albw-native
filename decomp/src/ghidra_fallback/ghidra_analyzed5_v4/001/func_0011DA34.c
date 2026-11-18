#include "ghidra_types.h"

extern undefined *DAT_0011da48;
extern int DAT_0011da4c;

// USA 0011DA34 <- EU 0011DA34 (Ghidra, non-matching)
// GLOBAL DAT_0011da48 undefined *
// GLOBAL DAT_0011da4c int

int func_0011DA34(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011da4c;
  pcVar1 = DAT_0011da48;
  iVar3 = DAT_0011da4c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

