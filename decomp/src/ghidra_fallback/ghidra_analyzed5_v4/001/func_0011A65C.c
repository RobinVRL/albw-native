#include "ghidra_types.h"

extern undefined *DAT_0011a670;
extern int DAT_0011a674;

// USA 0011A65C <- EU 0011A65C (Ghidra, non-matching)
// GLOBAL DAT_0011a670 undefined *
// GLOBAL DAT_0011a674 int

int func_0011A65C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a674;
  pcVar1 = DAT_0011a670;
  iVar3 = DAT_0011a674 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

