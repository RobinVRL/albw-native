#include "ghidra_types.h"

extern undefined *DAT_00117704;
extern int DAT_00117708;

// USA 001176F0 <- EU 001176F0 (Ghidra, non-matching)
// GLOBAL DAT_00117704 undefined *
// GLOBAL DAT_00117708 int

int func_001176F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117708;
  pcVar1 = DAT_00117704;
  iVar3 = DAT_00117708 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

