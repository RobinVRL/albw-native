#include "ghidra_types.h"

extern undefined *DAT_001187cc;
extern int DAT_001187d0;

// USA 001187B8 <- EU 001187B8 (Ghidra, non-matching)
// GLOBAL DAT_001187cc undefined *
// GLOBAL DAT_001187d0 int

int func_001187B8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001187d0;
  pcVar1 = DAT_001187cc;
  iVar3 = DAT_001187d0 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

