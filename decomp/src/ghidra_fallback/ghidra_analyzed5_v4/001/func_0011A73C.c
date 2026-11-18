#include "ghidra_types.h"

extern undefined *DAT_0011a750;
extern int DAT_0011a754;

// USA 0011A73C <- EU 0011A73C (Ghidra, non-matching)
// GLOBAL DAT_0011a750 undefined *
// GLOBAL DAT_0011a754 int

int func_0011A73C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a754;
  pcVar1 = DAT_0011a750;
  iVar3 = DAT_0011a754 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

