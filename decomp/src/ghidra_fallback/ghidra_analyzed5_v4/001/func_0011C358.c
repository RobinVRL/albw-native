#include "ghidra_types.h"

extern undefined *DAT_0011c36c;
extern int DAT_0011c370;

// USA 0011C358 <- EU 0011C358 (Ghidra, non-matching)
// GLOBAL DAT_0011c36c undefined *
// GLOBAL DAT_0011c370 int

int func_0011C358(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c370;
  pcVar1 = DAT_0011c36c;
  iVar3 = DAT_0011c370 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

