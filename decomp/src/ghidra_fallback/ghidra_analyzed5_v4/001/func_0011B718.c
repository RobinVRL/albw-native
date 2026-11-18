#include "ghidra_types.h"

extern undefined *DAT_0011b72c;
extern int DAT_0011b730;

// USA 0011B718 <- EU 0011B718 (Ghidra, non-matching)
// GLOBAL DAT_0011b72c undefined *
// GLOBAL DAT_0011b730 int

int func_0011B718(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b730;
  pcVar1 = DAT_0011b72c;
  iVar3 = DAT_0011b730 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

