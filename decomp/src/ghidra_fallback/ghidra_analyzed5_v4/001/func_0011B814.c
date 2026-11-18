#include "ghidra_types.h"

extern undefined *DAT_0011b828;
extern int DAT_0011b82c;

// USA 0011B814 <- EU 0011B814 (Ghidra, non-matching)
// GLOBAL DAT_0011b828 undefined *
// GLOBAL DAT_0011b82c int

int func_0011B814(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b82c;
  pcVar1 = DAT_0011b828;
  iVar3 = DAT_0011b82c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

