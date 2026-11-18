#include "ghidra_types.h"

extern undefined *DAT_001186d0;
extern int DAT_001186d4;

// USA 001186BC <- EU 001186BC (Ghidra, non-matching)
// GLOBAL DAT_001186d0 undefined *
// GLOBAL DAT_001186d4 int

int func_001186BC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001186d4;
  pcVar1 = DAT_001186d0;
  iVar3 = DAT_001186d4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

