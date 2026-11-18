#include "ghidra_types.h"

extern undefined *DAT_0011cf90;
extern int DAT_0011cf94;

// USA 0011CF7C <- EU 0011CF7C (Ghidra, non-matching)
// GLOBAL DAT_0011cf90 undefined *
// GLOBAL DAT_0011cf94 int

int func_0011CF7C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cf94;
  pcVar1 = DAT_0011cf90;
  iVar3 = DAT_0011cf94 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

