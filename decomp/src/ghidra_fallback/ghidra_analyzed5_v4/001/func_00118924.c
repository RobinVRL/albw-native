#include "ghidra_types.h"

extern undefined *DAT_00118938;
extern int DAT_0011893c;

// USA 00118924 <- EU 00118924 (Ghidra, non-matching)
// GLOBAL DAT_00118938 undefined *
// GLOBAL DAT_0011893c int

int func_00118924(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011893c;
  pcVar1 = DAT_00118938;
  iVar3 = DAT_0011893c + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

