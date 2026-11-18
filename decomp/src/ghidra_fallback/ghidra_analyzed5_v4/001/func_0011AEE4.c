#include "ghidra_types.h"

extern undefined *DAT_0011aef8;
extern int DAT_0011aefc;

// USA 0011AEE4 <- EU 0011AEE4 (Ghidra, non-matching)
// GLOBAL DAT_0011aef8 undefined *
// GLOBAL DAT_0011aefc int

int func_0011AEE4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aefc;
  pcVar1 = DAT_0011aef8;
  iVar3 = DAT_0011aefc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

