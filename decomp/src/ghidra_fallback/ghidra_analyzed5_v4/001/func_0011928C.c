#include "ghidra_types.h"

extern undefined *DAT_001192a0;
extern int DAT_001192a4;

// USA 0011928C <- EU 0011928C (Ghidra, non-matching)
// GLOBAL DAT_001192a0 undefined *
// GLOBAL DAT_001192a4 int

int func_0011928C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001192a4;
  pcVar1 = DAT_001192a0;
  iVar3 = DAT_001192a4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

