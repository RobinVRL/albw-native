#include "ghidra_types.h"

extern undefined *DAT_0011cdd0;
extern int DAT_0011cdd4;

// USA 0011CDBC <- EU 0011CDBC (Ghidra, non-matching)
// GLOBAL DAT_0011cdd0 undefined *
// GLOBAL DAT_0011cdd4 int

int func_0011CDBC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cdd4;
  pcVar1 = DAT_0011cdd0;
  iVar3 = DAT_0011cdd4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

