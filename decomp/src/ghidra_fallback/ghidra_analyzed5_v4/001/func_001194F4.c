#include "ghidra_types.h"

extern undefined *DAT_00119508;
extern int DAT_0011950c;

// USA 001194F4 <- EU 001194F4 (Ghidra, non-matching)
// GLOBAL DAT_00119508 undefined *
// GLOBAL DAT_0011950c int

int func_001194F4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011950c;
  pcVar1 = DAT_00119508;
  iVar3 = DAT_0011950c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

