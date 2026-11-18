#include "ghidra_types.h"

extern undefined *DAT_0011c254;
extern int DAT_0011c258;

// USA 0011C240 <- EU 0011C240 (Ghidra, non-matching)
// GLOBAL DAT_0011c254 undefined *
// GLOBAL DAT_0011c258 int

int func_0011C240(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c258;
  pcVar1 = DAT_0011c254;
  iVar3 = DAT_0011c258 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

