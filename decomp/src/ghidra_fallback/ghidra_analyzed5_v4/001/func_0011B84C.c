#include "ghidra_types.h"

extern undefined *DAT_0011b860;
extern int DAT_0011b864;

// USA 0011B84C <- EU 0011B84C (Ghidra, non-matching)
// GLOBAL DAT_0011b860 undefined *
// GLOBAL DAT_0011b864 int

int func_0011B84C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b864;
  pcVar1 = DAT_0011b860;
  iVar3 = DAT_0011b864 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

