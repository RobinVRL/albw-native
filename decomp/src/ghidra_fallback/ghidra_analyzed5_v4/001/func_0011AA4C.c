#include "ghidra_types.h"

extern undefined *DAT_0011aa60;
extern int DAT_0011aa64;

// USA 0011AA4C <- EU 0011AA4C (Ghidra, non-matching)
// GLOBAL DAT_0011aa60 undefined *
// GLOBAL DAT_0011aa64 int

int func_0011AA4C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aa64;
  pcVar1 = DAT_0011aa60;
  iVar3 = DAT_0011aa64 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

