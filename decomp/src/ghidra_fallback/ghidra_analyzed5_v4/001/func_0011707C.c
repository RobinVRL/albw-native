#include "ghidra_types.h"

extern undefined *DAT_00117090;
extern int DAT_00117094;

// USA 0011707C <- EU 0011707C (Ghidra, non-matching)
// GLOBAL DAT_00117090 undefined *
// GLOBAL DAT_00117094 int

int func_0011707C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117094;
  pcVar1 = DAT_00117090;
  iVar3 = DAT_00117094 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

