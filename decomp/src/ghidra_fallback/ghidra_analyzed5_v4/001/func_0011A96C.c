#include "ghidra_types.h"

extern undefined *DAT_0011a980;
extern int DAT_0011a984;

// USA 0011A96C <- EU 0011A96C (Ghidra, non-matching)
// GLOBAL DAT_0011a980 undefined *
// GLOBAL DAT_0011a984 int

int func_0011A96C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a984;
  pcVar1 = DAT_0011a980;
  iVar3 = DAT_0011a984 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

