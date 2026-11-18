#include "ghidra_types.h"

extern undefined *DAT_00118504;
extern int DAT_00118508;

// USA 001184F0 <- EU 001184F0 (Ghidra, non-matching)
// GLOBAL DAT_00118504 undefined *
// GLOBAL DAT_00118508 int

int func_001184F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118508;
  pcVar1 = DAT_00118504;
  iVar3 = DAT_00118508 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

