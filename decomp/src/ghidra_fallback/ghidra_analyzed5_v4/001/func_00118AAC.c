#include "ghidra_types.h"

extern undefined *DAT_00118ac0;
extern int DAT_00118ac4;

// USA 00118AAC <- EU 00118AAC (Ghidra, non-matching)
// GLOBAL DAT_00118ac0 undefined *
// GLOBAL DAT_00118ac4 int

int func_00118AAC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118ac4;
  pcVar1 = DAT_00118ac0;
  iVar3 = DAT_00118ac4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

