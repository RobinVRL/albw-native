#include "ghidra_types.h"

extern undefined *DAT_0011cfe4;
extern int DAT_0011cfe8;

// USA 0011CFD0 <- EU 0011CFD0 (Ghidra, non-matching)
// GLOBAL DAT_0011cfe4 undefined *
// GLOBAL DAT_0011cfe8 int

int func_0011CFD0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cfe8;
  pcVar1 = DAT_0011cfe4;
  iVar3 = DAT_0011cfe8 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

