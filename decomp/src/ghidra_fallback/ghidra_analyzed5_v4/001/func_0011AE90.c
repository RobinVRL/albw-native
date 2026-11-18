#include "ghidra_types.h"

extern undefined *DAT_0011aea4;
extern int DAT_0011aea8;

// USA 0011AE90 <- EU 0011AE90 (Ghidra, non-matching)
// GLOBAL DAT_0011aea4 undefined *
// GLOBAL DAT_0011aea8 int

int func_0011AE90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aea8;
  pcVar1 = DAT_0011aea4;
  iVar3 = DAT_0011aea8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

