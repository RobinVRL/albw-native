#include "ghidra_types.h"

extern undefined *DAT_0011aad0;
extern int DAT_0011aad4;

// USA 0011AABC <- EU 0011AABC (Ghidra, non-matching)
// GLOBAL DAT_0011aad0 undefined *
// GLOBAL DAT_0011aad4 int

int func_0011AABC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aad4;
  pcVar1 = DAT_0011aad0;
  iVar3 = DAT_0011aad4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

