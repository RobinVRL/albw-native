#include "ghidra_types.h"

extern undefined *DAT_001172c0;
extern int DAT_001172c4;

// USA 001172AC <- EU 001172AC (Ghidra, non-matching)
// GLOBAL DAT_001172c0 undefined *
// GLOBAL DAT_001172c4 int

int func_001172AC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001172c4;
  pcVar1 = DAT_001172c0;
  iVar3 = DAT_001172c4 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

