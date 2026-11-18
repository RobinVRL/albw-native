#include "ghidra_types.h"

extern undefined *DAT_0011da64;
extern int DAT_0011da68;

// USA 0011DA50 <- EU 0011DA50 (Ghidra, non-matching)
// GLOBAL DAT_0011da64 undefined *
// GLOBAL DAT_0011da68 int

int func_0011DA50(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011da68;
  pcVar1 = DAT_0011da64;
  iVar3 = DAT_0011da68 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

