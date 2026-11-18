#include "ghidra_types.h"

extern undefined *DAT_0011bc50;
extern int DAT_0011bc54;

// USA 0011BC3C <- EU 0011BC3C (Ghidra, non-matching)
// GLOBAL DAT_0011bc50 undefined *
// GLOBAL DAT_0011bc54 int

int func_0011BC3C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bc54;
  pcVar1 = DAT_0011bc50;
  iVar3 = DAT_0011bc54 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

