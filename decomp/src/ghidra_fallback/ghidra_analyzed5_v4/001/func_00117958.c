#include "ghidra_types.h"

extern undefined *DAT_0011796c;
extern int DAT_00117970;

// USA 00117958 <- EU 00117958 (Ghidra, non-matching)
// GLOBAL DAT_0011796c undefined *
// GLOBAL DAT_00117970 int

int func_00117958(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117970;
  pcVar1 = DAT_0011796c;
  iVar3 = DAT_00117970 + 0x50;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

