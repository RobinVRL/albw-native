#include "ghidra_types.h"

extern undefined *DAT_00118168;
extern int DAT_0011816c;

// USA 00118154 <- EU 00118154 (Ghidra, non-matching)
// GLOBAL DAT_00118168 undefined *
// GLOBAL DAT_0011816c int

int func_00118154(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011816c;
  pcVar1 = DAT_00118168;
  iVar3 = DAT_0011816c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

