#include "ghidra_types.h"

extern undefined *DAT_0011beb8;
extern int DAT_0011bebc;

// USA 0011BEA4 <- EU 0011BEA4 (Ghidra, non-matching)
// GLOBAL DAT_0011beb8 undefined *
// GLOBAL DAT_0011bebc int

int func_0011BEA4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bebc;
  pcVar1 = DAT_0011beb8;
  iVar3 = DAT_0011bebc + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

