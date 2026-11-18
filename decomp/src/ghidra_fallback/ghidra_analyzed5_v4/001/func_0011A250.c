#include "ghidra_types.h"

extern undefined *DAT_0011a264;
extern int DAT_0011a268;

// USA 0011A250 <- EU 0011A250 (Ghidra, non-matching)
// GLOBAL DAT_0011a264 undefined *
// GLOBAL DAT_0011a268 int

int func_0011A250(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a268;
  pcVar1 = DAT_0011a264;
  iVar3 = DAT_0011a268 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

