#include "ghidra_types.h"

extern undefined *DAT_0011de54;
extern int DAT_0011de58;

// USA 0011DE40 <- EU 0011DE40 (Ghidra, non-matching)
// GLOBAL DAT_0011de54 undefined *
// GLOBAL DAT_0011de58 int

int func_0011DE40(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011de58;
  pcVar1 = DAT_0011de54;
  iVar3 = DAT_0011de58 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

