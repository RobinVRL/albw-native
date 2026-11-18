#include "ghidra_types.h"

extern undefined *DAT_0011c468;
extern int DAT_0011c46c;

// USA 0011C454 <- EU 0011C454 (Ghidra, non-matching)
// GLOBAL DAT_0011c468 undefined *
// GLOBAL DAT_0011c46c int

int func_0011C454(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c46c;
  pcVar1 = DAT_0011c468;
  iVar3 = DAT_0011c46c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

