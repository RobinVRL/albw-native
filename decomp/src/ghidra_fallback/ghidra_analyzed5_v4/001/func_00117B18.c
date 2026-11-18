#include "ghidra_types.h"

extern undefined *DAT_00117b2c;
extern int DAT_00117b30;

// USA 00117B18 <- EU 00117B18 (Ghidra, non-matching)
// GLOBAL DAT_00117b2c undefined *
// GLOBAL DAT_00117b30 int

int func_00117B18(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117b30;
  pcVar1 = DAT_00117b2c;
  iVar3 = DAT_00117b30 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

