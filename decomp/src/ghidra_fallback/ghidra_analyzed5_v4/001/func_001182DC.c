#include "ghidra_types.h"

extern undefined *DAT_001182f0;
extern int DAT_001182f4;

// USA 001182DC <- EU 001182DC (Ghidra, non-matching)
// GLOBAL DAT_001182f0 undefined *
// GLOBAL DAT_001182f4 int

int func_001182DC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001182f4;
  pcVar1 = DAT_001182f0;
  iVar3 = DAT_001182f4 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

