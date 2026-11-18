#include "ghidra_types.h"

extern undefined *DAT_0011750c;
extern int DAT_00117510;

// USA 001174F8 <- EU 001174F8 (Ghidra, non-matching)
// GLOBAL DAT_0011750c undefined *
// GLOBAL DAT_00117510 int

int func_001174F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117510;
  pcVar1 = DAT_0011750c;
  iVar3 = DAT_00117510 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

