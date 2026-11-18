#include "ghidra_types.h"

extern undefined *DAT_0011a814;
extern int DAT_0011a818;

// USA 0011A800 <- EU 0011A800 (Ghidra, non-matching)
// GLOBAL DAT_0011a814 undefined *
// GLOBAL DAT_0011a818 int

int func_0011A800(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a818;
  pcVar1 = DAT_0011a814;
  iVar3 = DAT_0011a818 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

