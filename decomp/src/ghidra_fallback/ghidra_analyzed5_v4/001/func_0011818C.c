#include "ghidra_types.h"

extern undefined *DAT_001181a0;
extern int DAT_001181a4;

// USA 0011818C <- EU 0011818C (Ghidra, non-matching)
// GLOBAL DAT_001181a0 undefined *
// GLOBAL DAT_001181a4 int

int func_0011818C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001181a4;
  pcVar1 = DAT_001181a0;
  iVar3 = DAT_001181a4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

