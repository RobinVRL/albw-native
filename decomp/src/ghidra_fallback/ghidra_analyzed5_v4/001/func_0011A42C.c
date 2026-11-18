#include "ghidra_types.h"

extern undefined *DAT_0011a440;
extern int DAT_0011a444;

// USA 0011A42C <- EU 0011A42C (Ghidra, non-matching)
// GLOBAL DAT_0011a440 undefined *
// GLOBAL DAT_0011a444 int

int func_0011A42C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a444;
  pcVar1 = DAT_0011a440;
  iVar3 = DAT_0011a444 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

