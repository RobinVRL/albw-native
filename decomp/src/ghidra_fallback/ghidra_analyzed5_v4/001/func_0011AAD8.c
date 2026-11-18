#include "ghidra_types.h"

extern undefined *DAT_0011aaec;
extern int DAT_0011aaf0;

// USA 0011AAD8 <- EU 0011AAD8 (Ghidra, non-matching)
// GLOBAL DAT_0011aaec undefined *
// GLOBAL DAT_0011aaf0 int

int func_0011AAD8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aaf0;
  pcVar1 = DAT_0011aaec;
  iVar3 = DAT_0011aaf0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

