#include "ghidra_types.h"

extern undefined *DAT_0011de70;
extern int DAT_0011de74;

// USA 0011DE5C <- EU 0011DE5C (Ghidra, non-matching)
// GLOBAL DAT_0011de70 undefined *
// GLOBAL DAT_0011de74 int

int func_0011DE5C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011de74;
  pcVar1 = DAT_0011de70;
  iVar3 = DAT_0011de74 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

