#include "ghidra_types.h"

extern undefined *DAT_0011cdb4;
extern int DAT_0011cdb8;

// USA 0011CDA0 <- EU 0011CDA0 (Ghidra, non-matching)
// GLOBAL DAT_0011cdb4 undefined *
// GLOBAL DAT_0011cdb8 int

int func_0011CDA0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cdb8;
  pcVar1 = DAT_0011cdb4;
  iVar3 = DAT_0011cdb8 + 0x18;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

