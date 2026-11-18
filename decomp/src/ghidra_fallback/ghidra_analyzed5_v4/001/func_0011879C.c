#include "ghidra_types.h"

extern undefined *DAT_001187b0;
extern int DAT_001187b4;

// USA 0011879C <- EU 0011879C (Ghidra, non-matching)
// GLOBAL DAT_001187b0 undefined *
// GLOBAL DAT_001187b4 int

int func_0011879C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001187b4;
  pcVar1 = DAT_001187b0;
  iVar3 = DAT_001187b4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

