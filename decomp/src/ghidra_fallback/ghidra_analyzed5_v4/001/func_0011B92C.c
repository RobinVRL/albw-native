#include "ghidra_types.h"

extern undefined *DAT_0011b940;
extern int DAT_0011b944;

// USA 0011B92C <- EU 0011B92C (Ghidra, non-matching)
// GLOBAL DAT_0011b940 undefined *
// GLOBAL DAT_0011b944 int

int func_0011B92C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b944;
  pcVar1 = DAT_0011b940;
  iVar3 = DAT_0011b944 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

