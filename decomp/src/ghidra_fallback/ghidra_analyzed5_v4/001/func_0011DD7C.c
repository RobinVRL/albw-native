#include "ghidra_types.h"

extern undefined *DAT_0011dd90;
extern int DAT_0011dd94;

// USA 0011DD7C <- EU 0011DD7C (Ghidra, non-matching)
// GLOBAL DAT_0011dd90 undefined *
// GLOBAL DAT_0011dd94 int

int func_0011DD7C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dd94;
  pcVar1 = DAT_0011dd90;
  iVar3 = DAT_0011dd94 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

