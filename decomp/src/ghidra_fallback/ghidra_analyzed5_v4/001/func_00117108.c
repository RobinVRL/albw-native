#include "ghidra_types.h"

extern undefined *DAT_0011711c;
extern int DAT_00117120;

// USA 00117108 <- EU 00117108 (Ghidra, non-matching)
// GLOBAL DAT_0011711c undefined *
// GLOBAL DAT_00117120 int

int func_00117108(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117120;
  pcVar1 = DAT_0011711c;
  iVar3 = DAT_00117120 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

