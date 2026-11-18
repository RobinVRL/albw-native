#include "ghidra_types.h"

extern undefined *DAT_0011bf98;
extern int DAT_0011bf9c;

// USA 0011BF84 <- EU 0011BF84 (Ghidra, non-matching)
// GLOBAL DAT_0011bf98 undefined *
// GLOBAL DAT_0011bf9c int

int func_0011BF84(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bf9c;
  pcVar1 = DAT_0011bf98;
  iVar3 = DAT_0011bf9c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

