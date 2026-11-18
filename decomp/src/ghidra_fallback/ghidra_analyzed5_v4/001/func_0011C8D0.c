#include "ghidra_types.h"

extern undefined *DAT_0011c8e4;
extern int DAT_0011c8e8;

// USA 0011C8D0 <- EU 0011C8D0 (Ghidra, non-matching)
// GLOBAL DAT_0011c8e4 undefined *
// GLOBAL DAT_0011c8e8 int

int func_0011C8D0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c8e8;
  pcVar1 = DAT_0011c8e4;
  iVar3 = DAT_0011c8e8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

