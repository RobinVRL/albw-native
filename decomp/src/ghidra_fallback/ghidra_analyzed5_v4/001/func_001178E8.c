#include "ghidra_types.h"

extern undefined *DAT_001178fc;
extern int DAT_00117900;

// USA 001178E8 <- EU 001178E8 (Ghidra, non-matching)
// GLOBAL DAT_001178fc undefined *
// GLOBAL DAT_00117900 int

int func_001178E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117900;
  pcVar1 = DAT_001178fc;
  iVar3 = DAT_00117900 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

