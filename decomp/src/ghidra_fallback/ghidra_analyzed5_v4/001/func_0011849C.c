#include "ghidra_types.h"

extern undefined *DAT_001184b0;
extern int DAT_001184b4;

// USA 0011849C <- EU 0011849C (Ghidra, non-matching)
// GLOBAL DAT_001184b0 undefined *
// GLOBAL DAT_001184b4 int

int func_0011849C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001184b4;
  pcVar1 = DAT_001184b0;
  iVar3 = DAT_001184b4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

