#include "ghidra_types.h"

extern undefined *DAT_0011c484;
extern int DAT_0011c488;

// USA 0011C470 <- EU 0011C470 (Ghidra, non-matching)
// GLOBAL DAT_0011c484 undefined *
// GLOBAL DAT_0011c488 int

int func_0011C470(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c488;
  pcVar1 = DAT_0011c484;
  iVar3 = DAT_0011c488 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

