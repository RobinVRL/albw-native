#include "ghidra_types.h"

extern undefined *DAT_0011c5f0;
extern int DAT_0011c5f4;

// USA 0011C5DC <- EU 0011C5DC (Ghidra, non-matching)
// GLOBAL DAT_0011c5f0 undefined *
// GLOBAL DAT_0011c5f4 int

int func_0011C5DC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c5f4;
  pcVar1 = DAT_0011c5f0;
  iVar3 = DAT_0011c5f4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

