#include "ghidra_types.h"

extern undefined *DAT_0011de8c;
extern int DAT_0011de90;

// USA 0011DE78 <- EU 0011DE78 (Ghidra, non-matching)
// GLOBAL DAT_0011de8c undefined *
// GLOBAL DAT_0011de90 int

int func_0011DE78(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011de90;
  pcVar1 = DAT_0011de8c;
  iVar3 = DAT_0011de90 + 0x3c0;
  do {
    iVar3 = iVar3 + -0x18;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

