#include "ghidra_types.h"

extern undefined *DAT_0011be9c;
extern int DAT_0011bea0;

// USA 0011BE88 <- EU 0011BE88 (Ghidra, non-matching)
// GLOBAL DAT_0011be9c undefined *
// GLOBAL DAT_0011bea0 int

int func_0011BE88(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bea0;
  pcVar1 = DAT_0011be9c;
  iVar3 = DAT_0011bea0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

